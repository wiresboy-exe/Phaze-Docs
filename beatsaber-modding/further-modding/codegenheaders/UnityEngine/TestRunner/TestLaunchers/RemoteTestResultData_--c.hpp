// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData
#include "UnityEngine/TestRunner/TestLaunchers/RemoteTestResultData.hpp"
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
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/UnityEngine.TestRunner.TestLaunchers.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class RemoteTestResultData::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/UnityEngine.TestRunner.TestLaunchers.<>c <>9
    static UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/UnityEngine.TestRunner.TestLaunchers.<>c <>9
    static void _set_$$9(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c* value);
    // Get static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__19_0
    static System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* _get_$$9__19_0();
    // Set static field: static public System.Func`2<NUnit.Framework.Interfaces.ITestResult,System.String> <>9__19_0
    static void _set_$$9__19_0(System::Func_2<NUnit::Framework::Interfaces::ITestResult*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x14C5330
    static void _cctor();
    // System.String <.ctor>b__19_0(NUnit.Framework.Interfaces.ITestResult child)
    // Offset: 0x14C539C
    ::Il2CppString* $_ctor$b__19_0(NUnit::Framework::Interfaces::ITestResult* child);
    // public System.Void .ctor()
    // Offset: 0x14C5394
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteTestResultData::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteTestResultData::$$c*, creationType>()));
    }
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestResultData/UnityEngine.TestRunner.TestLaunchers.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestResultData/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c::$_ctor$b__19_0
// Il2CppName: <.ctor>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c::$_ctor$b__19_0)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c*), "<.ctor>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::TestLaunchers::RemoteTestResultData::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
