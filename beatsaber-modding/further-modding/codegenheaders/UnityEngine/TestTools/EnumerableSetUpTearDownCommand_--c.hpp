// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.EnumerableSetUpTearDownCommand
#include "UnityEngine/TestTools/EnumerableSetUpTearDownCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableSetUpTearDownCommand/UnityEngine.TestTools.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EnumerableSetUpTearDownCommand::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestTools.EnumerableSetUpTearDownCommand/UnityEngine.TestTools.<>c <>9
    static UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.EnumerableSetUpTearDownCommand/UnityEngine.TestTools.<>c <>9
    static void _set_$$9(UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c* value);
    // Get static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__1_0
    static System::Func_2<System::Reflection::MethodInfo*, bool>* _get_$$9__1_0();
    // Set static field: static public System.Func`2<System.Reflection.MethodInfo,System.Boolean> <>9__1_0
    static void _set_$$9__1_0(System::Func_2<System::Reflection::MethodInfo*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x14C8468
    static void _cctor();
    // System.Boolean <GetMethodsWithAttributeFromFixture>b__1_0(System.Reflection.MethodInfo x)
    // Offset: 0x14C84D4
    bool $GetMethodsWithAttributeFromFixture$b__1_0(System::Reflection::MethodInfo* x);
    // public System.Void .ctor()
    // Offset: 0x14C84CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableSetUpTearDownCommand::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableSetUpTearDownCommand::$$c*, creationType>()));
    }
  }; // UnityEngine.TestTools.EnumerableSetUpTearDownCommand/UnityEngine.TestTools.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c*, "UnityEngine.TestTools", "EnumerableSetUpTearDownCommand/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c::$GetMethodsWithAttributeFromFixture$b__1_0
// Il2CppName: <GetMethodsWithAttributeFromFixture>b__1_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c::*)(System::Reflection::MethodInfo*)>(&UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c::$GetMethodsWithAttributeFromFixture$b__1_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c*), "<GetMethodsWithAttributeFromFixture>b__1_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableSetUpTearDownCommand::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!