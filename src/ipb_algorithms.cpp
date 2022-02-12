#include "name_container.hpp"
#include <cmath>
#include <iostream>

using namespace ipb;
template <typename T>
int accumulate(named_vector<T>& vec){
    T sum = 0;
    for(int i = 0; i < vec.size(); i++){
        sum += *vec.vector();
    }
    return sum;
}

template <typename T>
int count(named_vector<T>& vec){
    return vec.size();
}
template <typename T>
bool all_even(named_vector<T>& vec){
    for(int i = 0; i < vec.size(); i++){
        if(*vec.vector() % 2 != 0){
            return false;
        }
    }
    return true;
}

template <typename T>
void fill(){

}
template <typename T>
bool find(T& value, named_vector<T>& vec){
    for(int i = 0; i < vec.size(); i++){
        if(vec.at(i) == value){
            return true;
        }
    }
    return false;
}

template <typename T>
void print(named_vector<T>& vec){
    std::cout<<vec.name();
    for(int i = 0; i < vec.size(); i++){
        std::cout<<vec.at(i);
    }
}
/*
template <typename T>
void toupper(named_vector<T>& vec){
    if(vec.name()){
        std::for_each(vec.name().begin(), vec.name().end(), [](char & c){
        c = ::toupper(c);
        }
    }
}

template <typename T>
void rotate(){
    
}

template <typename T>
void reverse(){
    
}
*/