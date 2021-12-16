// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::Utils
namespace UnityEngine::TestRunner::Utils {
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
  // [TokenAttribute] Offset: FFFFFFFF
  class TestRunCallbackListener : public UnityEngine::ScriptableObject {
    public:
    // Nested type: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c
    class $$c;
    // Nested type: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // private UnityEngine.TestRunner.ITestRunCallback[] m_Callbacks
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::TestRunner::ITestRunCallback*>* m_Callbacks;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::TestRunner::ITestRunCallback*>*) == 0x8);
    // Creating value type constructor for type: TestRunCallbackListener
    TestRunCallbackListener(::Array<UnityEngine::TestRunner::ITestRunCallback*>* m_Callbacks_ = {}) noexcept : m_Callbacks{m_Callbacks_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.TestRunner.ITestRunCallback[] m_Callbacks
    ::Array<UnityEngine::TestRunner::ITestRunCallback*>*& dyn_m_Callbacks();
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x14C5AC4
    void RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun);
    // static private UnityEngine.TestRunner.ITestRunCallback[] GetAllCallbacks()
    // Offset: 0x14C5CF8
    static ::Array<UnityEngine::TestRunner::ITestRunCallback*>* GetAllCallbacks();
    // private System.Void InvokeAllCallbacks(System.Action`1<UnityEngine.TestRunner.ITestRunCallback> invoker)
    // Offset: 0x14C5B7C
    void InvokeAllCallbacks(System::Action_1<UnityEngine::TestRunner::ITestRunCallback*>* invoker);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x14C5F8C
    void RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x14C6044
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x14C60FC
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void .ctor()
    // Offset: 0x14C61B4
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRunCallbackListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::Utils::TestRunCallbackListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRunCallbackListener*, creationType>()));
    }
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener
  #pragma pack(pop)
  static check_size<sizeof(TestRunCallbackListener), 24 + sizeof(::Array<UnityEngine::TestRunner::ITestRunCallback*>*)> __UnityEngine_TestRunner_Utils_TestRunCallbackListenerSizeCheck;
  static_assert(sizeof(TestRunCallbackListener) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::Utils::TestRunCallbackListener*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunStarted
// Il2CppName: RunStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunStarted)> {
  static const MethodInfo* get() {
    static auto* testsToRun = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "RunStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testsToRun});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::GetAllCallbacks
// Il2CppName: GetAllCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::TestRunner::ITestRunCallback*>* (*)()>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::GetAllCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "GetAllCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::InvokeAllCallbacks
// Il2CppName: InvokeAllCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(System::Action_1<UnityEngine::TestRunner::ITestRunCallback*>*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::InvokeAllCallbacks)> {
  static const MethodInfo* get() {
    static auto* invoker = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner", "ITestRunCallback")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "InvokeAllCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invoker});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunFinished
// Il2CppName: RunFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunFinished)> {
  static const MethodInfo* get() {
    static auto* testResults = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "RunFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!