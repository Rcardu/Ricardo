#include "config.h"

namespace Ricardo {

ConfigVarBase::ptr Config::LookupBase(const std::string& name) {
  RWMutexType::ReadLock rdlock(GetMutex());
  auto it = GetDatas().find(name);
  //如果在Map中有记录就返回此指针
  return it == GetDatas().end() ? nullptr : it->second;
}

static void ListAllMember(
    const std::string& prefix, const YAML::Node& node,
    std::list<std::pair<std::string, const YAML::Node>>& output) {

  if (prefix.find_first_not_of(
          "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ._012345678") !=
      std::string::npos) {

    ICEY_LOG_ERROR(ICEY_LOG_ROOT())
        << "config invalid name: " << prefix << " : " << node;
    return;
  }
  output.push_back(std::make_pair(prefix, node));
  if (node.IsMap()) {
    for (auto it = node.begin(); it != node.end(); it++) {

      ListAllMember(prefix.empty() ? it->first.Scalar()
                                   : prefix + "." + it->first.Scalar(),
                    it->second, output);
    }
  }
}

//从Yaml中加载日志配置
void Config::LoadFormYaml(const YAML::Node& root) {

  std::list<std::pair<std::string, const YAML::Node>> all_nodes;
  ListAllMember("", root, all_nodes);

  for (auto& i : all_nodes) {

    std::string key = i.first;
    if (key.empty())
      continue;
    std::transform(key.begin(), key.end(), key.begin(), ::tolower);
    //获取基类指针
    ConfigVarBase::ptr var = LookupBase(key);

    if (var) {
      //如果是标量就将此标量转换
      if (i.second.IsScalar()) {

        var->fromString(i.second.Scalar());
      } else {
        std::stringstream ss;
        ss << i.second;
        var->fromString(ss.str());
      }
    }
  }
}

  void Config::Visit(std::function<void(ConfigVarBase::ptr)>cb){
    RWMutexType::ReadLock rdlock(GetMutex());
    ConfigVarMap& m = GetDatas(); 
    for(auto it = m.begin(); it != m.end(); ++it){
        cb(it->second);
    }

  }




}  // namespace Ricardo
