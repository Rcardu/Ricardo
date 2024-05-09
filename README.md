# Ricardo

## 开发环境
    Ubutun 22.04.3 LTS
    gcc 12
    cmake 3.20

## 项目路径
bin -- 二进制
build -- 中间文件路径
cmake -- cmake函数文件
CMakeLists.txt  -- cmake的定义文件
lib -- 库的输出路径
Makefile
sylar -- 源代码路径
tests -- 测试代码

## 日志系统
1）
    log4J

    logger(定义日志类别)
        |
        |---------Formatter(日志格式)
        |
      Appender(日志输出地方)

## 配置系统

Config --> Yaml

yamp-cpp: github
mkdir build && cd build && cmake .. && make install

```cpp
YAML::Node::node = YAML::LoadFile(fillename);

node.IsMap()
for(auto it = node.begin();it!=node.end();it++){
     
    it->first,it->second
}

node.IsSequence()
for(size_t i = 0;i < node.size();i++){

}

node.IsScalar();
```

配置系统的原则：约定优于配置

```cpp
template<T, ForStr, ToStr>
class ConfigVar;
LexicalCast;

//容器片特化，目前支持vector
// list、set、map、unordered_map、unordered_set
// map/unordered_map 支持key=std::string 
// Config::Lookup(key),key相同，类型不同，不会报错
```

自定义类型，需要实现Ricard::LexicalCast，片特化
实现后，就可以支持Config解析自定义，自定义类型可以和常规
stl容器一起使用。

配置的事件机制
当一个配置项发生修改的时候，可以反向通知对应的代码，回调
## 协程库封装

## socket系列函数库

## http协议开发

## 分布式协议

## 推荐系统
