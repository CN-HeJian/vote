#ifndef CACHESYSTEM_TASK_H
#define CACHESYSTEM_TASK_H


//using callback = void(*)(void*);

#include <functional>
#include <iostream>
#include <memory>

typedef std::function<void(void*)> callback;

struct Task{
    Task(){
        function = nullptr;
        arg = nullptr;
    }
    Task(callback f, void* arg){
        function = f;
        this->arg = arg;
    }
    callback function;
    void* arg;
};


#endif