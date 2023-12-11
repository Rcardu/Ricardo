#include "config.h"


namespace Ricardo{

Config::ConfigVarMap Config::s_datas;
ConfigVarBase::ptr Config::LookupBase(const std::string& name){

    auto it = s_datas.find(name);
    //如果在Map中有记录就返回此指针
    return it == s_datas.end() ? nullptr : it->second;
}

static void ListAllMember(const std::string& prefix, const YAML::Node& node, 
                        std::list<std::pair<std::string, const YAML::Node>>& output){

    if(prefix.find_first_not_of("abcdefghijklmnopqrstuvwxyz._012345678") != std::string::npos){

        SYLAR_LOG_ERROR(SYLAR_LOG_ROOT())<<"config invalid name: "<<prefix<<" : "<<node;
        return ;
    }
    output.push_back(std::make_pair(prefix,node));
    if(node.IsMap()){
        for(auto it=node.begin(); it != node.end();it++){

            ListAllMember(prefix.empty() ? it->first.Scalar()  : prefix + "." + it->first.Scalar(),it->second, output);
        }
    }
}

//从Yaml中加载
void Config::LoadFormYaml(const YAML::Node& root ){

    std::list<std::pair<std::string, const YAML::Node>> all_nodes;
    ListAllMember("", root, all_nodes);

    for(auto& i : all_nodes){
        
        std::string key = i.first;
        if(key.empty())continue;
        std::transform(key.begin(),key.end(),key.begin(),::tolower);
        //获取基类指针
        ConfigVarBase::ptr var = LookupBase(key);

        if(var){
            //如果是标量就将此标量转换
            if(i.second.IsScalar()){

                var->fromString(i.second.Scalar());
            }else{
                std::stringstream ss;
                ss << i.second;
                var->fromString(ss.str());
            }
        }

    }
}
}