// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.SoapServices
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA3310
  class SoapServices : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Remoting::SoapServices::TypeInfo
    class TypeInfo;
    // Creating value type constructor for type: SoapServices
    SoapServices() noexcept {}
    // Get static field: static private System.Collections.Hashtable _xmlTypes
    static System::Collections::Hashtable* _get__xmlTypes();
    // Set static field: static private System.Collections.Hashtable _xmlTypes
    static void _set__xmlTypes(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable _xmlElements
    static System::Collections::Hashtable* _get__xmlElements();
    // Set static field: static private System.Collections.Hashtable _xmlElements
    static void _set__xmlElements(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable _soapActions
    static System::Collections::Hashtable* _get__soapActions();
    // Set static field: static private System.Collections.Hashtable _soapActions
    static void _set__soapActions(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable _soapActionsMethods
    static System::Collections::Hashtable* _get__soapActionsMethods();
    // Set static field: static private System.Collections.Hashtable _soapActionsMethods
    static void _set__soapActionsMethods(System::Collections::Hashtable* value);
    // Get static field: static private System.Collections.Hashtable _typeInfos
    static System::Collections::Hashtable* _get__typeInfos();
    // Set static field: static private System.Collections.Hashtable _typeInfos
    static void _set__typeInfos(System::Collections::Hashtable* value);
    // static public System.String get_XmlNsForClrTypeWithAssembly()
    // Offset: 0x161646C
    static ::Il2CppString* get_XmlNsForClrTypeWithAssembly();
    // static public System.String get_XmlNsForClrTypeWithNs()
    // Offset: 0x16164B4
    static ::Il2CppString* get_XmlNsForClrTypeWithNs();
    // static public System.String get_XmlNsForClrTypeWithNsAndAssembly()
    // Offset: 0x16164FC
    static ::Il2CppString* get_XmlNsForClrTypeWithNsAndAssembly();
    // static private System.Void .cctor()
    // Offset: 0x16174FC
    static void _cctor();
    // static public System.String CodeXmlNamespaceForClrTypeNamespace(System.String typeNamespace, System.String assemblyName)
    // Offset: 0x1616544
    static ::Il2CppString* CodeXmlNamespaceForClrTypeNamespace(::Il2CppString* typeNamespace, ::Il2CppString* assemblyName);
    // static private System.String GetNameKey(System.String name, System.String namspace)
    // Offset: 0x16167AC
    static ::Il2CppString* GetNameKey(::Il2CppString* name, ::Il2CppString* namspace);
    // static private System.String GetAssemblyName(System.Reflection.MethodBase mb)
    // Offset: 0x1616828
    static ::Il2CppString* GetAssemblyName(System::Reflection::MethodBase* mb);
    // static public System.Boolean GetXmlElementForInteropType(System.Type type, out System.String xmlElement, out System.String xmlNamespace)
    // Offset: 0x161695C
    static bool GetXmlElementForInteropType(System::Type* type, ByRef<::Il2CppString*> xmlElement, ByRef<::Il2CppString*> xmlNamespace);
    // static public System.String GetXmlNamespaceForMethodCall(System.Reflection.MethodBase mb)
    // Offset: 0x1616A30
    static ::Il2CppString* GetXmlNamespaceForMethodCall(System::Reflection::MethodBase* mb);
    // static public System.String GetXmlNamespaceForMethodResponse(System.Reflection.MethodBase mb)
    // Offset: 0x1616AD4
    static ::Il2CppString* GetXmlNamespaceForMethodResponse(System::Reflection::MethodBase* mb);
    // static public System.Boolean GetXmlTypeForInteropType(System.Type type, out System.String xmlType, out System.String xmlTypeNamespace)
    // Offset: 0x1616B78
    static bool GetXmlTypeForInteropType(System::Type* type, ByRef<::Il2CppString*> xmlType, ByRef<::Il2CppString*> xmlTypeNamespace);
    // static public System.Void PreLoad(System.Reflection.Assembly assembly)
    // Offset: 0x1616C44
    static void PreLoad(System::Reflection::Assembly* assembly);
    // static public System.Void PreLoad(System.Type type)
    // Offset: 0x1616D20
    static void PreLoad(System::Type* type);
    // static public System.Void RegisterInteropXmlElement(System.String xmlElement, System.String xmlNamespace, System.Type type)
    // Offset: 0x1617390
    static void RegisterInteropXmlElement(::Il2CppString* xmlElement, ::Il2CppString* xmlNamespace, System::Type* type);
    // static public System.Void RegisterInteropXmlType(System.String xmlType, System.String xmlTypeNamespace, System.Type type)
    // Offset: 0x161722C
    static void RegisterInteropXmlType(::Il2CppString* xmlType, ::Il2CppString* xmlTypeNamespace, System::Type* type);
    // static private System.String EncodeNs(System.String ns)
    // Offset: 0x16166FC
    static ::Il2CppString* EncodeNs(::Il2CppString* ns);
  }; // System.Runtime.Remoting.SoapServices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::SoapServices*, "System.Runtime.Remoting", "SoapServices");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithAssembly
// Il2CppName: get_XmlNsForClrTypeWithAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithAssembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "get_XmlNsForClrTypeWithAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNs
// Il2CppName: get_XmlNsForClrTypeWithNs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "get_XmlNsForClrTypeWithNs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNsAndAssembly
// Il2CppName: get_XmlNsForClrTypeWithNsAndAssembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&System::Runtime::Remoting::SoapServices::get_XmlNsForClrTypeWithNsAndAssembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "get_XmlNsForClrTypeWithNsAndAssembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::SoapServices::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::CodeXmlNamespaceForClrTypeNamespace
// Il2CppName: CodeXmlNamespaceForClrTypeNamespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&System::Runtime::Remoting::SoapServices::CodeXmlNamespaceForClrTypeNamespace)> {
  static const MethodInfo* get() {
    static auto* typeNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "CodeXmlNamespaceForClrTypeNamespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeNamespace, assemblyName});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::GetNameKey
// Il2CppName: GetNameKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*, ::Il2CppString*)>(&System::Runtime::Remoting::SoapServices::GetNameKey)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* namspace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "GetNameKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, namspace});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::GetAssemblyName
// Il2CppName: GetAssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Reflection::MethodBase*)>(&System::Runtime::Remoting::SoapServices::GetAssemblyName)> {
  static const MethodInfo* get() {
    static auto* mb = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "GetAssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mb});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::GetXmlElementForInteropType
// Il2CppName: GetXmlElementForInteropType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, ByRef<::Il2CppString*>, ByRef<::Il2CppString*>)>(&System::Runtime::Remoting::SoapServices::GetXmlElementForInteropType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* xmlElement = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* xmlNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "GetXmlElementForInteropType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, xmlElement, xmlNamespace});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodCall
// Il2CppName: GetXmlNamespaceForMethodCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Reflection::MethodBase*)>(&System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodCall)> {
  static const MethodInfo* get() {
    static auto* mb = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "GetXmlNamespaceForMethodCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mb});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodResponse
// Il2CppName: GetXmlNamespaceForMethodResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Reflection::MethodBase*)>(&System::Runtime::Remoting::SoapServices::GetXmlNamespaceForMethodResponse)> {
  static const MethodInfo* get() {
    static auto* mb = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "GetXmlNamespaceForMethodResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mb});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::GetXmlTypeForInteropType
// Il2CppName: GetXmlTypeForInteropType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, ByRef<::Il2CppString*>, ByRef<::Il2CppString*>)>(&System::Runtime::Remoting::SoapServices::GetXmlTypeForInteropType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* xmlType = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* xmlTypeNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "GetXmlTypeForInteropType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, xmlType, xmlTypeNamespace});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::PreLoad
// Il2CppName: PreLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Reflection::Assembly*)>(&System::Runtime::Remoting::SoapServices::PreLoad)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "PreLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::PreLoad
// Il2CppName: PreLoad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Type*)>(&System::Runtime::Remoting::SoapServices::PreLoad)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "PreLoad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::RegisterInteropXmlElement
// Il2CppName: RegisterInteropXmlElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, System::Type*)>(&System::Runtime::Remoting::SoapServices::RegisterInteropXmlElement)> {
  static const MethodInfo* get() {
    static auto* xmlElement = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* xmlNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "RegisterInteropXmlElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlElement, xmlNamespace, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::RegisterInteropXmlType
// Il2CppName: RegisterInteropXmlType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ::Il2CppString*, System::Type*)>(&System::Runtime::Remoting::SoapServices::RegisterInteropXmlType)> {
  static const MethodInfo* get() {
    static auto* xmlType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* xmlTypeNamespace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "RegisterInteropXmlType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlType, xmlTypeNamespace, type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::SoapServices::EncodeNs
// Il2CppName: EncodeNs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Runtime::Remoting::SoapServices::EncodeNs)> {
  static const MethodInfo* get() {
    static auto* ns = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::SoapServices*), "EncodeNs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ns});
  }
};
