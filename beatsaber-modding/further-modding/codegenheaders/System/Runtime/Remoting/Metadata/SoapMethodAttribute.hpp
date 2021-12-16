// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA36C0
  // [ComVisibleAttribute] Offset: DA36C0
  class SoapMethodAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // private System.String _responseElement
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* responseElement;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _responseNamespace
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* responseNamespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _returnElement
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* returnElement;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _soapAction
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* soapAction;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _useAttribute
    // Size: 0x1
    // Offset: 0x48
    bool useAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAttribute and: _namespace
    char __padding4[0x7] = {};
    // private System.String _namespace
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* _namespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SoapMethodAttribute
    SoapMethodAttribute(::Il2CppString* responseElement_ = {}, ::Il2CppString* responseNamespace_ = {}, ::Il2CppString* returnElement_ = {}, ::Il2CppString* soapAction_ = {}, bool useAttribute_ = {}, ::Il2CppString* _namespace_ = {}) noexcept : responseElement{responseElement_}, responseNamespace{responseNamespace_}, returnElement{returnElement_}, soapAction{soapAction_}, useAttribute{useAttribute_}, _namespace{_namespace_} {}
    // Get instance field reference: private System.String _responseElement
    ::Il2CppString*& dyn__responseElement();
    // Get instance field reference: private System.String _responseNamespace
    ::Il2CppString*& dyn__responseNamespace();
    // Get instance field reference: private System.String _returnElement
    ::Il2CppString*& dyn__returnElement();
    // Get instance field reference: private System.String _soapAction
    ::Il2CppString*& dyn__soapAction();
    // Get instance field reference: private System.Boolean _useAttribute
    bool& dyn__useAttribute();
    // Get instance field reference: private System.String _namespace
    ::Il2CppString*& dyn__namespace();
    // public override System.Boolean get_UseAttribute()
    // Offset: 0x1A5824C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Boolean SoapAttribute::get_UseAttribute()
    bool get_UseAttribute();
    // public override System.String get_XmlNamespace()
    // Offset: 0x1A58254
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.String SoapAttribute::get_XmlNamespace()
    ::Il2CppString* get_XmlNamespace();
    // public System.Void .ctor()
    // Offset: 0x1A46EE8
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Metadata::SoapMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapMethodAttribute*, creationType>()));
    }
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0x1A5825C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(SoapMethodAttribute), 80 + sizeof(::Il2CppString*)> __System_Runtime_Remoting_Metadata_SoapMethodAttributeSizeCheck;
  static_assert(sizeof(SoapMethodAttribute) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapMethodAttribute*, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute
// Il2CppName: get_UseAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapMethodAttribute*), "get_UseAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace
// Il2CppName: get_XmlNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapMethodAttribute*), "get_XmlNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject
// Il2CppName: SetReflectionObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject)> {
  static const MethodInfo* get() {
    static auto* reflectionObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Metadata::SoapMethodAttribute*), "SetReflectionObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reflectionObject});
  }
};
