// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.RuntimeAssembly
#include "System/Reflection/RuntimeAssembly.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: AssemblyName
  class AssemblyName;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MonoAssembly
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA166C
  // [ClassInterfaceAttribute] Offset: DA166C
  // [ComDefaultInterfaceAttribute] Offset: DA166C
  class MonoAssembly : public System::Reflection::RuntimeAssembly {
    public:
    // Creating value type constructor for type: MonoAssembly
    MonoAssembly() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1D1EEC0
    // Implemented from: System.Reflection.RuntimeAssembly
    // Base method: System.Void RuntimeAssembly::.ctor()
    // Base method: System.Void Assembly::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoAssembly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoAssembly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoAssembly*, creationType>()));
    }
    // public override System.Type GetType(System.String name, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x1D1EB58
    // Implemented from: System.Reflection.Assembly
    // Base method: System.Type Assembly::GetType(System.String name, System.Boolean throwOnError, System.Boolean ignoreCase)
    System::Type* GetType(::Il2CppString* name, bool throwOnError, bool ignoreCase);
    // public override System.Reflection.Module GetModule(System.String name)
    // Offset: 0x1D1EC40
    // Implemented from: System.Reflection.Assembly
    // Base method: System.Reflection.Module Assembly::GetModule(System.String name)
    System::Reflection::Module* GetModule(::Il2CppString* name);
    // public override System.Reflection.AssemblyName[] GetReferencedAssemblies()
    // Offset: 0x1D1ED8C
    // Implemented from: System.Reflection.Assembly
    // Base method: System.Reflection.AssemblyName[] Assembly::GetReferencedAssemblies()
    ::Array<System::Reflection::AssemblyName*>* GetReferencedAssemblies();
    // public override System.Reflection.Module[] GetModules(System.Boolean getResourceModules)
    // Offset: 0x1D1ED90
    // Implemented from: System.Reflection.Assembly
    // Base method: System.Reflection.Module[] Assembly::GetModules(System.Boolean getResourceModules)
    ::Array<System::Reflection::Module*>* GetModules(bool getResourceModules);
  }; // System.Reflection.MonoAssembly
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoAssembly*, "System.Reflection", "MonoAssembly");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoAssembly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoAssembly::GetType
// Il2CppName: GetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Reflection::MonoAssembly::*)(::Il2CppString*, bool, bool)>(&System::Reflection::MonoAssembly::GetType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* throwOnError = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreCase = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoAssembly*), "GetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, throwOnError, ignoreCase});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoAssembly::GetModule
// Il2CppName: GetModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Module* (System::Reflection::MonoAssembly::*)(::Il2CppString*)>(&System::Reflection::MonoAssembly::GetModule)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoAssembly*), "GetModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoAssembly::GetReferencedAssemblies
// Il2CppName: GetReferencedAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::AssemblyName*>* (System::Reflection::MonoAssembly::*)()>(&System::Reflection::MonoAssembly::GetReferencedAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoAssembly*), "GetReferencedAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoAssembly::GetModules
// Il2CppName: GetModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<System::Reflection::Module*>* (System::Reflection::MonoAssembly::*)(bool)>(&System::Reflection::MonoAssembly::GetModules)> {
  static const MethodInfo* get() {
    static auto* getResourceModules = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoAssembly*), "GetModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{getResourceModules});
  }
};
