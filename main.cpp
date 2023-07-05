#include <pistache/endpoint.h>
#include <threadPool.h>
using namespace Pistache;

struct HelloHandler : public Http::Handler {
  HTTP_PROTOTYPE(HelloHandler)
  void onRequest(const Http::Request&, Http::ResponseWriter writer) override {
    // 
    //task -->  threadpool -->request response -->  ---> cal  -->response.send()
    writer.headers().add<Http::Header::AccessControlAllowOrigin>("*");
    writer.send(Http::Code::Ok, "Hello, World!");
  }
};

int main() {
    Http::listenAndServe<HelloHandler>(Pistache::Address("*:9080"));
    std::unique_ptr<ThreadPool> thp(new ThreadPool(4,8))
    thp->addTask();
}
