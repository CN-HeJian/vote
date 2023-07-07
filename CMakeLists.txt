cmake_minimum_required(VERSION 3.11)
set(CMAKE_CXX_STANDARD 17)
project(vote_server)

find_package(PkgConfig)
pkg_check_modules(Pistache REQUIRED IMPORTED_TARGET libpistache)

SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

add_executable(vote_server main.cpp ./protobuf/getVoteResultByOneJudgeResponse.pb.h ./protobuf/getVoteResultByOneJudgeResponse.pb.cc ./protobuf/getVoteResultByOneJudge.pb.cc ./protobuf/getVoteResultByOneJudge.pb.h ./protobuf/getVoteResult.pb.h ./protobuf/getVoteResult.pb.cc ./protobuf/getAllVotes.pb.h ./protobuf/getAllVotes.pb.cc ./protobuf/getAllVotesResponse.pb.h ./protobuf/getAllVotesResponse.pb.cc ./protobuf/getVoteResult.pb.cc ./protobuf/getVoteResult.pb.h ./protobuf/vote.pb.cc ./protobuf/vote.pb.h ./protobuf/voteResponse.pb.cc ./protobuf/voteResponse.pb.h ./protobuf/createVote.pb.h ./protobuf/createVote.pb.cc ./protobuf/createVoteResponse.pb.cc ./protobuf/createVoteResponse.pb.h ./protobuf/loginRequest.pb.h ./protobuf/loginRequest.pb.cc ./protobuf/loginResponse.pb.cc ./protobuf/loginRequest.pb.h clientProxy.cpp clientProxy.h serverProxy.cpp serverProxy.h)
target_link_libraries(${PROJECT_NAME} PkgConfig::Pistache -lpthread -lprotobuf  -lm)

