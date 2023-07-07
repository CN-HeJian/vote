#include "serverProxy.h"

serverProxy::~serverProxy() {
    close(clientFd);
}

std::string serverProxy::remoteCall(std::string msg) {
    //创建套接字
    clientFd = socket(AF_INET, SOCK_STREAM, 0);
    if(clientFd == -1){
        std::cout << "create client socket error." << std::endl;
        close(clientFd);
        return "";
    }
    //连接服务器
    struct sockaddr_in serveraddr;
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr(SERVER_ADDRESS);
    serveraddr.sin_port = htons(SERVER_PORT);
    if (connect(clientFd, (struct sockaddr *)&serveraddr, sizeof(serveraddr)) == -1){
        std::cout << "connect socket error." << errno <<std::endl;
        return "";
    }
    int send_ret = send(clientFd, (const void *)msg.c_str(),msg.length(), 0);
    if(send_ret < 0){
        printf("send msg error: %s(errno: %d)\n", strerror(errno), errno);
    }
    //直接调用recv函数，程序会阻塞在recv函数调用处
    char recvbuf[256] = {0};
    int recv_ret = recv(clientFd, recvbuf, 256, 0);
    if (recv_ret > 0){
        std::string str1(recvbuf);
        std::cout << "recv successfully." << str1<<std::endl;
        return str1;
    }else{
        std::cout << "recv data error." << std::endl;
    }
    return "";
}
