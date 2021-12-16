// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityLogCheckDelegatingCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogScope
  class LogScope;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/UnityEngine.TestRunner.NUnitExtensions.Runner.<ExecuteEnumerable>d__3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: context
    char __padding2[0x4] = {};
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand <>4__this
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*) == 0x8);
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/UnityEngine.TestRunner.NUnitExtensions.Runner.<>c__DisplayClass3_1 <>8__1
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1* $$8__1;
    // Field size check
    static_assert(sizeof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1*) == 0x8);
    // private UnityEngine.TestTools.Logging.LogScope <logScope>5__2
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::TestTools::Logging::LogScope* $logScope$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Logging::LogScope*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap2
    // Size: 0x8
    // Offset: 0x50
    System::Collections::IEnumerator* $$7__wrap2;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // Creating value type constructor for type: $ExecuteEnumerable$d__3
    $ExecuteEnumerable$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, int $$l__initialThreadId_ = {}, NUnit::Framework::Internal::ITestExecutionContext* context_ = {}, NUnit::Framework::Internal::ITestExecutionContext* $$3__context_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand* $$4__this_ = {}, UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1* $$8__1_ = {}, UnityEngine::TestTools::Logging::LogScope* $logScope$5__2_ = {}, System::Collections::IEnumerator* $$7__wrap2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, context{context_}, $$3__context{$$3__context_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $logScope$5__2{$logScope$5__2_}, $$7__wrap2{$$7__wrap2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: private NUnit.Framework.Internal.ITestExecutionContext context
    NUnit::Framework::Internal::ITestExecutionContext*& dyn_context();
    // Get instance field reference: public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    NUnit::Framework::Internal::ITestExecutionContext*& dyn_$$3__context();
    // Get instance field reference: public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand <>4__this
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/UnityEngine.TestRunner.NUnitExtensions.Runner.<>c__DisplayClass3_1 <>8__1
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass3_1*& dyn_$$8__1();
    // Get instance field reference: private UnityEngine.TestTools.Logging.LogScope <logScope>5__2
    UnityEngine::TestTools::Logging::LogScope*& dyn_$logScope$5__2();
    // Get instance field reference: private System.Collections.IEnumerator <>7__wrap2
    System::Collections::IEnumerator*& dyn_$$7__wrap2();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14C0AA8
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14C0B10
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14BF9D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14C0180
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14C039C
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x14C02DC
    void $$m__Finally1();
    // private System.Void <>m__Finally2()
    // Offset: 0x14C0210
    void $$m__Finally2();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14C0AB0
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x14C0B18
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x14C0BCC
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/UnityEngine.TestRunner.NUnitExtensions.Runner.<ExecuteEnumerable>d__3
  #pragma pack(pop)
  static check_size<sizeof(UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3), 80 + sizeof(System::Collections::IEnumerator*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_UnityLogCheckDelegatingCommand_$ExecuteEnumerable$d__3SizeCheck;
  static_assert(sizeof(UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityLogCheckDelegatingCommand/<ExecuteEnumerable>d__3");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::$$m__Finally2
// Il2CppName: <>m__Finally2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::$$m__Finally2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "<>m__Finally2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_Generic_IEnumerable$System_Object$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$ExecuteEnumerable$d__3*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
