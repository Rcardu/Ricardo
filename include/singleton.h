#pragma once
#include "stdhead.h"

namespace Ricardo{

template<class T,class x = void,int N=0>
class Singleton{
public:
    static T* GetInstance(){
        static T v;
        return &v;
    }
};
template<class T,class x = void,int N=0>
class SingletonPtr{
public:
    static std::shared_ptr<T> GetInstance(){
        static std::shared_ptr<T> v(new T);
        return v;
    }
};

}