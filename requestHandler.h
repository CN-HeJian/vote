//
// Created by 22770 on 2023/7/5.
//
#include <pistache/endpoint.h>
using namespace Pistache;


#ifndef VOTE_SERVER_REQUESTHANDLER_H
#define VOTE_SERVER_REQUESTHANDLER_H


class HelloHandler : public Http::Handler {
public:
    HTTP_PROTOTYPE(HelloHandler)
    void onRequest(const Http::Request&, Http::ResponseWriter writer) override {
        //
        //task -->  threadpool -->request response -->  ---> cal  -->response.send()
        writer.headers().add<Http::Header::AccessControlAllowOrigin>("*");
        writer.send(Http::Code::Ok, "Hello, World!");
    }


};

#endif //VOTE_SERVER_REQUESTHANDLER_H
