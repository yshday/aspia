// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: category_environment_variables.proto

#include "category_environment_variables.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class EnvironmentVariable_ItemDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EnvironmentVariable_Item>
      _instance;
} _EnvironmentVariable_Item_default_instance_;
class EnvironmentVariableDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<EnvironmentVariable>
      _instance;
} _EnvironmentVariable_default_instance_;
}  // namespace proto
}  // namespace aspia
namespace protobuf_category_5fenvironment_5fvariables_2eproto {
void InitDefaultsEnvironmentVariable_ItemImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::aspia::proto::_EnvironmentVariable_Item_default_instance_;
    new (ptr) ::aspia::proto::EnvironmentVariable_Item();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::EnvironmentVariable_Item::InitAsDefaultInstance();
}

void InitDefaultsEnvironmentVariable_Item() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsEnvironmentVariable_ItemImpl);
}

void InitDefaultsEnvironmentVariableImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_category_5fenvironment_5fvariables_2eproto::InitDefaultsEnvironmentVariable_Item();
  {
    void* ptr = &::aspia::proto::_EnvironmentVariable_default_instance_;
    new (ptr) ::aspia::proto::EnvironmentVariable();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::aspia::proto::EnvironmentVariable::InitAsDefaultInstance();
}

void InitDefaultsEnvironmentVariable() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsEnvironmentVariableImpl);
}

}  // namespace protobuf_category_5fenvironment_5fvariables_2eproto
namespace aspia {
namespace proto {

// ===================================================================

void EnvironmentVariable_Item::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EnvironmentVariable_Item::kNameFieldNumber;
const int EnvironmentVariable_Item::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnvironmentVariable_Item::EnvironmentVariable_Item()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fenvironment_5fvariables_2eproto::InitDefaultsEnvironmentVariable_Item();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.EnvironmentVariable.Item)
}
EnvironmentVariable_Item::EnvironmentVariable_Item(const EnvironmentVariable_Item& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:aspia.proto.EnvironmentVariable.Item)
}

void EnvironmentVariable_Item::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

EnvironmentVariable_Item::~EnvironmentVariable_Item() {
  // @@protoc_insertion_point(destructor:aspia.proto.EnvironmentVariable.Item)
  SharedDtor();
}

void EnvironmentVariable_Item::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void EnvironmentVariable_Item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EnvironmentVariable_Item& EnvironmentVariable_Item::default_instance() {
  ::protobuf_category_5fenvironment_5fvariables_2eproto::InitDefaultsEnvironmentVariable_Item();
  return *internal_default_instance();
}

EnvironmentVariable_Item* EnvironmentVariable_Item::New(::google::protobuf::Arena* arena) const {
  EnvironmentVariable_Item* n = new EnvironmentVariable_Item;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EnvironmentVariable_Item::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.EnvironmentVariable.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool EnvironmentVariable_Item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.EnvironmentVariable.Item)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
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
            "aspia.proto.EnvironmentVariable.Item.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->value().data(), static_cast<int>(this->value().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "aspia.proto.EnvironmentVariable.Item.value"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.EnvironmentVariable.Item)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.EnvironmentVariable.Item)
  return false;
#undef DO_
}

void EnvironmentVariable_Item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.EnvironmentVariable.Item)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.EnvironmentVariable.Item.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // string value = 2;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->value().data(), static_cast<int>(this->value().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "aspia.proto.EnvironmentVariable.Item.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.EnvironmentVariable.Item)
}

size_t EnvironmentVariable_Item::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.EnvironmentVariable.Item)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string value = 2;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnvironmentVariable_Item::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EnvironmentVariable_Item*>(&from));
}

void EnvironmentVariable_Item::MergeFrom(const EnvironmentVariable_Item& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.EnvironmentVariable.Item)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void EnvironmentVariable_Item::CopyFrom(const EnvironmentVariable_Item& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.EnvironmentVariable.Item)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnvironmentVariable_Item::IsInitialized() const {
  return true;
}

void EnvironmentVariable_Item::Swap(EnvironmentVariable_Item* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnvironmentVariable_Item::InternalSwap(EnvironmentVariable_Item* other) {
  using std::swap;
  name_.Swap(&other->name_);
  value_.Swap(&other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string EnvironmentVariable_Item::GetTypeName() const {
  return "aspia.proto.EnvironmentVariable.Item";
}


// ===================================================================

void EnvironmentVariable::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EnvironmentVariable::kItemFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EnvironmentVariable::EnvironmentVariable()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_category_5fenvironment_5fvariables_2eproto::InitDefaultsEnvironmentVariable();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:aspia.proto.EnvironmentVariable)
}
EnvironmentVariable::EnvironmentVariable(const EnvironmentVariable& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      item_(from.item_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:aspia.proto.EnvironmentVariable)
}

void EnvironmentVariable::SharedCtor() {
  _cached_size_ = 0;
}

EnvironmentVariable::~EnvironmentVariable() {
  // @@protoc_insertion_point(destructor:aspia.proto.EnvironmentVariable)
  SharedDtor();
}

void EnvironmentVariable::SharedDtor() {
}

void EnvironmentVariable::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EnvironmentVariable& EnvironmentVariable::default_instance() {
  ::protobuf_category_5fenvironment_5fvariables_2eproto::InitDefaultsEnvironmentVariable();
  return *internal_default_instance();
}

EnvironmentVariable* EnvironmentVariable::New(::google::protobuf::Arena* arena) const {
  EnvironmentVariable* n = new EnvironmentVariable;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EnvironmentVariable::Clear() {
// @@protoc_insertion_point(message_clear_start:aspia.proto.EnvironmentVariable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  item_.Clear();
  _internal_metadata_.Clear();
}

bool EnvironmentVariable::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:aspia.proto.EnvironmentVariable)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .aspia.proto.EnvironmentVariable.Item item = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_item()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:aspia.proto.EnvironmentVariable)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:aspia.proto.EnvironmentVariable)
  return false;
#undef DO_
}

void EnvironmentVariable::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:aspia.proto.EnvironmentVariable)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .aspia.proto.EnvironmentVariable.Item item = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->item_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->item(static_cast<int>(i)), output);
  }

  output->WriteRaw((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).data(),
                   static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size()));
  // @@protoc_insertion_point(serialize_end:aspia.proto.EnvironmentVariable)
}

size_t EnvironmentVariable::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:aspia.proto.EnvironmentVariable)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()).size();

  // repeated .aspia.proto.EnvironmentVariable.Item item = 1;
  {
    unsigned int count = static_cast<unsigned int>(this->item_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->item(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EnvironmentVariable::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EnvironmentVariable*>(&from));
}

void EnvironmentVariable::MergeFrom(const EnvironmentVariable& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:aspia.proto.EnvironmentVariable)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  item_.MergeFrom(from.item_);
}

void EnvironmentVariable::CopyFrom(const EnvironmentVariable& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:aspia.proto.EnvironmentVariable)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnvironmentVariable::IsInitialized() const {
  return true;
}

void EnvironmentVariable::Swap(EnvironmentVariable* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EnvironmentVariable::InternalSwap(EnvironmentVariable* other) {
  using std::swap;
  item_.InternalSwap(&other->item_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string EnvironmentVariable::GetTypeName() const {
  return "aspia.proto.EnvironmentVariable";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)