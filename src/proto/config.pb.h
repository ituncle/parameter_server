// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/config.proto

#ifndef PROTOBUF_proto_2fconfig_2eproto__INCLUDED
#define PROTOBUF_proto_2fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/range.pb.h"
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_proto_2fconfig_2eproto();
void protobuf_AssignDesc_proto_2fconfig_2eproto();
void protobuf_ShutdownFile_proto_2fconfig_2eproto();

class DataConfig;
class ParameterInitConfig;
class LearningRateConfig;

enum DataConfig_DataFormat {
  DataConfig_DataFormat_BIN = 1,
  DataConfig_DataFormat_PROTO = 2,
  DataConfig_DataFormat_TEXT = 3
};
bool DataConfig_DataFormat_IsValid(int value);
const DataConfig_DataFormat DataConfig_DataFormat_DataFormat_MIN = DataConfig_DataFormat_BIN;
const DataConfig_DataFormat DataConfig_DataFormat_DataFormat_MAX = DataConfig_DataFormat_TEXT;
const int DataConfig_DataFormat_DataFormat_ARRAYSIZE = DataConfig_DataFormat_DataFormat_MAX + 1;

const ::google::protobuf::EnumDescriptor* DataConfig_DataFormat_descriptor();
inline const ::std::string& DataConfig_DataFormat_Name(DataConfig_DataFormat value) {
  return ::google::protobuf::internal::NameOfEnum(
    DataConfig_DataFormat_descriptor(), value);
}
inline bool DataConfig_DataFormat_Parse(
    const ::std::string& name, DataConfig_DataFormat* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DataConfig_DataFormat>(
    DataConfig_DataFormat_descriptor(), name, value);
}
enum ParameterInitConfig_Type {
  ParameterInitConfig_Type_ZERO = 1,
  ParameterInitConfig_Type_RANDOM = 2,
  ParameterInitConfig_Type_FILE = 3
};
bool ParameterInitConfig_Type_IsValid(int value);
const ParameterInitConfig_Type ParameterInitConfig_Type_Type_MIN = ParameterInitConfig_Type_ZERO;
const ParameterInitConfig_Type ParameterInitConfig_Type_Type_MAX = ParameterInitConfig_Type_FILE;
const int ParameterInitConfig_Type_Type_ARRAYSIZE = ParameterInitConfig_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* ParameterInitConfig_Type_descriptor();
inline const ::std::string& ParameterInitConfig_Type_Name(ParameterInitConfig_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    ParameterInitConfig_Type_descriptor(), value);
}
inline bool ParameterInitConfig_Type_Parse(
    const ::std::string& name, ParameterInitConfig_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ParameterInitConfig_Type>(
    ParameterInitConfig_Type_descriptor(), name, value);
}
enum LearningRateConfig_Type {
  LearningRateConfig_Type_CONSTANT = 1
};
bool LearningRateConfig_Type_IsValid(int value);
const LearningRateConfig_Type LearningRateConfig_Type_Type_MIN = LearningRateConfig_Type_CONSTANT;
const LearningRateConfig_Type LearningRateConfig_Type_Type_MAX = LearningRateConfig_Type_CONSTANT;
const int LearningRateConfig_Type_Type_ARRAYSIZE = LearningRateConfig_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* LearningRateConfig_Type_descriptor();
inline const ::std::string& LearningRateConfig_Type_Name(LearningRateConfig_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    LearningRateConfig_Type_descriptor(), value);
}
inline bool LearningRateConfig_Type_Parse(
    const ::std::string& name, LearningRateConfig_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LearningRateConfig_Type>(
    LearningRateConfig_Type_descriptor(), name, value);
}
// ===================================================================

class DataConfig : public ::google::protobuf::Message {
 public:
  DataConfig();
  virtual ~DataConfig();

  DataConfig(const DataConfig& from);

  inline DataConfig& operator=(const DataConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DataConfig& default_instance();

  void Swap(DataConfig* other);

  // implements Message ----------------------------------------------

  DataConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DataConfig& from);
  void MergeFrom(const DataConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef DataConfig_DataFormat DataFormat;
  static const DataFormat BIN = DataConfig_DataFormat_BIN;
  static const DataFormat PROTO = DataConfig_DataFormat_PROTO;
  static const DataFormat TEXT = DataConfig_DataFormat_TEXT;
  static inline bool DataFormat_IsValid(int value) {
    return DataConfig_DataFormat_IsValid(value);
  }
  static const DataFormat DataFormat_MIN =
    DataConfig_DataFormat_DataFormat_MIN;
  static const DataFormat DataFormat_MAX =
    DataConfig_DataFormat_DataFormat_MAX;
  static const int DataFormat_ARRAYSIZE =
    DataConfig_DataFormat_DataFormat_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  DataFormat_descriptor() {
    return DataConfig_DataFormat_descriptor();
  }
  static inline const ::std::string& DataFormat_Name(DataFormat value) {
    return DataConfig_DataFormat_Name(value);
  }
  static inline bool DataFormat_Parse(const ::std::string& name,
      DataFormat* value) {
    return DataConfig_DataFormat_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .PS.DataConfig.DataFormat format = 1;
  inline bool has_format() const;
  inline void clear_format();
  static const int kFormatFieldNumber = 1;
  inline ::PS::DataConfig_DataFormat format() const;
  inline void set_format(::PS::DataConfig_DataFormat value);

  // repeated string files = 2;
  inline int files_size() const;
  inline void clear_files();
  static const int kFilesFieldNumber = 2;
  inline const ::std::string& files(int index) const;
  inline ::std::string* mutable_files(int index);
  inline void set_files(int index, const ::std::string& value);
  inline void set_files(int index, const char* value);
  inline void set_files(int index, const char* value, size_t size);
  inline ::std::string* add_files();
  inline void add_files(const ::std::string& value);
  inline void add_files(const char* value);
  inline void add_files(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& files() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_files();

  // optional .PS.PbRange range = 3;
  inline bool has_range() const;
  inline void clear_range();
  static const int kRangeFieldNumber = 3;
  inline const ::PS::PbRange& range() const;
  inline ::PS::PbRange* mutable_range();
  inline ::PS::PbRange* release_range();
  inline void set_allocated_range(::PS::PbRange* range);

  // @@protoc_insertion_point(class_scope:PS.DataConfig)
 private:
  inline void set_has_format();
  inline void clear_has_format();
  inline void set_has_range();
  inline void clear_has_range();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::std::string> files_;
  ::PS::PbRange* range_;
  int format_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fconfig_2eproto();
  friend void protobuf_AssignDesc_proto_2fconfig_2eproto();
  friend void protobuf_ShutdownFile_proto_2fconfig_2eproto();

  void InitAsDefaultInstance();
  static DataConfig* default_instance_;
};
// -------------------------------------------------------------------

class ParameterInitConfig : public ::google::protobuf::Message {
 public:
  ParameterInitConfig();
  virtual ~ParameterInitConfig();

  ParameterInitConfig(const ParameterInitConfig& from);

  inline ParameterInitConfig& operator=(const ParameterInitConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ParameterInitConfig& default_instance();

  void Swap(ParameterInitConfig* other);

  // implements Message ----------------------------------------------

  ParameterInitConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ParameterInitConfig& from);
  void MergeFrom(const ParameterInitConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef ParameterInitConfig_Type Type;
  static const Type ZERO = ParameterInitConfig_Type_ZERO;
  static const Type RANDOM = ParameterInitConfig_Type_RANDOM;
  static const Type FILE = ParameterInitConfig_Type_FILE;
  static inline bool Type_IsValid(int value) {
    return ParameterInitConfig_Type_IsValid(value);
  }
  static const Type Type_MIN =
    ParameterInitConfig_Type_Type_MIN;
  static const Type Type_MAX =
    ParameterInitConfig_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    ParameterInitConfig_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return ParameterInitConfig_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return ParameterInitConfig_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return ParameterInitConfig_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .PS.ParameterInitConfig.Type type = 1 [default = ZERO];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::PS::ParameterInitConfig_Type type() const;
  inline void set_type(::PS::ParameterInitConfig_Type value);

  // optional double random_std = 2 [default = 1];
  inline bool has_random_std() const;
  inline void clear_random_std();
  static const int kRandomStdFieldNumber = 2;
  inline double random_std() const;
  inline void set_random_std(double value);

  // @@protoc_insertion_point(class_scope:PS.ParameterInitConfig)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_random_std();
  inline void clear_has_random_std();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double random_std_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fconfig_2eproto();
  friend void protobuf_AssignDesc_proto_2fconfig_2eproto();
  friend void protobuf_ShutdownFile_proto_2fconfig_2eproto();

  void InitAsDefaultInstance();
  static ParameterInitConfig* default_instance_;
};
// -------------------------------------------------------------------

class LearningRateConfig : public ::google::protobuf::Message {
 public:
  LearningRateConfig();
  virtual ~LearningRateConfig();

  LearningRateConfig(const LearningRateConfig& from);

  inline LearningRateConfig& operator=(const LearningRateConfig& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LearningRateConfig& default_instance();

  void Swap(LearningRateConfig* other);

  // implements Message ----------------------------------------------

  LearningRateConfig* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LearningRateConfig& from);
  void MergeFrom(const LearningRateConfig& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef LearningRateConfig_Type Type;
  static const Type CONSTANT = LearningRateConfig_Type_CONSTANT;
  static inline bool Type_IsValid(int value) {
    return LearningRateConfig_Type_IsValid(value);
  }
  static const Type Type_MIN =
    LearningRateConfig_Type_Type_MIN;
  static const Type Type_MAX =
    LearningRateConfig_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    LearningRateConfig_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return LearningRateConfig_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return LearningRateConfig_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return LearningRateConfig_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .PS.LearningRateConfig.Type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::PS::LearningRateConfig_Type type() const;
  inline void set_type(::PS::LearningRateConfig_Type value);

  // optional double eta = 2 [default = 1];
  inline bool has_eta() const;
  inline void clear_eta();
  static const int kEtaFieldNumber = 2;
  inline double eta() const;
  inline void set_eta(double value);

  // @@protoc_insertion_point(class_scope:PS.LearningRateConfig)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_eta();
  inline void clear_has_eta();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double eta_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_proto_2fconfig_2eproto();
  friend void protobuf_AssignDesc_proto_2fconfig_2eproto();
  friend void protobuf_ShutdownFile_proto_2fconfig_2eproto();

  void InitAsDefaultInstance();
  static LearningRateConfig* default_instance_;
};
// ===================================================================


// ===================================================================

// DataConfig

// required .PS.DataConfig.DataFormat format = 1;
inline bool DataConfig::has_format() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DataConfig::set_has_format() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DataConfig::clear_has_format() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DataConfig::clear_format() {
  format_ = 1;
  clear_has_format();
}
inline ::PS::DataConfig_DataFormat DataConfig::format() const {
  return static_cast< ::PS::DataConfig_DataFormat >(format_);
}
inline void DataConfig::set_format(::PS::DataConfig_DataFormat value) {
  assert(::PS::DataConfig_DataFormat_IsValid(value));
  set_has_format();
  format_ = value;
}

// repeated string files = 2;
inline int DataConfig::files_size() const {
  return files_.size();
}
inline void DataConfig::clear_files() {
  files_.Clear();
}
inline const ::std::string& DataConfig::files(int index) const {
  return files_.Get(index);
}
inline ::std::string* DataConfig::mutable_files(int index) {
  return files_.Mutable(index);
}
inline void DataConfig::set_files(int index, const ::std::string& value) {
  files_.Mutable(index)->assign(value);
}
inline void DataConfig::set_files(int index, const char* value) {
  files_.Mutable(index)->assign(value);
}
inline void DataConfig::set_files(int index, const char* value, size_t size) {
  files_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DataConfig::add_files() {
  return files_.Add();
}
inline void DataConfig::add_files(const ::std::string& value) {
  files_.Add()->assign(value);
}
inline void DataConfig::add_files(const char* value) {
  files_.Add()->assign(value);
}
inline void DataConfig::add_files(const char* value, size_t size) {
  files_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
DataConfig::files() const {
  return files_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
DataConfig::mutable_files() {
  return &files_;
}

// optional .PS.PbRange range = 3;
inline bool DataConfig::has_range() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DataConfig::set_has_range() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DataConfig::clear_has_range() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DataConfig::clear_range() {
  if (range_ != NULL) range_->::PS::PbRange::Clear();
  clear_has_range();
}
inline const ::PS::PbRange& DataConfig::range() const {
  return range_ != NULL ? *range_ : *default_instance_->range_;
}
inline ::PS::PbRange* DataConfig::mutable_range() {
  set_has_range();
  if (range_ == NULL) range_ = new ::PS::PbRange;
  return range_;
}
inline ::PS::PbRange* DataConfig::release_range() {
  clear_has_range();
  ::PS::PbRange* temp = range_;
  range_ = NULL;
  return temp;
}
inline void DataConfig::set_allocated_range(::PS::PbRange* range) {
  delete range_;
  range_ = range;
  if (range) {
    set_has_range();
  } else {
    clear_has_range();
  }
}

// -------------------------------------------------------------------

// ParameterInitConfig

// optional .PS.ParameterInitConfig.Type type = 1 [default = ZERO];
inline bool ParameterInitConfig::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ParameterInitConfig::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ParameterInitConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ParameterInitConfig::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::PS::ParameterInitConfig_Type ParameterInitConfig::type() const {
  return static_cast< ::PS::ParameterInitConfig_Type >(type_);
}
inline void ParameterInitConfig::set_type(::PS::ParameterInitConfig_Type value) {
  assert(::PS::ParameterInitConfig_Type_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional double random_std = 2 [default = 1];
inline bool ParameterInitConfig::has_random_std() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ParameterInitConfig::set_has_random_std() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ParameterInitConfig::clear_has_random_std() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ParameterInitConfig::clear_random_std() {
  random_std_ = 1;
  clear_has_random_std();
}
inline double ParameterInitConfig::random_std() const {
  return random_std_;
}
inline void ParameterInitConfig::set_random_std(double value) {
  set_has_random_std();
  random_std_ = value;
}

// -------------------------------------------------------------------

// LearningRateConfig

// required .PS.LearningRateConfig.Type type = 1;
inline bool LearningRateConfig::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LearningRateConfig::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LearningRateConfig::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LearningRateConfig::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::PS::LearningRateConfig_Type LearningRateConfig::type() const {
  return static_cast< ::PS::LearningRateConfig_Type >(type_);
}
inline void LearningRateConfig::set_type(::PS::LearningRateConfig_Type value) {
  assert(::PS::LearningRateConfig_Type_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional double eta = 2 [default = 1];
inline bool LearningRateConfig::has_eta() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LearningRateConfig::set_has_eta() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LearningRateConfig::clear_has_eta() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LearningRateConfig::clear_eta() {
  eta_ = 1;
  clear_has_eta();
}
inline double LearningRateConfig::eta() const {
  return eta_;
}
inline void LearningRateConfig::set_eta(double value) {
  set_has_eta();
  eta_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::DataConfig_DataFormat>() {
  return ::PS::DataConfig_DataFormat_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::ParameterInitConfig_Type>() {
  return ::PS::ParameterInitConfig_Type_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::LearningRateConfig_Type>() {
  return ::PS::LearningRateConfig_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_proto_2fconfig_2eproto__INCLUDED
