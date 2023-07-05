#include "threadPool.h"
#include "requestHandler.h"

int main() {
    //Http::listenAndServe<HelloHandler>(Pistache::Address("*:9080"));
    std::unique_ptr<ThreadPool> thp(new ThreadPool(4,8));
    //thp->addTask();
}
