#include <google/protobuf/util/json_util.h>
#include "clientProxy.h"
#include "serverProxy.h"
//登录
#include "./protobuf/loginRequest.pb.h"
#include "./protobuf/loginResponse.pb.h"
//发起投票
#include "./protobuf/createVoteResponse.pb.h"
#include "./protobuf/createVote.pb.h"
//提交打分
#include "./protobuf/vote.pb.h"
#include "./protobuf/voteResponse.pb.h"
//获取投票结果
#include "./protobuf/getVoteResult.pb.h"
//获取所有投票
#include "./protobuf/getAllVotes.pb.h"
#include "./protobuf/getAllVotesResponse.pb.h"
//获取某个人的投票
#include "./protobuf/getVoteResultByOneJudge.pb.h"
#include "./protobuf/getVoteResultByOneJudgeResponse.pb.h"

//路由入口
void clientProxy::registrationInterface(){
    //登录
    Pistache::Rest::Routes::Post(router, "/api/voteLogin", Pistache::Rest::Routes::bind(&clientProxy::voteLogin,this));
    Pistache::Rest::Routes::Options(router, "/api/voteLogin", Pistache::Rest::Routes::bind(&clientProxy::voteLogin_option,this));
    //创建投票
    Pistache::Rest::Routes::Post(router, "/api/voteCreate", Pistache::Rest::Routes::bind(&clientProxy::voteCreate,this));
    Pistache::Rest::Routes::Options(router, "/api/voteCreate", Pistache::Rest::Routes::bind(&clientProxy::voteLogin_option,this));
    //打分---POST
    Pistache::Rest::Routes::Post(router, "/api/voteJudge", Pistache::Rest::Routes::bind(&clientProxy::voteJudge,this));
    Pistache::Rest::Routes::Options(router, "/api/voteJudge", Pistache::Rest::Routes::bind(&clientProxy::voteLogin_option,this));
    //获取所有投票---GET
    Pistache::Rest::Routes::Get(router, "/api/voteGetAllVotes", Pistache::Rest::Routes::bind(&clientProxy::voteGetAllVotes,this));
    Pistache::Rest::Routes::Options(router, "/api/voteGetAllVotes", Pistache::Rest::Routes::bind(&clientProxy::voteLogin_option,this));
    //获取某个人管理的投票---GET
    Pistache::Rest::Routes::Get(router, "/api/voteGetOnesVotes/:JudgeName?", Pistache::Rest::Routes::bind(&clientProxy::voteGetOnesVotes,this));
    Pistache::Rest::Routes::Options(router, "/api/voteGetOnesVotes/:JudgeName?", Pistache::Rest::Routes::bind(&clientProxy::voteLogin_option,this));
    //获取某次投票结果---GET
    Pistache::Rest::Routes::Get(router, "/api/voteGetVoteRes/:VoteId?", Pistache::Rest::Routes::bind(&clientProxy::voteGetVoteRes,this));
    Pistache::Rest::Routes::Options(router, "/api/voteGetVoteRes/:VoteId?", Pistache::Rest::Routes::bind(&clientProxy::voteLogin_option,this));
}

//登录请求 json-->protubuf
void voteLogin_JsonToProtobuf(rapidjson::Document& doc,protoMsg::LoginRequest &lgrq){
    if(doc.HasMember("uname")){
        std::string una = doc["uname"].GetString();
        lgrq.set_uname(una);
    }else{
        return ;
    }
    if(doc.HasMember("upwd")){
        std::string upw = doc["upwd"].GetString();
        lgrq.set_upwd(upw);
    }else{
        return ;
    }
}

//登录的请求---post
void clientProxy::voteLogin(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp) {
    //String--->Json
    rapidjson::Document doc;
    doc.Parse(req.body().c_str());
    protoMsg::LoginRequest lgrq;
    //Json--->Protubuf
    voteLogin_JsonToProtobuf(doc,lgrq);
    //Protubuf--->String
    std::string lgrq_str;
    lgrq.SerializeToString(&lgrq_str);
    lgrq_str = "1"+lgrq_str;
    std::cout<<lgrq_str<<std::endl;
    //从服务端查询结果
    serverProxy sp;
    std::string resp_str = sp.remoteCall(lgrq_str);
    //String--->Protubuf--->Json
    protoMsg::LoginResponse lgrsp;
    lgrsp.ParseFromString(resp_str);
    std::cout<<"服务端查询的"<<lgrq_str<<std::endl;

    //Mock
//    protoMsg::LoginResponse lgrsp;
//    lgrsp.set_uname("admin");
//    lgrsp.set_id("3");

    //Protubuf-->string
    std::string result;
    auto ret = google::protobuf::util::MessageToJsonString(lgrsp,&result);
    //send
    resp.headers().add<Pistache::Http::Header::AccessControlAllowOrigin>("*");
    resp.send(Pistache::Http::Code::Ok, result);
}

//登录的请求---option
void clientProxy::voteLogin_option(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp) {
    resp.headers().add<Pistache::Http::Header::AccessControlAllowOrigin>("*");
    resp.headers().add<Pistache::Http::Header::AccessControlAllowHeaders>("*");
    resp.send(Pistache::Http::Code::Ok);
}

//创建投票 json-->protubuf
void voteCreate_JsonToProtobuf(rapidjson::Document& doc,protoMsg::CreateVote &cvrq){
    if(doc.HasMember("type")){
        std::string type = doc["type"].GetString();
        cvrq.set_type(type);
    }else{
        return ;
    }
    if(doc.HasMember("voteName")){
        std::string voteName = doc["voteName"].GetString();
        cvrq.set_votename(voteName);
    }else{
        return ;
    }
    std::string dazhongWeight = doc["dazhongWeight"].GetString();
    cvrq.set_dazhongweight(dazhongWeight);
    std::string zhuanyeWeight = doc["zhuanyeWeight"].GetString();
    cvrq.set_zhuanyeweight(zhuanyeWeight);
    std::string deadline = doc["deadline"].GetString();

    cvrq.set_deadline(deadline);

    const rapidjson::Value &arr = doc["Judge"];
    for(rapidjson::SizeType i = 0; i < arr.Size(); i++){
        const rapidjson::Value& obj = arr[i];
        std::cout<<obj["name"].GetString()<<std::endl;
        std::cout<<obj["ID"].GetString()<<std::endl;
        protoMsg::CreateVote_Judge* judge = cvrq.add_judgechoose();
        std::string judgeName = obj["name"].GetString();
        std::string judgeId = obj["ID"].GetString();
        std::cout<<judgeName<<" "<<judgeId<<std::endl;
        judge->set_name(judgeName.c_str());
        judge->set_id(judgeId.c_str());
    }

    const rapidjson::Value &arr_playerChoose = doc["playerChoose"];
    for(rapidjson::SizeType i=0;i<arr_playerChoose.Size();i++){
        const rapidjson::Value& obj = arr_playerChoose[i];
        std::string* player = cvrq.add_playerchoose();
        *player = std::string(obj["name"].GetString());
        std::cout<<*player<<std::endl;
    }
}

//创建投票
void clientProxy::voteCreate(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp) {
    //json-->protubuf
    rapidjson::Document doc;
    doc.Parse(req.body().c_str());
    protoMsg::CreateVote cvrq;
    //Json-->Protubuf
    voteCreate_JsonToProtobuf(doc,cvrq);
    //protobuf-->string
    std::string cvrq_str;
    cvrq.SerializeToString(&cvrq_str);
    cvrq_str = "2"+cvrq_str;
    std::cout<<cvrq_str<<std::endl;

    //从服务端查询结果
    serverProxy sp;
    std::string resp_str = sp.remoteCall(cvrq_str);
    //String--->Protubuf--->Json
    protoMsg::CreateVoteResponse cvrsp;
    cvrsp.ParseFromString(resp_str);

    //Mock
//    protoMsg::CreateVoteResponse cvrsp;
//    cvrsp.set_result("1");

    //Protubuf-->string
    std::string result;
    auto ret = google::protobuf::util::MessageToJsonString(cvrsp,&result);
    resp.headers().add<Pistache::Http::Header::AccessControlAllowOrigin>("*");
    resp.headers().add<Pistache::Http::Header::AccessControlAllowHeaders>("*");
    resp.send(Pistache::Http::Code::Ok, result);
}

//评委打分 --- json-->protubuf
void voteJudge_JsonToProtobuf(rapidjson::Document& doc,protoMsg::Vote &vt){
    std::cout<<"voteJudge????"<<std::endl;
    std::string type = doc["type"].GetString();
    vt.set_type(type);
    std::string uname = doc["uname"].GetString();
    vt.set_uname(uname);
    std::string ustatus = doc["ustatus"].GetString();
    vt.set_ustatus(ustatus);
    std::string voteID = doc["voteID"].GetString();
    vt.set_voteid(voteID);
    std::cout<<"voteJudge-----"<<std::endl;
    const rapidjson::Value &arr = doc["plaerPoints"];
    std::cout<<"voteJudge"<<std::endl;
    for(rapidjson::SizeType i = 0; i < arr.Size(); i++){
        const rapidjson::Value& obj = arr[i];
        std::string name = std::string(obj["name"].GetString());
        std::string score = std::string(obj["score"].GetString());
        protoMsg::Vote_Plaer_score* player = vt.add_plaerpoints();
        player->set_name(name);
        player->set_score(score);
        std::cout<<name<<" "<<score<<std::endl;
    }
}

//评委打分
void clientProxy::voteJudge(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp) {
    //String->protubuf
    rapidjson::Document doc;
    doc.Parse(req.body().c_str());
    protoMsg::Vote vt;
    std::cout<<"voteJudge"<<std::endl;
    //Json-->Protubuf
    voteJudge_JsonToProtobuf(doc,vt);
    //protubuf-->string
    std::string vtrq_str;
    vt.SerializeToString(&vtrq_str);
    vtrq_str = "3"+vtrq_str;
    std::cout<<vtrq_str<<std::endl;

    //从服务端获取结果
    serverProxy sp;
    std::string resp_str = sp.remoteCall(vtrq_str);
    protoMsg::VoteResponse vtrsp;
    vtrsp.ParseFromString(resp_str);

    //Mock
//    protoMsg::VoteResponse vtrsp;
//    protoMsg::VoteResponse_Plaerscore* onePlayer = vtrsp.add_playerscores();
//    onePlayer->set_name("xiaoming");
//    onePlayer->set_score("1");
//    protoMsg::VoteResponse_Plaerscore* anotherPlayer = vtrsp.add_playerscores();
//    anotherPlayer->set_name("lihong");
//    anotherPlayer->set_score("0");

    //Protubuf-->string
    std::string result;
    auto ret = google::protobuf::util::MessageToJsonString(vtrsp,&result);
    resp.headers().add<Pistache::Http::Header::AccessControlAllowOrigin>("*");
    resp.headers().add<Pistache::Http::Header::AccessControlAllowHeaders>("*");
    resp.send(Pistache::Http::Code::Ok,result);
}

//获取所有投票--- json-->protubuf
void voteGetAllVotes_JsonToProtobuf(rapidjson::Document& doc,protoMsg::GetAllVotes &getvts){
    std::string type = doc["type"].GetString();
    getvts.set_type(type);
}

//获取所有的投票
void clientProxy::voteGetAllVotes(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp){
    //String->protubuf
    rapidjson::Document doc;
    doc.Parse(req.body().c_str());
    protoMsg::GetAllVotes getvts;
    //Json-->Protubuf
    //voteGetAllVotes_JsonToProtobuf(doc,getvts);
    //Protubuf-->string
    std::string getvtsrq_str;
    //getvts.SerializeToString(&getvtsrq_str);
    getvtsrq_str = "4";//+getvtsrq_str;
    std::cout<<getvtsrq_str<<std::endl;
    //从服务端获取结果
    serverProxy sp;
    std::string resp_str = sp.remoteCall(getvtsrq_str);
    protoMsg::GetAllVotesResponse vtsrsp;
    vtsrsp.ParseFromString(resp_str);
    //Mock
//    protoMsg::GetAllVotesResponse vtsrsp;
//    protoMsg::GetAllVotesResponse_Vote* oneVote = vtsrsp.add_votes();
//    oneVote->set_votename("春游");
//    oneVote->set_voteid("2345");
//    oneVote->set_isvalid("true");
//    protoMsg::GetAllVotesResponse_Vote* anotherPlayer = vtsrsp.add_votes();
//    anotherPlayer->set_votename("春游");
//    anotherPlayer->set_voteid("23");
//    anotherPlayer->set_isvalid("te");

    std::string result;
    auto ret = google::protobuf::util::MessageToJsonString(vtsrsp,&result);
    resp.headers().add<Pistache::Http::Header::AccessControlAllowOrigin>("*");
    resp.headers().add<Pistache::Http::Header::AccessControlAllowHeaders>("*");
    resp.send(Pistache::Http::Code::Ok,result);
}

//获取某人名下的投票  json-->protubuf
void voteGetOnesVotes_JsonToProtobuf(rapidjson::Document& doc,protoMsg::GetVoteResultByOneJudge &getOnesVotes){
    std::string type = doc["type"].GetString();
    std::string uname = doc["uname"].GetString();
    std::string ustatus = doc["ustatus"].GetString();
    getOnesVotes.set_type(type);
    getOnesVotes.set_ustatus(ustatus);
    getOnesVotes.set_uname(uname);
}

struct UTF8Url
{
    static std::string Decode(const std::string & url);

private:
    static const std::string & HEX_2_NUM_MAP();
    static const std::string & ASCII_EXCEPTION();
    static unsigned char NUM_2_HEX(const char h, const char l);
};

const std::string & UTF8Url::HEX_2_NUM_MAP()
{
    static const std::string str("0123456789ABCDEF");
    return str;
}

const std::string & UTF8Url::ASCII_EXCEPTION()
{
    static const std::string str(R"("%<>[\]^_`{|})");
    return str;
}

unsigned char UTF8Url::NUM_2_HEX(const char h, const char l)
{
    unsigned char hh = std::find(std::begin(HEX_2_NUM_MAP()), std::end(HEX_2_NUM_MAP()), h) - std::begin(HEX_2_NUM_MAP());
    unsigned char ll = std::find(std::begin(HEX_2_NUM_MAP()), std::end(HEX_2_NUM_MAP()), l) - std::begin(HEX_2_NUM_MAP());
    return (hh << 4) + ll;
}


std::string UTF8Url::Decode(const std::string & url)
{
    std::string ret;
    for (auto it = url.begin(); it != url.end(); ++it)
    {
        if (*it == '%')
        {
            if (std::next(it++) == url.end())
            {
                throw std::invalid_argument("url is invalid");
            }
            ret.push_back(NUM_2_HEX(*it, *std::next(it)));
            if (std::next(it++) == url.end())
            {
                throw std::invalid_argument("url is invalid");
            }
        }
        else
        {
            ret.push_back(*it);
        }
    }
    return ret;
}


//获取某人名下的投票
void clientProxy::voteGetOnesVotes(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp){
    //
    std::string JudgeName = req.hasParam(":JudgeName") ?  // check if parameter is included
                       req.param(":JudgeName").as<std::string>() : // if so set as text value
                       "No parameter supplied.";  // otherwise return warning
    std::cout<<JudgeName<<std::endl;
    //String->protubuf
    rapidjson::Document doc;
    doc.Parse(req.body().c_str());
    protoMsg::GetVoteResultByOneJudge getOnesVotes;
    std::cout<<"JudgeName: "<<JudgeName<<std::endl;
    std::string toCh;
    toCh = UTF8Url::Decode(JudgeName);
    getOnesVotes.set_uname(toCh);
    //Json-->Protubuf
    //voteGetOnesVotes_JsonToProtobuf(doc,getOnesVotes);
    //Protubuf-->string
    std::string getOnesVotes_str;
    getOnesVotes.SerializeToString(&getOnesVotes_str);
    getOnesVotes_str = "5"+getOnesVotes_str;
    std::cout<<getOnesVotes_str<<std::endl;
   //从服务端获取结果
    serverProxy sp;
    std::string resp_str = sp.remoteCall(getOnesVotes_str);
    protoMsg::GetVoteResultByOneJudgeResponse getOnesVotesrsp;
    getOnesVotesrsp.ParseFromString(resp_str);
    //Mock
//    protoMsg::GetVoteResultByOneJudgeResponse getOnesVotesrsp;
//    protoMsg::GetVoteResultByOneJudgeResponse_Vote* oneVote = getOnesVotesrsp.add_votes();
//    oneVote->set_votename("小明管理的");
//    oneVote->set_voteid("2345");
//    oneVote->set_isvalid("true");
//    protoMsg::GetVoteResultByOneJudgeResponse_Vote* anotherPlayer = getOnesVotesrsp.add_votes();
//    anotherPlayer->set_votename("小明管理的");
//    anotherPlayer->set_voteid("23");
//    anotherPlayer->set_isvalid("te");
//    anotherPlayer->set_isvoted("1");
    //Protubuf-->string
    std::string result;
    auto ret = google::protobuf::util::MessageToJsonString(getOnesVotesrsp,&result);
    resp.headers().add<Pistache::Http::Header::AccessControlAllowOrigin>("*");
    resp.headers().add<Pistache::Http::Header::AccessControlAllowHeaders>("*");
    resp.send(Pistache::Http::Code::Ok, result);
}

//获取投票结果--- json-->protubuf
void voteGetVoteRes_JsonToProtobuf(rapidjson::Document& doc,protoMsg::GetVoteResult &getres){
    //std::string type = doc["type"].GetString();
    //std::string voteId = doc["voteID"].GetString();
    //getres.set_type(type);
    //getres.set_voteid(voteId);
}

//获取投票结果
void clientProxy::voteGetVoteRes(const Pistache::Rest::Request &req, Pistache::Http::ResponseWriter resp){
    std::string VoteId = req.hasParam(":VoteId") ?  // check if parameter is included
                            req.param(":VoteId").as<std::string>() : // if so set as text value
                            "No parameter supplied.";  // otherwise return warning
    std::cout<<VoteId<<std::endl;
    //String->protubuf
    rapidjson::Document doc;
    doc.Parse(req.body().c_str());
    protoMsg::GetVoteResult getres;
    //Json-->Protubuf
    //voteGetVoteRes_JsonToProtobuf(doc,getres);
    getres.set_voteid(VoteId);
    std::cout<<"recev Vote: "<<VoteId<<std::endl;
    //Protubuf-->string
    std::string getresrq_str;
    getres.SerializeToString(&getresrq_str);
    getresrq_str = "6"+getresrq_str;
    std::cout<<""<<getresrq_str<<std::endl;
    //从服务端获取结果
    serverProxy sp;
    std::string resp_str = sp.remoteCall(getresrq_str);
    std::cout<<"收到的结果"<<resp_str<<std::endl;
    protoMsg::VoteResponse voteRes;
    voteRes.ParseFromString(resp_str);

    //Mock
//    protoMsg::VoteResponse voteRes;
//    protoMsg::VoteResponse_Plaerscore* oneVote = voteRes.add_playerscores();
//    oneVote->set_name("红");
//    oneVote->set_score("4.5");
//    protoMsg::VoteResponse_Plaerscore* anotherPlayer = voteRes.add_playerscores();
//    anotherPlayer->set_score("1.2");
//    anotherPlayer->set_name("蓝");
//    protoMsg::VoteResponse_Plaerscore* third = voteRes.add_playerscores();
//    third->set_score("3.2");
//    third->set_name("黄");
    //Protubuf-->string
    std::string result;
    //std::cout<<"投票结果"<<result<<std::endl;
    auto ret = google::protobuf::util::MessageToJsonString(voteRes,&result);
    std::cout<<"投票结果"<<result<<std::endl;
    resp.headers().add<Pistache::Http::Header::AccessControlAllowOrigin>("*");
    resp.headers().add<Pistache::Http::Header::AccessControlAllowHeaders>("*");
    resp.send(Pistache::Http::Code::Ok, result);
}
