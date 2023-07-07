#include "pistache/endpoint.h"
#include "clientProxy.h"

//void* work_server(void* args){
//    CacheServer server;
//    server.setPort(6343);
//    server.init();
//    int ret = server.startListen();
//    if(ret != 0){
//        std::cout<<"Server failed"<<std::endl;
//    }
//    std::cout<<"test"<<std::endl;
//    server.eventLoop();
//}

int main() {
//    pthread_t server;
//    int serverRet = pthread_create(&server,NULL,work_server,NULL);
//    if(serverRet != 0){
//        std::cout<<"server failed"<<std::endl;
//    }

    clientProxy client;
    client.clientProxyInit();

//    pthread_exit(NULL);
}
