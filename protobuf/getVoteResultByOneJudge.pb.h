// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: getVoteResultByOneJudge.proto

#ifndef PROTOBUF_INCLUDED_getVoteResultByOneJudge_2eproto
#define PROTOBUF_INCLUDED_getVoteResultByOneJudge_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_getVoteResultByOneJudge_2eproto 

namespace protobuf_getVoteResultByOneJudge_2eproto {
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
}  // namespace protobuf_getVoteResultByOneJudge_2eproto
namespace protoMsg {
class GetVoteResultByOneJudge;
class GetVoteResultByOneJudgeDefaultTypeInternal;
extern GetVoteResultByOneJudgeDefaultTypeInternal _GetVoteResultByOneJudge_default_instance_;
}  // namespace protoMsg
namespace google {
namespace protobuf {
template<> ::protoMsg::GetVoteResultByOneJudge* Arena::CreateMaybeMessage<::protoMsg::GetVoteResultByOneJudge>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protoMsg {

// ===================================================================

class GetVoteResultByOneJudge : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protoMsg.GetVoteResultByOneJudge) */ {
 public:
  GetVoteResultByOneJudge();
  virtual ~GetVoteResultByOneJudge();

  GetVoteResultByOneJudge(const GetVoteResultByOneJudge& from);

  inline GetVoteResultByOneJudge& operator=(const GetVoteResultByOneJudge& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetVoteResultByOneJudge(GetVoteResultByOneJudge&& from) noexcept
    : GetVoteResultByOneJudge() {
    *this = ::std::move(from);
  }

  inline GetVoteResultByOneJudge& operator=(GetVoteResultByOneJudge&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetVoteResultByOneJudge& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetVoteResultByOneJudge* internal_default_instance() {
    return reinterpret_cast<const GetVoteResultByOneJudge*>(
               &_GetVoteResultByOneJudge_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GetVoteResultByOneJudge* other);
  friend void swap(GetVoteResultByOneJudge& a, GetVoteResultByOneJudge& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetVoteResultByOneJudge* New() const final {
    return CreateMaybeMessage<GetVoteResultByOneJudge>(NULL);
  }

  GetVoteResultByOneJudge* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetVoteResultByOneJudge>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetVoteResultByOneJudge& from);
  void MergeFrom(const GetVoteResultByOneJudge& from);
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
  void InternalSwap(GetVoteResultByOneJudge* other);
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

  // string uname = 2;
  void clear_uname();
  static const int kUnameFieldNumber = 2;
  const ::std::string& uname() const;
  void set_uname(const ::std::string& value);
  #if LANG_CXX11
  void set_uname(::std::string&& value);
  #endif
  void set_uname(const char* value);
  void set_uname(const char* value, size_t size);
  ::std::string* mutable_uname();
  ::std::string* release_uname();
  void set_allocated_uname(::std::string* uname);

  // string ustatus = 3;
  void clear_ustatus();
  static const int kUstatusFieldNumber = 3;
  const ::std::string& ustatus() const;
  void set_ustatus(const ::std::string& value);
  #if LANG_CXX11
  void set_ustatus(::std::string&& value);
  #endif
  void set_ustatus(const char* value);
  void set_ustatus(const char* value, size_t size);
  ::std::string* mutable_ustatus();
  ::std::string* release_ustatus();
  void set_allocated_ustatus(::std::string* ustatus);

  // @@protoc_insertion_point(class_scope:protoMsg.GetVoteResultByOneJudge)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr uname_;
  ::google::protobuf::internal::ArenaStringPtr ustatus_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_getVoteResultByOneJudge_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetVoteResultByOneJudge

// string type = 1;
inline void GetVoteResultByOneJudge::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetVoteResultByOneJudge::type() const {
  // @@protoc_insertion_point(field_get:protoMsg.GetVoteResultByOneJudge.type)
  return type_.GetNoArena();
}
inline void GetVoteResultByOneJudge::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protoMsg.GetVoteResultByOneJudge.type)
}
#if LANG_CXX11
inline void GetVoteResultByOneJudge::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protoMsg.GetVoteResultByOneJudge.type)
}
#endif
inline void GetVoteResultByOneJudge::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protoMsg.GetVoteResultByOneJudge.type)
}
inline void GetVoteResultByOneJudge::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protoMsg.GetVoteResultByOneJudge.type)
}
inline ::std::string* GetVoteResultByOneJudge::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:protoMsg.GetVoteResultByOneJudge.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVoteResultByOneJudge::release_type() {
  // @@protoc_insertion_point(field_release:protoMsg.GetVoteResultByOneJudge.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVoteResultByOneJudge::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:protoMsg.GetVoteResultByOneJudge.type)
}

// string uname = 2;
inline void GetVoteResultByOneJudge::clear_uname() {
  uname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetVoteResultByOneJudge::uname() const {
  // @@protoc_insertion_point(field_get:protoMsg.GetVoteResultByOneJudge.uname)
  return uname_.GetNoArena();
}
inline void GetVoteResultByOneJudge::set_uname(const ::std::string& value) {
  
  uname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protoMsg.GetVoteResultByOneJudge.uname)
}
#if LANG_CXX11
inline void GetVoteResultByOneJudge::set_uname(::std::string&& value) {
  
  uname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protoMsg.GetVoteResultByOneJudge.uname)
}
#endif
inline void GetVoteResultByOneJudge::set_uname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  uname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protoMsg.GetVoteResultByOneJudge.uname)
}
inline void GetVoteResultByOneJudge::set_uname(const char* value, size_t size) {
  
  uname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protoMsg.GetVoteResultByOneJudge.uname)
}
inline ::std::string* GetVoteResultByOneJudge::mutable_uname() {
  
  // @@protoc_insertion_point(field_mutable:protoMsg.GetVoteResultByOneJudge.uname)
  return uname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVoteResultByOneJudge::release_uname() {
  // @@protoc_insertion_point(field_release:protoMsg.GetVoteResultByOneJudge.uname)
  
  return uname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVoteResultByOneJudge::set_allocated_uname(::std::string* uname) {
  if (uname != NULL) {
    
  } else {
    
  }
  uname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), uname);
  // @@protoc_insertion_point(field_set_allocated:protoMsg.GetVoteResultByOneJudge.uname)
}

// string ustatus = 3;
inline void GetVoteResultByOneJudge::clear_ustatus() {
  ustatus_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetVoteResultByOneJudge::ustatus() const {
  // @@protoc_insertion_point(field_get:protoMsg.GetVoteResultByOneJudge.ustatus)
  return ustatus_.GetNoArena();
}
inline void GetVoteResultByOneJudge::set_ustatus(const ::std::string& value) {
  
  ustatus_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protoMsg.GetVoteResultByOneJudge.ustatus)
}
#if LANG_CXX11
inline void GetVoteResultByOneJudge::set_ustatus(::std::string&& value) {
  
  ustatus_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protoMsg.GetVoteResultByOneJudge.ustatus)
}
#endif
inline void GetVoteResultByOneJudge::set_ustatus(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  ustatus_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protoMsg.GetVoteResultByOneJudge.ustatus)
}
inline void GetVoteResultByOneJudge::set_ustatus(const char* value, size_t size) {
  
  ustatus_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protoMsg.GetVoteResultByOneJudge.ustatus)
}
inline ::std::string* GetVoteResultByOneJudge::mutable_ustatus() {
  
  // @@protoc_insertion_point(field_mutable:protoMsg.GetVoteResultByOneJudge.ustatus)
  return ustatus_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVoteResultByOneJudge::release_ustatus() {
  // @@protoc_insertion_point(field_release:protoMsg.GetVoteResultByOneJudge.ustatus)
  
  return ustatus_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVoteResultByOneJudge::set_allocated_ustatus(::std::string* ustatus) {
  if (ustatus != NULL) {
    
  } else {
    
  }
  ustatus_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ustatus);
  // @@protoc_insertion_point(field_set_allocated:protoMsg.GetVoteResultByOneJudge.ustatus)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protoMsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_getVoteResultByOneJudge_2eproto
