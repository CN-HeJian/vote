// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vote.proto

#include "vote.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_vote_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_vote_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Vote_Plaer_score;
}  // namespace protobuf_vote_2eproto
namespace protoMsg {
class Vote_Plaer_scoreDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vote_Plaer_score>
      _instance;
} _Vote_Plaer_score_default_instance_;
class VoteDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Vote>
      _instance;
} _Vote_default_instance_;
}  // namespace protoMsg
namespace protobuf_vote_2eproto {
static void InitDefaultsVote_Plaer_score() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protoMsg::_Vote_Plaer_score_default_instance_;
    new (ptr) ::protoMsg::Vote_Plaer_score();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protoMsg::Vote_Plaer_score::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Vote_Plaer_score =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVote_Plaer_score}, {}};

static void InitDefaultsVote() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protoMsg::_Vote_default_instance_;
    new (ptr) ::protoMsg::Vote();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protoMsg::Vote::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Vote =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsVote}, {
      &protobuf_vote_2eproto::scc_info_Vote_Plaer_score.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Vote_Plaer_score.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Vote.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote_Plaer_score, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote_Plaer_score, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote_Plaer_score, score_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote, uname_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote, ustatus_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote, plaerpoints_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::protoMsg::Vote, voteid_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::protoMsg::Vote_Plaer_score)},
  { 7, -1, sizeof(::protoMsg::Vote)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protoMsg::_Vote_Plaer_score_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::protoMsg::_Vote_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "vote.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nvote.proto\022\010protoMsg\"\241\001\n\004Vote\022\014\n\004type\030"
      "\001 \001(\t\022\r\n\005uname\030\002 \001(\t\022\017\n\007ustatus\030\003 \001(\t\022/\n"
      "\013plaerPoints\030\004 \003(\0132\032.protoMsg.Vote.Plaer"
      "_score\022\016\n\006voteID\030\005 \001(\t\032*\n\013Plaer_score\022\014\n"
      "\004name\030\001 \001(\t\022\r\n\005score\030\002 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 194);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vote.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_vote_2eproto
namespace protoMsg {

// ===================================================================

void Vote_Plaer_score::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vote_Plaer_score::kNameFieldNumber;
const int Vote_Plaer_score::kScoreFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vote_Plaer_score::Vote_Plaer_score()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_vote_2eproto::scc_info_Vote_Plaer_score.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protoMsg.Vote.Plaer_score)
}
Vote_Plaer_score::Vote_Plaer_score(const Vote_Plaer_score& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  score_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.score().size() > 0) {
    score_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.score_);
  }
  // @@protoc_insertion_point(copy_constructor:protoMsg.Vote.Plaer_score)
}

void Vote_Plaer_score::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  score_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Vote_Plaer_score::~Vote_Plaer_score() {
  // @@protoc_insertion_point(destructor:protoMsg.Vote.Plaer_score)
  SharedDtor();
}

void Vote_Plaer_score::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  score_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Vote_Plaer_score::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vote_Plaer_score::descriptor() {
  ::protobuf_vote_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_vote_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vote_Plaer_score& Vote_Plaer_score::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_vote_2eproto::scc_info_Vote_Plaer_score.base);
  return *internal_default_instance();
}


void Vote_Plaer_score::Clear() {
// @@protoc_insertion_point(message_clear_start:protoMsg.Vote.Plaer_score)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  score_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Vote_Plaer_score::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protoMsg.Vote.Plaer_score)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protoMsg.Vote.Plaer_score.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string score = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_score()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->score().data(), static_cast<int>(this->score().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protoMsg.Vote.Plaer_score.score"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protoMsg.Vote.Plaer_score)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protoMsg.Vote.Plaer_score)
  return false;
#undef DO_
}

void Vote_Plaer_score::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protoMsg.Vote.Plaer_score)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.Plaer_score.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string score = 2;
  if (this->score().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->score().data(), static_cast<int>(this->score().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.Plaer_score.score");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->score(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:protoMsg.Vote.Plaer_score)
}

::google::protobuf::uint8* Vote_Plaer_score::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protoMsg.Vote.Plaer_score)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.Plaer_score.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // string score = 2;
  if (this->score().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->score().data(), static_cast<int>(this->score().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.Plaer_score.score");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->score(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protoMsg.Vote.Plaer_score)
  return target;
}

size_t Vote_Plaer_score::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protoMsg.Vote.Plaer_score)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string score = 2;
  if (this->score().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->score());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vote_Plaer_score::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protoMsg.Vote.Plaer_score)
  GOOGLE_DCHECK_NE(&from, this);
  const Vote_Plaer_score* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vote_Plaer_score>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protoMsg.Vote.Plaer_score)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protoMsg.Vote.Plaer_score)
    MergeFrom(*source);
  }
}

void Vote_Plaer_score::MergeFrom(const Vote_Plaer_score& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protoMsg.Vote.Plaer_score)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.score().size() > 0) {

    score_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.score_);
  }
}

void Vote_Plaer_score::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protoMsg.Vote.Plaer_score)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vote_Plaer_score::CopyFrom(const Vote_Plaer_score& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protoMsg.Vote.Plaer_score)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vote_Plaer_score::IsInitialized() const {
  return true;
}

void Vote_Plaer_score::Swap(Vote_Plaer_score* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vote_Plaer_score::InternalSwap(Vote_Plaer_score* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  score_.Swap(&other->score_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vote_Plaer_score::GetMetadata() const {
  protobuf_vote_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_vote_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Vote::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Vote::kTypeFieldNumber;
const int Vote::kUnameFieldNumber;
const int Vote::kUstatusFieldNumber;
const int Vote::kPlaerPointsFieldNumber;
const int Vote::kVoteIDFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Vote::Vote()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_vote_2eproto::scc_info_Vote.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:protoMsg.Vote)
}
Vote::Vote(const Vote& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      plaerpoints_(from.plaerpoints_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.type().size() > 0) {
    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  uname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uname().size() > 0) {
    uname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uname_);
  }
  ustatus_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.ustatus().size() > 0) {
    ustatus_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ustatus_);
  }
  voteid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.voteid().size() > 0) {
    voteid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.voteid_);
  }
  // @@protoc_insertion_point(copy_constructor:protoMsg.Vote)
}

void Vote::SharedCtor() {
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uname_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ustatus_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  voteid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Vote::~Vote() {
  // @@protoc_insertion_point(destructor:protoMsg.Vote)
  SharedDtor();
}

void Vote::SharedDtor() {
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uname_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ustatus_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  voteid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Vote::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Vote::descriptor() {
  ::protobuf_vote_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_vote_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Vote& Vote::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_vote_2eproto::scc_info_Vote.base);
  return *internal_default_instance();
}


void Vote::Clear() {
// @@protoc_insertion_point(message_clear_start:protoMsg.Vote)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  plaerpoints_.Clear();
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  uname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ustatus_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  voteid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Vote::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protoMsg.Vote)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->type().data(), static_cast<int>(this->type().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protoMsg.Vote.type"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string uname = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uname()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uname().data(), static_cast<int>(this->uname().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protoMsg.Vote.uname"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string ustatus = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ustatus()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ustatus().data(), static_cast<int>(this->ustatus().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protoMsg.Vote.ustatus"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .protoMsg.Vote.Plaer_score plaerPoints = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_plaerpoints()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string voteID = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_voteid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->voteid().data(), static_cast<int>(this->voteid().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "protoMsg.Vote.voteID"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protoMsg.Vote)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protoMsg.Vote)
  return false;
#undef DO_
}

void Vote::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protoMsg.Vote)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->type(), output);
  }

  // string uname = 2;
  if (this->uname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uname().data(), static_cast<int>(this->uname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.uname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->uname(), output);
  }

  // string ustatus = 3;
  if (this->ustatus().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ustatus().data(), static_cast<int>(this->ustatus().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.ustatus");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->ustatus(), output);
  }

  // repeated .protoMsg.Vote.Plaer_score plaerPoints = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->plaerpoints_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->plaerpoints(static_cast<int>(i)),
      output);
  }

  // string voteID = 5;
  if (this->voteid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->voteid().data(), static_cast<int>(this->voteid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.voteID");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->voteid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:protoMsg.Vote)
}

::google::protobuf::uint8* Vote::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:protoMsg.Vote)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type().data(), static_cast<int>(this->type().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type(), target);
  }

  // string uname = 2;
  if (this->uname().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uname().data(), static_cast<int>(this->uname().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.uname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->uname(), target);
  }

  // string ustatus = 3;
  if (this->ustatus().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ustatus().data(), static_cast<int>(this->ustatus().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.ustatus");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->ustatus(), target);
  }

  // repeated .protoMsg.Vote.Plaer_score plaerPoints = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->plaerpoints_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->plaerpoints(static_cast<int>(i)), deterministic, target);
  }

  // string voteID = 5;
  if (this->voteid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->voteid().data(), static_cast<int>(this->voteid().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "protoMsg.Vote.voteID");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->voteid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protoMsg.Vote)
  return target;
}

size_t Vote::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protoMsg.Vote)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .protoMsg.Vote.Plaer_score plaerPoints = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->plaerpoints_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->plaerpoints(static_cast<int>(i)));
    }
  }

  // string type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type());
  }

  // string uname = 2;
  if (this->uname().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->uname());
  }

  // string ustatus = 3;
  if (this->ustatus().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ustatus());
  }

  // string voteID = 5;
  if (this->voteid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->voteid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Vote::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protoMsg.Vote)
  GOOGLE_DCHECK_NE(&from, this);
  const Vote* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Vote>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protoMsg.Vote)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protoMsg.Vote)
    MergeFrom(*source);
  }
}

void Vote::MergeFrom(const Vote& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protoMsg.Vote)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  plaerpoints_.MergeFrom(from.plaerpoints_);
  if (from.type().size() > 0) {

    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  if (from.uname().size() > 0) {

    uname_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uname_);
  }
  if (from.ustatus().size() > 0) {

    ustatus_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ustatus_);
  }
  if (from.voteid().size() > 0) {

    voteid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.voteid_);
  }
}

void Vote::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protoMsg.Vote)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Vote::CopyFrom(const Vote& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protoMsg.Vote)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Vote::IsInitialized() const {
  return true;
}

void Vote::Swap(Vote* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Vote::InternalSwap(Vote* other) {
  using std::swap;
  CastToBase(&plaerpoints_)->InternalSwap(CastToBase(&other->plaerpoints_));
  type_.Swap(&other->type_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  uname_.Swap(&other->uname_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  ustatus_.Swap(&other->ustatus_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  voteid_.Swap(&other->voteid_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Vote::GetMetadata() const {
  protobuf_vote_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_vote_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protoMsg
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protoMsg::Vote_Plaer_score* Arena::CreateMaybeMessage< ::protoMsg::Vote_Plaer_score >(Arena* arena) {
  return Arena::CreateInternal< ::protoMsg::Vote_Plaer_score >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::protoMsg::Vote* Arena::CreateMaybeMessage< ::protoMsg::Vote >(Arena* arena) {
  return Arena::CreateInternal< ::protoMsg::Vote >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
