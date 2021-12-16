// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.HtmlEncodedRawTextWriter
#include "System/Xml/HtmlEncodedRawTextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xF9
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.HtmlEncodedRawTextWriterIndent
  // [TokenAttribute] Offset: FFFFFFFF
  class HtmlEncodedRawTextWriterIndent : public System::Xml::HtmlEncodedRawTextWriter {
    public:
    // Writing base type padding for base size: 0xE1 to desired offset: 0xE4
    char ___base_padding[0x3] = {};
    // private System.Int32 indentLevel
    // Size: 0x4
    // Offset: 0xE4
    int indentLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 endBlockPos
    // Size: 0x4
    // Offset: 0xE8
    int endBlockPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: endBlockPos and: indentChars
    char __padding1[0x4] = {};
    // private System.String indentChars
    // Size: 0x8
    // Offset: 0xF0
    ::Il2CppString* indentChars;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean newLineOnAttributes
    // Size: 0x1
    // Offset: 0xF8
    bool newLineOnAttributes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HtmlEncodedRawTextWriterIndent
    HtmlEncodedRawTextWriterIndent(int indentLevel_ = {}, int endBlockPos_ = {}, ::Il2CppString* indentChars_ = {}, bool newLineOnAttributes_ = {}) noexcept : indentLevel{indentLevel_}, endBlockPos{endBlockPos_}, indentChars{indentChars_}, newLineOnAttributes{newLineOnAttributes_} {}
    // Get instance field reference: private System.Int32 indentLevel
    int& dyn_indentLevel();
    // Get instance field reference: private System.Int32 endBlockPos
    int& dyn_endBlockPos();
    // Get instance field reference: private System.String indentChars
    ::Il2CppString*& dyn_indentChars();
    // Get instance field reference: private System.Boolean newLineOnAttributes
    bool& dyn_newLineOnAttributes();
    // private System.Void WriteIndent()
    // Offset: 0x195830C
    void WriteIndent();
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x1958058
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HtmlEncodedRawTextWriterIndent* New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::HtmlEncodedRawTextWriterIndent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HtmlEncodedRawTextWriterIndent*, creationType>(writer, settings)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x19580CC
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HtmlEncodedRawTextWriterIndent* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::HtmlEncodedRawTextWriterIndent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HtmlEncodedRawTextWriterIndent*, creationType>(stream, settings)));
    }
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x1958118
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1958140
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x1958358
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x19583E0
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x1958480
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // protected override System.Void FlushBuffer()
    // Offset: 0x19584F4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::FlushBuffer()
    void FlushBuffer();
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x19580A4
    // Implemented from: System.Xml.HtmlEncodedRawTextWriter
    // Base method: System.Void HtmlEncodedRawTextWriter::Init(System.Xml.XmlWriterSettings settings)
    void Init(System::Xml::XmlWriterSettings* settings);
  }; // System.Xml.HtmlEncodedRawTextWriterIndent
  #pragma pack(pop)
  static check_size<sizeof(HtmlEncodedRawTextWriterIndent), 248 + sizeof(bool)> __System_Xml_HtmlEncodedRawTextWriterIndentSizeCheck;
  static_assert(sizeof(HtmlEncodedRawTextWriterIndent) == 0xF9);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlEncodedRawTextWriterIndent*, "System.Xml", "HtmlEncodedRawTextWriterIndent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::WriteIndent
// Il2CppName: WriteIndent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)()>(&System::Xml::HtmlEncodedRawTextWriterIndent::WriteIndent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "WriteIndent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::WriteDocType
// Il2CppName: WriteDocType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlEncodedRawTextWriterIndent::WriteDocType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pubid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sysid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* subset = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "WriteDocType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, pubid, sysid, subset});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::WriteStartElement
// Il2CppName: WriteStartElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlEncodedRawTextWriterIndent::WriteStartElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "WriteStartElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::StartElementContent
// Il2CppName: StartElementContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)()>(&System::Xml::HtmlEncodedRawTextWriterIndent::StartElementContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "StartElementContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::WriteEndElement
// Il2CppName: WriteEndElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlEncodedRawTextWriterIndent::WriteEndElement)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "WriteEndElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::WriteStartAttribute
// Il2CppName: WriteStartAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)(::Il2CppString*, ::Il2CppString*, ::Il2CppString*)>(&System::Xml::HtmlEncodedRawTextWriterIndent::WriteStartAttribute)> {
  static const MethodInfo* get() {
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* localName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "WriteStartAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefix, localName, ns});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::FlushBuffer
// Il2CppName: FlushBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)()>(&System::Xml::HtmlEncodedRawTextWriterIndent::FlushBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "FlushBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::HtmlEncodedRawTextWriterIndent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::HtmlEncodedRawTextWriterIndent::*)(System::Xml::XmlWriterSettings*)>(&System::Xml::HtmlEncodedRawTextWriterIndent::Init)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriterSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::HtmlEncodedRawTextWriterIndent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
