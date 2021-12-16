// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference
  class WeakReference;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: AutoResetEvent
  class AutoResetEvent;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerThread : public ::Il2CppObject {
    public:
    // Nested type: System::Net::TimerThread::Queue
    class Queue;
    // Nested type: System::Net::TimerThread::Timer
    class Timer;
    // Nested type: System::Net::TimerThread::Callback
    class Callback;
    // Nested type: System::Net::TimerThread::TimerQueue
    class TimerQueue;
    // Nested type: System::Net::TimerThread::InfiniteTimerQueue
    class InfiniteTimerQueue;
    // Nested type: System::Net::TimerThread::TimerNode
    class TimerNode;
    // Creating value type constructor for type: TimerThread
    TimerThread() noexcept {}
    // Get static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_Queues
    static System::Collections::Generic::LinkedList_1<System::WeakReference*>* _get_s_Queues();
    // Set static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_Queues
    static void _set_s_Queues(System::Collections::Generic::LinkedList_1<System::WeakReference*>* value);
    // Get static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_NewQueues
    static System::Collections::Generic::LinkedList_1<System::WeakReference*>* _get_s_NewQueues();
    // Set static field: static private System.Collections.Generic.LinkedList`1<System.WeakReference> s_NewQueues
    static void _set_s_NewQueues(System::Collections::Generic::LinkedList_1<System::WeakReference*>* value);
    // Get static field: static private System.Int32 s_ThreadState
    static int _get_s_ThreadState();
    // Set static field: static private System.Int32 s_ThreadState
    static void _set_s_ThreadState(int value);
    // Get static field: static private System.Threading.AutoResetEvent s_ThreadReadyEvent
    static System::Threading::AutoResetEvent* _get_s_ThreadReadyEvent();
    // Set static field: static private System.Threading.AutoResetEvent s_ThreadReadyEvent
    static void _set_s_ThreadReadyEvent(System::Threading::AutoResetEvent* value);
    // Get static field: static private System.Threading.ManualResetEvent s_ThreadShutdownEvent
    static System::Threading::ManualResetEvent* _get_s_ThreadShutdownEvent();
    // Set static field: static private System.Threading.ManualResetEvent s_ThreadShutdownEvent
    static void _set_s_ThreadShutdownEvent(System::Threading::ManualResetEvent* value);
    // Get static field: static private System.Threading.WaitHandle[] s_ThreadEvents
    static ::Array<System::Threading::WaitHandle*>* _get_s_ThreadEvents();
    // Set static field: static private System.Threading.WaitHandle[] s_ThreadEvents
    static void _set_s_ThreadEvents(::Array<System::Threading::WaitHandle*>* value);
    // Get static field: static private System.Collections.Hashtable s_QueuesCache
    static System::Collections::Hashtable* _get_s_QueuesCache();
    // Set static field: static private System.Collections.Hashtable s_QueuesCache
    static void _set_s_QueuesCache(System::Collections::Hashtable* value);
    // static private System.Void .cctor()
    // Offset: 0x15D284C
    static void _cctor();
    // static System.Net.TimerThread/System.Net.Queue CreateQueue(System.Int32 durationMilliseconds)
    // Offset: 0x15D2A64
    static System::Net::TimerThread::Queue* CreateQueue(int durationMilliseconds);
    // static private System.Void StopTimerThread()
    // Offset: 0x15D2D10
    static void StopTimerThread();
    // static private System.Void OnDomainUnload(System.Object sender, System.EventArgs e)
    // Offset: 0x15D2D9C
    static void OnDomainUnload(::Il2CppObject* sender, System::EventArgs* e);
  }; // System.Net.TimerThread
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::TimerThread*, "System.Net", "TimerThread");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TimerThread::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::TimerThread::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::CreateQueue
// Il2CppName: CreateQueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::TimerThread::Queue* (*)(int)>(&System::Net::TimerThread::CreateQueue)> {
  static const MethodInfo* get() {
    static auto* durationMilliseconds = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread*), "CreateQueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{durationMilliseconds});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::StopTimerThread
// Il2CppName: StopTimerThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::TimerThread::StopTimerThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread*), "StopTimerThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::OnDomainUnload
// Il2CppName: OnDomainUnload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, System::EventArgs*)>(&System::Net::TimerThread::OnDomainUnload)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "EventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread*), "OnDomainUnload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
