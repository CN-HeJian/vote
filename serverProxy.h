//
// Created by 22770 on 2023/7/6.
//

#ifndef VOTE_SERVER_SERVERPROXY_H
#define VOTE_SERVER_SERVERPROXY_H

#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <iostream>
#include <string.h>

#define SERVER_ADDRESS "172.20.10.8"
#define SERVER_PORT     9080

class serverProxy {
public:
    ~serverProxy();
    //初始化
    std::string remoteCall(std::string msg);
private:
    int clientFd;
};

#endif //VOTE_SERVER_SERVERPROXY_H
