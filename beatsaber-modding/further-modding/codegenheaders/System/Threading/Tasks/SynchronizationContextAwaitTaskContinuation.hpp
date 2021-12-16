// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.AwaitTaskContinuation
#include "System/Threading/Tasks/AwaitTaskContinuation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
  // [TokenAttribute] Offset: FFFFFFFF
  class SynchronizationContextAwaitTaskContinuation : public System::Threading::Tasks::AwaitTaskContinuation {
    public:
    // Nested type: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::$$c
    class $$c;
    // private readonly System.Threading.SynchronizationContext m_syncContext
    // Size: 0x8
    // Offset: 0x20
    System::Threading::SynchronizationContext* m_syncContext;
    // Field size check
    static_assert(sizeof(System::Threading::SynchronizationContext*) == 0x8);
    // Creating value type constructor for type: SynchronizationContextAwaitTaskContinuation
    SynchronizationContextAwaitTaskContinuation(System::Threading::SynchronizationContext* m_syncContext_ = {}) noexcept : m_syncContext{m_syncContext_} {}
    // Creating conversion operator: operator System::Threading::SynchronizationContext*
    constexpr operator System::Threading::SynchronizationContext*() const noexcept {
      return m_syncContext;
    }
    // Get static field: static private readonly System.Threading.SendOrPostCallback s_postCallback
    static System::Threading::SendOrPostCallback* _get_s_postCallback();
    // Set static field: static private readonly System.Threading.SendOrPostCallback s_postCallback
    static void _set_s_postCallback(System::Threading::SendOrPostCallback* value);
    // Get static field: static private System.Threading.ContextCallback s_postActionCallback
    static System::Threading::ContextCallback* _get_s_postActionCallback();
    // Set static field: static private System.Threading.ContextCallback s_postActionCallback
    static void _set_s_postActionCallback(System::Threading::ContextCallback* value);
    // Get instance field reference: private readonly System.Threading.SynchronizationContext m_syncContext
    System::Threading::SynchronizationContext*& dyn_m_syncContext();
    // System.Void .ctor(System.Threading.SynchronizationContext context, System.Action action, System.Boolean flowExecutionContext, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x1905EC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizationContextAwaitTaskContinuation* New_ctor(System::Threading::SynchronizationContext* context, System::Action* action, bool flowExecutionContext, ByRef<System::Threading::StackCrawlMark> stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizationContextAwaitTaskContinuation*, creationType>(context, action, flowExecutionContext, byref(stackMark))));
    }
    // static private System.Void .cctor()
    // Offset: 0x1906270
    static void _cctor();
    // static private System.Void PostAction(System.Object state)
    // Offset: 0x1906104
    static void PostAction(::Il2CppObject* state);
    // static private System.Threading.ContextCallback GetPostActionCallback()
    // Offset: 0x19061B0
    static System::Threading::ContextCallback* GetPostActionCallback();
    // override System.Void Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    // Offset: 0x1905EFC
    // Implemented from: System.Threading.Tasks.AwaitTaskContinuation
    // Base method: System.Void AwaitTaskContinuation::Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* task, bool canInlineContinuationTask);
  }; // System.Threading.Tasks.SynchronizationContextAwaitTaskContinuation
  #pragma pack(pop)
  static check_size<sizeof(SynchronizationContextAwaitTaskContinuation), 32 + sizeof(System::Threading::SynchronizationContext*)> __System_Threading_Tasks_SynchronizationContextAwaitTaskContinuationSizeCheck;
  static_assert(sizeof(SynchronizationContextAwaitTaskContinuation) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::PostAction
// Il2CppName: PostAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::PostAction)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*), "PostAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetPostActionCallback
// Il2CppName: GetPostActionCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::ContextCallback* (*)()>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::GetPostActionCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*), "GetPostActionCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::Run
// Il2CppName: Run
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::*)(System::Threading::Tasks::Task*, bool)>(&System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation::Run)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* canInlineContinuationTask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::SynchronizationContextAwaitTaskContinuation*), "Run", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, canInlineContinuationTask});
  }
};