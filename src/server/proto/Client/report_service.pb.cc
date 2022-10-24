// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: report_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "report_service.pb.h"

#include <algorithm>
#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include "Log.h"
#include "BattlenetRpcErrorCodes.h"
// @@protoc_insertion_point(includes)

// Fix stupid windows.h included from Log.h->Common.h
#ifdef SendMessage
#undef SendMessage
#endif

namespace bgs {
namespace protocol {
namespace report {
namespace v1 {

namespace {

const ::google::protobuf::Descriptor* SendReportRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SendReportRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* SubmitReportRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SubmitReportRequest_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* ReportService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_report_5fservice_2eproto() {
  protobuf_AddDesc_report_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "report_service.proto");
  GOOGLE_CHECK(file != NULL);
  SendReportRequest_descriptor_ = file->message_type(0);
  static const int SendReportRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SendReportRequest, report_),
  };
  SendReportRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SendReportRequest_descriptor_,
      SendReportRequest::default_instance_,
      SendReportRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SendReportRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SendReportRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SendReportRequest));
  SubmitReportRequest_descriptor_ = file->message_type(1);
  static const int SubmitReportRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, agent_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, report_type_),
  };
  SubmitReportRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SubmitReportRequest_descriptor_,
      SubmitReportRequest::default_instance_,
      SubmitReportRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SubmitReportRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SubmitReportRequest));
  ReportService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_report_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SendReportRequest_descriptor_, &SendReportRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SubmitReportRequest_descriptor_, &SubmitReportRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_report_5fservice_2eproto() {
  delete SendReportRequest::default_instance_;
  delete SendReportRequest_reflection_;
  delete SubmitReportRequest::default_instance_;
  delete SubmitReportRequest_reflection_;
}

void protobuf_AddDesc_report_5fservice_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bgs::protocol::account::v1::protobuf_AddDesc_account_5ftypes_2eproto();
  ::bgs::protocol::report::v1::protobuf_AddDesc_report_5ftypes_2eproto();
  ::bgs::protocol::protobuf_AddDesc_rpc_5ftypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024report_service.proto\022\026bgs.protocol.rep"
    "ort.v1\032\023account_types.proto\032\022report_type"
    "s.proto\032\017rpc_types.proto\"C\n\021SendReportRe"
    "quest\022.\n\006report\030\001 \002(\0132\036.bgs.protocol.rep"
    "ort.v1.Report\"\214\001\n\023SubmitReportRequest\022<\n"
    "\010agent_id\030\001 \001(\0132*.bgs.protocol.account.v"
    "1.GameAccountHandle\0227\n\013report_type\030\002 \001(\013"
    "2\".bgs.protocol.report.v1.ReportType2\344\001\n"
    "\rReportService\022S\n\nSendReport\022).bgs.proto"
    "col.report.v1.SendReportRequest\032\024.bgs.pr"
    "otocol.NoData\"\004\200\265\030\001\022W\n\014SubmitReport\022+.bg"
    "s.protocol.report.v1.SubmitReportRequest"
    "\032\024.bgs.protocol.NoData\"\004\200\265\030\002\032%\312>\"bnet.pr"
    "otocol.report.ReportServiceB\005H\001\200\001\000", 554);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "report_service.proto", &protobuf_RegisterTypes);
  SendReportRequest::default_instance_ = new SendReportRequest();
  SubmitReportRequest::default_instance_ = new SubmitReportRequest();
  SendReportRequest::default_instance_->InitAsDefaultInstance();
  SubmitReportRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_report_5fservice_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_report_5fservice_2eproto {
  StaticDescriptorInitializer_report_5fservice_2eproto() {
    protobuf_AddDesc_report_5fservice_2eproto();
  }
} static_descriptor_initializer_report_5fservice_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SendReportRequest::kReportFieldNumber;
#endif  // !_MSC_VER

SendReportRequest::SendReportRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.report.v1.SendReportRequest)
}

void SendReportRequest::InitAsDefaultInstance() {
  report_ = const_cast< ::bgs::protocol::report::v1::Report*>(&::bgs::protocol::report::v1::Report::default_instance());
}

SendReportRequest::SendReportRequest(const SendReportRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.report.v1.SendReportRequest)
}

void SendReportRequest::SharedCtor() {
  _cached_size_ = 0;
  report_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SendReportRequest::~SendReportRequest() {
  // @@protoc_insertion_point(destructor:bgs.protocol.report.v1.SendReportRequest)
  SharedDtor();
}

void SendReportRequest::SharedDtor() {
  if (this != default_instance_) {
    delete report_;
  }
}

void SendReportRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SendReportRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SendReportRequest_descriptor_;
}

const SendReportRequest& SendReportRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_report_5fservice_2eproto();
  return *default_instance_;
}

SendReportRequest* SendReportRequest::default_instance_ = NULL;

SendReportRequest* SendReportRequest::New() const {
  return new SendReportRequest;
}

void SendReportRequest::Clear() {
  if (has_report()) {
    if (report_ != NULL) report_->::bgs::protocol::report::v1::Report::Clear();
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SendReportRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bgs.protocol.report.v1.SendReportRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .bgs.protocol.report.v1.Report report = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_report()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bgs.protocol.report.v1.SendReportRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bgs.protocol.report.v1.SendReportRequest)
  return false;
#undef DO_
}

void SendReportRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bgs.protocol.report.v1.SendReportRequest)
  // required .bgs.protocol.report.v1.Report report = 1;
  if (has_report()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->report(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bgs.protocol.report.v1.SendReportRequest)
}

::google::protobuf::uint8* SendReportRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:bgs.protocol.report.v1.SendReportRequest)
  // required .bgs.protocol.report.v1.Report report = 1;
  if (has_report()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->report(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bgs.protocol.report.v1.SendReportRequest)
  return target;
}

int SendReportRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .bgs.protocol.report.v1.Report report = 1;
    if (has_report()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->report());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SendReportRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SendReportRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SendReportRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SendReportRequest::MergeFrom(const SendReportRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_report()) {
      mutable_report()->::bgs::protocol::report::v1::Report::MergeFrom(from.report());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SendReportRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SendReportRequest::CopyFrom(const SendReportRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SendReportRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_report()) {
    if (!this->report().IsInitialized()) return false;
  }
  return true;
}

void SendReportRequest::Swap(SendReportRequest* other) {
  if (other != this) {
    std::swap(report_, other->report_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SendReportRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SendReportRequest_descriptor_;
  metadata.reflection = SendReportRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int SubmitReportRequest::kAgentIdFieldNumber;
const int SubmitReportRequest::kReportTypeFieldNumber;
#endif  // !_MSC_VER

SubmitReportRequest::SubmitReportRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.report.v1.SubmitReportRequest)
}

void SubmitReportRequest::InitAsDefaultInstance() {
  agent_id_ = const_cast< ::bgs::protocol::account::v1::GameAccountHandle*>(&::bgs::protocol::account::v1::GameAccountHandle::default_instance());
  report_type_ = const_cast< ::bgs::protocol::report::v1::ReportType*>(&::bgs::protocol::report::v1::ReportType::default_instance());
}

SubmitReportRequest::SubmitReportRequest(const SubmitReportRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.report.v1.SubmitReportRequest)
}

void SubmitReportRequest::SharedCtor() {
  _cached_size_ = 0;
  agent_id_ = NULL;
  report_type_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SubmitReportRequest::~SubmitReportRequest() {
  // @@protoc_insertion_point(destructor:bgs.protocol.report.v1.SubmitReportRequest)
  SharedDtor();
}

void SubmitReportRequest::SharedDtor() {
  if (this != default_instance_) {
    delete agent_id_;
    delete report_type_;
  }
}

void SubmitReportRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SubmitReportRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SubmitReportRequest_descriptor_;
}

const SubmitReportRequest& SubmitReportRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_report_5fservice_2eproto();
  return *default_instance_;
}

SubmitReportRequest* SubmitReportRequest::default_instance_ = NULL;

SubmitReportRequest* SubmitReportRequest::New() const {
  return new SubmitReportRequest;
}

void SubmitReportRequest::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_agent_id()) {
      if (agent_id_ != NULL) agent_id_->::bgs::protocol::account::v1::GameAccountHandle::Clear();
    }
    if (has_report_type()) {
      if (report_type_ != NULL) report_type_->::bgs::protocol::report::v1::ReportType::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SubmitReportRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:bgs.protocol.report.v1.SubmitReportRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .bgs.protocol.account.v1.GameAccountHandle agent_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_agent_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_report_type;
        break;
      }

      // optional .bgs.protocol.report.v1.ReportType report_type = 2;
      case 2: {
        if (tag == 18) {
         parse_report_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_report_type()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:bgs.protocol.report.v1.SubmitReportRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:bgs.protocol.report.v1.SubmitReportRequest)
  return false;
#undef DO_
}

void SubmitReportRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:bgs.protocol.report.v1.SubmitReportRequest)
  // optional .bgs.protocol.account.v1.GameAccountHandle agent_id = 1;
  if (has_agent_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->agent_id(), output);
  }

  // optional .bgs.protocol.report.v1.ReportType report_type = 2;
  if (has_report_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->report_type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:bgs.protocol.report.v1.SubmitReportRequest)
}

::google::protobuf::uint8* SubmitReportRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:bgs.protocol.report.v1.SubmitReportRequest)
  // optional .bgs.protocol.account.v1.GameAccountHandle agent_id = 1;
  if (has_agent_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->agent_id(), target);
  }

  // optional .bgs.protocol.report.v1.ReportType report_type = 2;
  if (has_report_type()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->report_type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:bgs.protocol.report.v1.SubmitReportRequest)
  return target;
}

int SubmitReportRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .bgs.protocol.account.v1.GameAccountHandle agent_id = 1;
    if (has_agent_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->agent_id());
    }

    // optional .bgs.protocol.report.v1.ReportType report_type = 2;
    if (has_report_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->report_type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SubmitReportRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SubmitReportRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SubmitReportRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SubmitReportRequest::MergeFrom(const SubmitReportRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_agent_id()) {
      mutable_agent_id()->::bgs::protocol::account::v1::GameAccountHandle::MergeFrom(from.agent_id());
    }
    if (from.has_report_type()) {
      mutable_report_type()->::bgs::protocol::report::v1::ReportType::MergeFrom(from.report_type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SubmitReportRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SubmitReportRequest::CopyFrom(const SubmitReportRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubmitReportRequest::IsInitialized() const {

  if (has_agent_id()) {
    if (!this->agent_id().IsInitialized()) return false;
  }
  if (has_report_type()) {
    if (!this->report_type().IsInitialized()) return false;
  }
  return true;
}

void SubmitReportRequest::Swap(SubmitReportRequest* other) {
  if (other != this) {
    std::swap(agent_id_, other->agent_id_);
    std::swap(report_type_, other->report_type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SubmitReportRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SubmitReportRequest_descriptor_;
  metadata.reflection = SubmitReportRequest_reflection_;
  return metadata;
}


// ===================================================================

ReportService::ReportService(bool use_original_hash) : service_hash_(use_original_hash ? OriginalHash::value : NameHash::value) {
}

ReportService::~ReportService() {
}

google::protobuf::ServiceDescriptor const* ReportService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReportService_descriptor_;
}

void ReportService::SendReport(::bgs::protocol::report::v1::SendReportRequest const* request, std::function<void(::bgs::protocol::NoData const*)> responseCallback) {
  TC_LOG_DEBUG(LOG_FILTER_PROTOBUF, "%s Server called client method ReportService.SendReport(bgs.protocol.report.v1.SendReportRequest{ %s })",
    GetCallerInfo().c_str(), request->ShortDebugString().c_str());
  std::function<void(MessageBuffer)> callback = [responseCallback](MessageBuffer buffer) -> void {
    ::bgs::protocol::NoData response;
    if (response.ParseFromArray(buffer.GetReadPointer(), buffer.GetActiveSize()))
      responseCallback(&response);
  };
  SendRequest(service_hash_, 1, request, std::move(callback));
}

void ReportService::SubmitReport(::bgs::protocol::report::v1::SubmitReportRequest const* request, std::function<void(::bgs::protocol::NoData const*)> responseCallback) {
  TC_LOG_DEBUG(LOG_FILTER_PROTOBUF, "%s Server called client method ReportService.SubmitReport(bgs.protocol.report.v1.SubmitReportRequest{ %s })",
    GetCallerInfo().c_str(), request->ShortDebugString().c_str());
  std::function<void(MessageBuffer)> callback = [responseCallback](MessageBuffer buffer) -> void {
    ::bgs::protocol::NoData response;
    if (response.ParseFromArray(buffer.GetReadPointer(), buffer.GetActiveSize()))
      responseCallback(&response);
  };
  SendRequest(service_hash_, 2, request, std::move(callback));
}

void ReportService::CallServerMethod(uint32 token, uint32 methodId, MessageBuffer buffer) {
  switch(methodId) {
    case 1: {
      ::bgs::protocol::report::v1::SendReportRequest request;
      if (!request.ParseFromArray(buffer.GetReadPointer(), buffer.GetActiveSize())) {
        TC_LOG_DEBUG(LOG_FILTER_PROTOBUF, "%s Failed to parse request for ReportService.SendReport server method call.", GetCallerInfo().c_str());
        SendResponse(service_hash_, 1, token, ERROR_RPC_MALFORMED_REQUEST);
        return;
      }

      ::bgs::protocol::NoData response;
      uint32 status = HandleSendReport(&request, &response);
      TC_LOG_DEBUG(LOG_FILTER_PROTOBUF, "%s Client called server method ReportService.SendReport(bgs.protocol.report.v1.SendReportRequest{ %s }) returned bgs.protocol.NoData{ %s } status %u.",
        GetCallerInfo().c_str(), request.ShortDebugString().c_str(), response.ShortDebugString().c_str(), status);
      if (!status)
        SendResponse(service_hash_, 1, token, &response);
      else
        SendResponse(service_hash_, 1, token, status);
      break;
    }
    case 2: {
      ::bgs::protocol::report::v1::SubmitReportRequest request;
      if (!request.ParseFromArray(buffer.GetReadPointer(), buffer.GetActiveSize())) {
        TC_LOG_DEBUG(LOG_FILTER_PROTOBUF, "%s Failed to parse request for ReportService.SubmitReport server method call.", GetCallerInfo().c_str());
        SendResponse(service_hash_, 2, token, ERROR_RPC_MALFORMED_REQUEST);
        return;
      }

      ::bgs::protocol::NoData response;
      uint32 status = HandleSubmitReport(&request, &response);
      TC_LOG_DEBUG(LOG_FILTER_PROTOBUF, "%s Client called server method ReportService.SubmitReport(bgs.protocol.report.v1.SubmitReportRequest{ %s }) returned bgs.protocol.NoData{ %s } status %u.",
        GetCallerInfo().c_str(), request.ShortDebugString().c_str(), response.ShortDebugString().c_str(), status);
      if (!status)
        SendResponse(service_hash_, 2, token, &response);
      else
        SendResponse(service_hash_, 2, token, status);
      break;
    }
    default:
      TC_LOG_ERROR(LOG_FILTER_PROTOBUF, "Bad method id %u.", methodId);
      SendResponse(service_hash_, methodId, token, ERROR_RPC_INVALID_METHOD);
      break;
    }
}

uint32 ReportService::HandleSendReport(::bgs::protocol::report::v1::SendReportRequest const* request, ::bgs::protocol::NoData* response) {
  TC_LOG_ERROR(LOG_FILTER_PROTOBUF, "%s Client tried to call not implemented method ReportService.SendReport({ %s })",
    GetCallerInfo().c_str(), request->ShortDebugString().c_str());
  return ERROR_RPC_NOT_IMPLEMENTED;
}

uint32 ReportService::HandleSubmitReport(::bgs::protocol::report::v1::SubmitReportRequest const* request, ::bgs::protocol::NoData* response) {
  TC_LOG_ERROR(LOG_FILTER_PROTOBUF, "%s Client tried to call not implemented method ReportService.SubmitReport({ %s })",
    GetCallerInfo().c_str(), request->ShortDebugString().c_str());
  return ERROR_RPC_NOT_IMPLEMENTED;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace report
}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)
