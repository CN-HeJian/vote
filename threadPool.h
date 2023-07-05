#ifndef CACHESYSTEM_THREADPOOL_H
#define CACHESYSTEM_THREADPOOL_H

#include "pthread.h"

#include "safeQueue.h"
#include "task.h"

// class Task;
// template<typename T> class SafeQueue;

class ThreadPool{
public:
    ThreadPool(int min,int max);
    ~ThreadPool();
    //addTask
    void addTask(Task tk);
    //get the number of Busy thread
    int getBusyThreadCount();
    //get the number of alive threads 
    int getAliveThreadCount();

private:
    static void* worker(void* arg);
    static void* manager(void * arg);
    void threadExit();
private:
    pthread_mutex_t m_mutex;
    pthread_cond_t m_notEmpty;
    //核心线程数
    int m_minNum;
    //最大线程数
    int m_maxNum;
    //忙碌的线程数
    int m_busyCount;
    //存活的线程数
    int m_aliveCount;
    //
    int m_exitCount;
    bool m_shutDown = false;

    pthread_t* m_threadIDs;
    pthread_t m_managerId;

    SafeQueue<Task>* m_queue;
};

#endif
