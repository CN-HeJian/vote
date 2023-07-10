#ifndef VOTE_SERVER_CLIENTPROXY_H
#define VOTE_SERVER_CLIENTPROXY_H

#include "pistache/endpoint.h"
#include "pistache/http.h"
#include "pistache/router.h"
#include "rapidjson/document.h"
#include "log.h"

class clientProxy {
public:
    //初始化
     void clientProxyInit(){
        Pistache::Port port(9900);
        Pistache::Address addr(Pistache::Ipv4::any(), port);
        std::shared_ptr<Pistache::Http::Endpoint> endpoint = std::make_shared<Pistache::Http::Endpoint>(addr);
        auto opts = Pistache::Http::Endpoint::options().threads(1);
        endpoint->init(opts);
        registrationInterface();
        endpoint->setHandler(router.handler());
        endpoint->serve();
     }
private:
     //注册入口
     void registrationInterface();
     //注册的API
     void voteLogin_option(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp);
     void voteLogin(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp);
     void voteCreate(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp);
     void voteJudge(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp);
     void voteGetAllVotes(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp);
     void voteGetOnesVotes(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp);
     void voteGetVoteRes(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp);
     //路由
     Pistache::Rest::Router router;
     //日志
     LogFile lg;
};

#endif //VOTE_SERVER_CLIENTPROXY_H
