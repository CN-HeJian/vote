// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: getVoteResult.proto

#ifndef PROTOBUF_INCLUDED_getVoteResult_2eproto
#define PROTOBUF_INCLUDED_getVoteResult_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_getVoteResult_2eproto 

namespace protobuf_getVoteResult_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_getVoteResult_2eproto
namespace protoMsg {
class GetVoteResult;
class GetVoteResultDefaultTypeInternal;
extern GetVoteResultDefaultTypeInternal _GetVoteResult_default_instance_;
}  // namespace protoMsg
namespace google {
namespace protobuf {
template<> ::protoMsg::GetVoteResult* Arena::CreateMaybeMessage<::protoMsg::GetVoteResult>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protoMsg {

// ===================================================================

class GetVoteResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protoMsg.GetVoteResult) */ {
 public:
  GetVoteResult();
  virtual ~GetVoteResult();

  GetVoteResult(const GetVoteResult& from);

  inline GetVoteResult& operator=(const GetVoteResult& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetVoteResult(GetVoteResult&& from) noexcept
    : GetVoteResult() {
    *this = ::std::move(from);
  }

  inline GetVoteResult& operator=(GetVoteResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetVoteResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetVoteResult* internal_default_instance() {
    return reinterpret_cast<const GetVoteResult*>(
               &_GetVoteResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GetVoteResult* other);
  friend void swap(GetVoteResult& a, GetVoteResult& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetVoteResult* New() const final {
    return CreateMaybeMessage<GetVoteResult>(NULL);
  }

  GetVoteResult* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetVoteResult>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetVoteResult& from);
  void MergeFrom(const GetVoteResult& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetVoteResult* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // string voteID = 2;
  void clear_voteid();
  static const int kVoteIDFieldNumber = 2;
  const ::std::string& voteid() const;
  void set_voteid(const ::std::string& value);
  #if LANG_CXX11
  void set_voteid(::std::string&& value);
  #endif
  void set_voteid(const char* value);
  void set_voteid(const char* value, size_t size);
  ::std::string* mutable_voteid();
  ::std::string* release_voteid();
  void set_allocated_voteid(::std::string* voteid);

  // @@protoc_insertion_point(class_scope:protoMsg.GetVoteResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr voteid_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_getVoteResult_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetVoteResult

// string type = 1;
inline void GetVoteResult::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetVoteResult::type() const {
  // @@protoc_insertion_point(field_get:protoMsg.GetVoteResult.type)
  return type_.GetNoArena();
}
inline void GetVoteResult::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protoMsg.GetVoteResult.type)
}
#if LANG_CXX11
inline void GetVoteResult::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protoMsg.GetVoteResult.type)
}
#endif
inline void GetVoteResult::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protoMsg.GetVoteResult.type)
}
inline void GetVoteResult::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protoMsg.GetVoteResult.type)
}
inline ::std::string* GetVoteResult::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:protoMsg.GetVoteResult.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVoteResult::release_type() {
  // @@protoc_insertion_point(field_release:protoMsg.GetVoteResult.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVoteResult::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:protoMsg.GetVoteResult.type)
}

// string voteID = 2;
inline void GetVoteResult::clear_voteid() {
  voteid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetVoteResult::voteid() const {
  // @@protoc_insertion_point(field_get:protoMsg.GetVoteResult.voteID)
  return voteid_.GetNoArena();
}
inline void GetVoteResult::set_voteid(const ::std::string& value) {
  
  voteid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protoMsg.GetVoteResult.voteID)
}
#if LANG_CXX11
inline void GetVoteResult::set_voteid(::std::string&& value) {
  
  voteid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protoMsg.GetVoteResult.voteID)
}
#endif
inline void GetVoteResult::set_voteid(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  voteid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protoMsg.GetVoteResult.voteID)
}
inline void GetVoteResult::set_voteid(const char* value, size_t size) {
  
  voteid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protoMsg.GetVoteResult.voteID)
}
inline ::std::string* GetVoteResult::mutable_voteid() {
  
  // @@protoc_insertion_point(field_mutable:protoMsg.GetVoteResult.voteID)
  return voteid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVoteResult::release_voteid() {
  // @@protoc_insertion_point(field_release:protoMsg.GetVoteResult.voteID)
  
  return voteid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVoteResult::set_allocated_voteid(::std::string* voteid) {
  if (voteid != NULL) {
    
  } else {
    
  }
  voteid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), voteid);
  // @@protoc_insertion_point(field_set_allocated:protoMsg.GetVoteResult.voteID)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protoMsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_getVoteResult_2eproto
