/* This file was generated by upbc (the upb compiler).  Do not edit. */

#ifndef UPB_DESCRIPTOR_CONST_H
#define UPB_DESCRIPTOR_CONST_H

#ifdef __cplusplus
extern "C" {
#endif

/* Enums. */

typedef enum google_protobuf_FieldOptions_CType {
  GOOGLE_PROTOBUF_FIELDOPTIONS_CTYPE_STRING = 0,
  GOOGLE_PROTOBUF_FIELDOPTIONS_CTYPE_CORD = 1,
  GOOGLE_PROTOBUF_FIELDOPTIONS_CTYPE_STRING_PIECE = 2
} google_protobuf_FieldOptions_CType;

typedef enum google_protobuf_FieldDescriptorProto_Type {
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_DOUBLE = 1,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_FLOAT = 2,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_INT64 = 3,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_UINT64 = 4,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_INT32 = 5,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_FIXED64 = 6,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_FIXED32 = 7,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_BOOL = 8,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_STRING = 9,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_GROUP = 10,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_MESSAGE = 11,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_BYTES = 12,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_UINT32 = 13,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_ENUM = 14,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_SFIXED32 = 15,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_SFIXED64 = 16,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_SINT32 = 17,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_TYPE_SINT64 = 18
} google_protobuf_FieldDescriptorProto_Type;

typedef enum google_protobuf_FieldDescriptorProto_Label {
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_LABEL_LABEL_OPTIONAL = 1,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_LABEL_LABEL_REQUIRED = 2,
  GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_LABEL_LABEL_REPEATED = 3
} google_protobuf_FieldDescriptorProto_Label;

typedef enum google_protobuf_FileOptions_OptimizeMode {
  GOOGLE_PROTOBUF_FILEOPTIONS_OPTIMIZEMODE_SPEED = 1,
  GOOGLE_PROTOBUF_FILEOPTIONS_OPTIMIZEMODE_CODE_SIZE = 2,
  GOOGLE_PROTOBUF_FILEOPTIONS_OPTIMIZEMODE_LITE_RUNTIME = 3
} google_protobuf_FileOptions_OptimizeMode;

/* Constants for field names and numbers. */

#define GOOGLE_PROTOBUF_FILEDESCRIPTORSET_FILE__FIELDNUM 1
#define GOOGLE_PROTOBUF_FILEDESCRIPTORSET_FILE__FIELDNAME "file"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORSET_FILE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_NAME__FIELDNUM 1
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_FIELD__FIELDNUM 2
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_FIELD__FIELDNAME "field"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_FIELD__FIELDTYPE 11

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_NESTED_TYPE__FIELDNUM 3
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_NESTED_TYPE__FIELDNAME "nested_type"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_NESTED_TYPE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_ENUM_TYPE__FIELDNUM 4
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_ENUM_TYPE__FIELDNAME "enum_type"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_ENUM_TYPE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSION_RANGE__FIELDNUM 5
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSION_RANGE__FIELDNAME "extension_range"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSION_RANGE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSION__FIELDNUM 6
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSION__FIELDNAME "extension"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_OPTIONS__FIELDNUM 7
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_OPTIONS__FIELDNAME "options"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_OPTIONS__FIELDTYPE 11

#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION_PATH__FIELDNUM 1
#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION_PATH__FIELDNAME "path"
#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION_PATH__FIELDTYPE 5

#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION_SPAN__FIELDNUM 2
#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION_SPAN__FIELDNAME "span"
#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION_SPAN__FIELDTYPE 5

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAME__FIELDNUM 2
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAME__FIELDTYPE 11

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_IDENTIFIER_VALUE__FIELDNUM 3
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_IDENTIFIER_VALUE__FIELDNAME "identifier_value"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_IDENTIFIER_VALUE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_POSITIVE_INT_VALUE__FIELDNUM 4
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_POSITIVE_INT_VALUE__FIELDNAME "positive_int_value"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_POSITIVE_INT_VALUE__FIELDTYPE 4

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NEGATIVE_INT_VALUE__FIELDNUM 5
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NEGATIVE_INT_VALUE__FIELDNAME "negative_int_value"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NEGATIVE_INT_VALUE__FIELDTYPE 3

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_DOUBLE_VALUE__FIELDNUM 6
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_DOUBLE_VALUE__FIELDNAME "double_value"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_DOUBLE_VALUE__FIELDTYPE 1

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_STRING_VALUE__FIELDNUM 7
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_STRING_VALUE__FIELDNAME "string_value"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_STRING_VALUE__FIELDTYPE 12

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_AGGREGATE_VALUE__FIELDNUM 8
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_AGGREGATE_VALUE__FIELDNAME "aggregate_value"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_AGGREGATE_VALUE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_NAME__FIELDNUM 1
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_PACKAGE__FIELDNUM 2
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_PACKAGE__FIELDNAME "package"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_PACKAGE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_DEPENDENCY__FIELDNUM 3
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_DEPENDENCY__FIELDNAME "dependency"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_DEPENDENCY__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_MESSAGE_TYPE__FIELDNUM 4
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_MESSAGE_TYPE__FIELDNAME "message_type"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_MESSAGE_TYPE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_ENUM_TYPE__FIELDNUM 5
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_ENUM_TYPE__FIELDNAME "enum_type"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_ENUM_TYPE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_SERVICE__FIELDNUM 6
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_SERVICE__FIELDNAME "service"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_SERVICE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_EXTENSION__FIELDNUM 7
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_EXTENSION__FIELDNAME "extension"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_EXTENSION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_OPTIONS__FIELDNUM 8
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_OPTIONS__FIELDNAME "options"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_OPTIONS__FIELDTYPE 11

#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_SOURCE_CODE_INFO__FIELDNUM 9
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_SOURCE_CODE_INFO__FIELDNAME "source_code_info"
#define GOOGLE_PROTOBUF_FILEDESCRIPTORPROTO_SOURCE_CODE_INFO__FIELDTYPE 11

#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_NAME__FIELDNUM 1
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_INPUT_TYPE__FIELDNUM 2
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_INPUT_TYPE__FIELDNAME "input_type"
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_INPUT_TYPE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_OUTPUT_TYPE__FIELDNUM 3
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_OUTPUT_TYPE__FIELDNAME "output_type"
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_OUTPUT_TYPE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_OPTIONS__FIELDNUM 4
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_OPTIONS__FIELDNAME "options"
#define GOOGLE_PROTOBUF_METHODDESCRIPTORPROTO_OPTIONS__FIELDTYPE 11

#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_NAME__FIELDNUM 1
#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_VALUE__FIELDNUM 2
#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_VALUE__FIELDNAME "value"
#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_VALUE__FIELDTYPE 11

#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_OPTIONS__FIELDNUM 3
#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_OPTIONS__FIELDNAME "options"
#define GOOGLE_PROTOBUF_ENUMDESCRIPTORPROTO_OPTIONS__FIELDTYPE 11

#define GOOGLE_PROTOBUF_ENUMVALUEOPTIONS_UNINTERPRETED_OPTION__FIELDNUM 999
#define GOOGLE_PROTOBUF_ENUMVALUEOPTIONS_UNINTERPRETED_OPTION__FIELDNAME "uninterpreted_option"
#define GOOGLE_PROTOBUF_ENUMVALUEOPTIONS_UNINTERPRETED_OPTION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_NAME__FIELDNUM 1
#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_NUMBER__FIELDNUM 2
#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_NUMBER__FIELDNAME "number"
#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_NUMBER__FIELDTYPE 5

#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_OPTIONS__FIELDNUM 3
#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_OPTIONS__FIELDNAME "options"
#define GOOGLE_PROTOBUF_ENUMVALUEDESCRIPTORPROTO_OPTIONS__FIELDTYPE 11

#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_NAME__FIELDNUM 1
#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_METHOD__FIELDNUM 2
#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_METHOD__FIELDNAME "method"
#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_METHOD__FIELDTYPE 11

#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_OPTIONS__FIELDNUM 3
#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_OPTIONS__FIELDNAME "options"
#define GOOGLE_PROTOBUF_SERVICEDESCRIPTORPROTO_OPTIONS__FIELDTYPE 11

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAMEPART_NAME_PART__FIELDNUM 1
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAMEPART_NAME_PART__FIELDNAME "name_part"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAMEPART_NAME_PART__FIELDTYPE 9

#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAMEPART_IS_EXTENSION__FIELDNUM 2
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAMEPART_IS_EXTENSION__FIELDNAME "is_extension"
#define GOOGLE_PROTOBUF_UNINTERPRETEDOPTION_NAMEPART_IS_EXTENSION__FIELDTYPE 8

#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION__FIELDNUM 1
#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION__FIELDNAME "location"
#define GOOGLE_PROTOBUF_SOURCECODEINFO_LOCATION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSIONRANGE_START__FIELDNUM 1
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSIONRANGE_START__FIELDNAME "start"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSIONRANGE_START__FIELDTYPE 5

#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSIONRANGE_END__FIELDNUM 2
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSIONRANGE_END__FIELDNAME "end"
#define GOOGLE_PROTOBUF_DESCRIPTORPROTO_EXTENSIONRANGE_END__FIELDTYPE 5

#define GOOGLE_PROTOBUF_FIELDOPTIONS_CTYPE__FIELDNUM 1
#define GOOGLE_PROTOBUF_FIELDOPTIONS_CTYPE__FIELDNAME "ctype"
#define GOOGLE_PROTOBUF_FIELDOPTIONS_CTYPE__FIELDTYPE 14

#define GOOGLE_PROTOBUF_FIELDOPTIONS_PACKED__FIELDNUM 2
#define GOOGLE_PROTOBUF_FIELDOPTIONS_PACKED__FIELDNAME "packed"
#define GOOGLE_PROTOBUF_FIELDOPTIONS_PACKED__FIELDTYPE 8

#define GOOGLE_PROTOBUF_FIELDOPTIONS_DEPRECATED__FIELDNUM 3
#define GOOGLE_PROTOBUF_FIELDOPTIONS_DEPRECATED__FIELDNAME "deprecated"
#define GOOGLE_PROTOBUF_FIELDOPTIONS_DEPRECATED__FIELDTYPE 8

#define GOOGLE_PROTOBUF_FIELDOPTIONS_EXPERIMENTAL_MAP_KEY__FIELDNUM 9
#define GOOGLE_PROTOBUF_FIELDOPTIONS_EXPERIMENTAL_MAP_KEY__FIELDNAME "experimental_map_key"
#define GOOGLE_PROTOBUF_FIELDOPTIONS_EXPERIMENTAL_MAP_KEY__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FIELDOPTIONS_UNINTERPRETED_OPTION__FIELDNUM 999
#define GOOGLE_PROTOBUF_FIELDOPTIONS_UNINTERPRETED_OPTION__FIELDNAME "uninterpreted_option"
#define GOOGLE_PROTOBUF_FIELDOPTIONS_UNINTERPRETED_OPTION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_PACKAGE__FIELDNUM 1
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_PACKAGE__FIELDNAME "java_package"
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_PACKAGE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_OUTER_CLASSNAME__FIELDNUM 8
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_OUTER_CLASSNAME__FIELDNAME "java_outer_classname"
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_OUTER_CLASSNAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FILEOPTIONS_OPTIMIZE_FOR__FIELDNUM 9
#define GOOGLE_PROTOBUF_FILEOPTIONS_OPTIMIZE_FOR__FIELDNAME "optimize_for"
#define GOOGLE_PROTOBUF_FILEOPTIONS_OPTIMIZE_FOR__FIELDTYPE 14

#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_MULTIPLE_FILES__FIELDNUM 10
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_MULTIPLE_FILES__FIELDNAME "java_multiple_files"
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_MULTIPLE_FILES__FIELDTYPE 8

#define GOOGLE_PROTOBUF_FILEOPTIONS_CC_GENERIC_SERVICES__FIELDNUM 16
#define GOOGLE_PROTOBUF_FILEOPTIONS_CC_GENERIC_SERVICES__FIELDNAME "cc_generic_services"
#define GOOGLE_PROTOBUF_FILEOPTIONS_CC_GENERIC_SERVICES__FIELDTYPE 8

#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_GENERIC_SERVICES__FIELDNUM 17
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_GENERIC_SERVICES__FIELDNAME "java_generic_services"
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_GENERIC_SERVICES__FIELDTYPE 8

#define GOOGLE_PROTOBUF_FILEOPTIONS_PY_GENERIC_SERVICES__FIELDNUM 18
#define GOOGLE_PROTOBUF_FILEOPTIONS_PY_GENERIC_SERVICES__FIELDNAME "py_generic_services"
#define GOOGLE_PROTOBUF_FILEOPTIONS_PY_GENERIC_SERVICES__FIELDTYPE 8

#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_GENERATE_EQUALS_AND_HASH__FIELDNUM 20
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_GENERATE_EQUALS_AND_HASH__FIELDNAME "java_generate_equals_and_hash"
#define GOOGLE_PROTOBUF_FILEOPTIONS_JAVA_GENERATE_EQUALS_AND_HASH__FIELDTYPE 8

#define GOOGLE_PROTOBUF_FILEOPTIONS_UNINTERPRETED_OPTION__FIELDNUM 999
#define GOOGLE_PROTOBUF_FILEOPTIONS_UNINTERPRETED_OPTION__FIELDNAME "uninterpreted_option"
#define GOOGLE_PROTOBUF_FILEOPTIONS_UNINTERPRETED_OPTION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_MESSAGE_SET_WIRE_FORMAT__FIELDNUM 1
#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_MESSAGE_SET_WIRE_FORMAT__FIELDNAME "message_set_wire_format"
#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_MESSAGE_SET_WIRE_FORMAT__FIELDTYPE 8

#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_NO_STANDARD_DESCRIPTOR_ACCESSOR__FIELDNUM 2
#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_NO_STANDARD_DESCRIPTOR_ACCESSOR__FIELDNAME "no_standard_descriptor_accessor"
#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_NO_STANDARD_DESCRIPTOR_ACCESSOR__FIELDTYPE 8

#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_UNINTERPRETED_OPTION__FIELDNUM 999
#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_UNINTERPRETED_OPTION__FIELDNAME "uninterpreted_option"
#define GOOGLE_PROTOBUF_MESSAGEOPTIONS_UNINTERPRETED_OPTION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_ENUMOPTIONS_UNINTERPRETED_OPTION__FIELDNUM 999
#define GOOGLE_PROTOBUF_ENUMOPTIONS_UNINTERPRETED_OPTION__FIELDNAME "uninterpreted_option"
#define GOOGLE_PROTOBUF_ENUMOPTIONS_UNINTERPRETED_OPTION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_NAME__FIELDNUM 1
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_NAME__FIELDNAME "name"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_EXTENDEE__FIELDNUM 2
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_EXTENDEE__FIELDNAME "extendee"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_EXTENDEE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_NUMBER__FIELDNUM 3
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_NUMBER__FIELDNAME "number"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_NUMBER__FIELDTYPE 5

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_LABEL__FIELDNUM 4
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_LABEL__FIELDNAME "label"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_LABEL__FIELDTYPE 14

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE__FIELDNUM 5
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE__FIELDNAME "type"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE__FIELDTYPE 14

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_NAME__FIELDNUM 6
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_NAME__FIELDNAME "type_name"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_TYPE_NAME__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_DEFAULT_VALUE__FIELDNUM 7
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_DEFAULT_VALUE__FIELDNAME "default_value"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_DEFAULT_VALUE__FIELDTYPE 9

#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_OPTIONS__FIELDNUM 8
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_OPTIONS__FIELDNAME "options"
#define GOOGLE_PROTOBUF_FIELDDESCRIPTORPROTO_OPTIONS__FIELDTYPE 11

#define GOOGLE_PROTOBUF_SERVICEOPTIONS_UNINTERPRETED_OPTION__FIELDNUM 999
#define GOOGLE_PROTOBUF_SERVICEOPTIONS_UNINTERPRETED_OPTION__FIELDNAME "uninterpreted_option"
#define GOOGLE_PROTOBUF_SERVICEOPTIONS_UNINTERPRETED_OPTION__FIELDTYPE 11

#define GOOGLE_PROTOBUF_METHODOPTIONS_UNINTERPRETED_OPTION__FIELDNUM 999
#define GOOGLE_PROTOBUF_METHODOPTIONS_UNINTERPRETED_OPTION__FIELDNAME "uninterpreted_option"
#define GOOGLE_PROTOBUF_METHODOPTIONS_UNINTERPRETED_OPTION__FIELDTYPE 11

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif  /* UPB_DESCRIPTOR_CONST_H */