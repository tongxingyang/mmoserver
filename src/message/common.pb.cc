// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "common.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::EnumDescriptor* MESSAGE_OPCODE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_common_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_common_2eproto() {
  protobuf_AddDesc_common_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "common.proto");
  GOOGLE_CHECK(file != NULL);
  MESSAGE_OPCODE_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_common_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_common_2eproto() {
}

void protobuf_InitDefaults_common_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_common_2eproto_once_);
void protobuf_InitDefaults_common_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_common_2eproto_once_,
                 &protobuf_InitDefaults_common_2eproto_impl);
}
void protobuf_AddDesc_common_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_common_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014common.proto*\255\005\n\016MESSAGE_OPCODE\022\036\n\032CLI"
    "ENT_MESSAGE_LUA_MESSAGE\020\002\022%\n!SERVER_MESS"
    "AGE_OPCODE_LUA_MESSAGE\020\003\022\036\n\032CLIENT_MESSA"
    "GE_OPCODE_MOVE\020\004\022\036\n\032SERVER_MESSAGE_OPCOD"
    "E_MOVE\020\005\022#\n\037CLIENT_MESSAGE_OPCODE_STOP_M"
    "OVE\020\006\022#\n\037SERVER_MESSAGE_OPCODE_STOP_MOVE"
    "\020\007\022!\n\035CLIENT_MESSAGE_FORCE_POSITION\020\010\022!\n"
    "\035SERVER_MESSAGE_FORCE_POSITION\020\t\022(\n$CLIE"
    "NT_MESSAGE_OPCODE_TURN_DIRECTION\020\n\022(\n$SE"
    "RVER_MESSAGE_OPCODE_TURN_DIRECTION\020\013\022\'\n#"
    "SERVER_MESSAGE_OPCODE_CREATE_ENTITY\020\014\022(\n"
    "$SERVER_MESSAGE_OPCODE_DESTROY_ENTITY\020\r\022"
    ")\n%CLIENT_MESSAGE_OPCODE_CONNECT_REQUEST"
    "\020\024\022\'\n#SERVER_MESSAGE_OPCODE_CONNECT_REPL"
    "Y\020\025\022\036\n\032CLIENT_MESSAGE_OPCODE_PING\020d\022#\n\037S"
    "ERVER_MESSAGE_OPCODE_PING_BACK\020e\022#\n\037CLIE"
    "NT_MESSAGE_OPCODE_PING_BACK\020f\022\037\n\032GS_MESS"
    "AFE_OPCODE_REGISTER\020\221N", 702);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_common_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_common_2eproto_once_);
void protobuf_AddDesc_common_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_common_2eproto_once_,
                 &protobuf_AddDesc_common_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_common_2eproto {
  StaticDescriptorInitializer_common_2eproto() {
    protobuf_AddDesc_common_2eproto();
  }
} static_descriptor_initializer_common_2eproto_;
const ::google::protobuf::EnumDescriptor* MESSAGE_OPCODE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MESSAGE_OPCODE_descriptor_;
}
bool MESSAGE_OPCODE_IsValid(int value) {
  switch (value) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 20:
    case 21:
    case 100:
    case 101:
    case 102:
    case 10001:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
