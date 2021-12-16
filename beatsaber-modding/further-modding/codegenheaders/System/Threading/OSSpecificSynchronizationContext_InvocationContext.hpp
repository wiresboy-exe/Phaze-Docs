// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext/System.Threading.InvocationContext
  // [TokenAttribute] Offset: FFFFFFFF
  class OSSpecificSynchronizationContext::InvocationContext : public ::Il2CppObject {
    public:
    // private System.Threading.SendOrPostCallback m_Delegate
    // Size: 0x8
    // Offset: 0x10
    System::Threading::SendOrPostCallback* m_Delegate;
    // Field size check
    static_assert(sizeof(System::Threading::SendOrPostCallback*) == 0x8);
    // private System.Object m_State
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_State;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: InvocationContext
    InvocationContext(System::Threading::SendOrPostCallback* m_Delegate_ = {}, ::Il2CppObject* m_State_ = {}) noexcept : m_Delegate{m_Delegate_}, m_State{m_State_} {}
    // Get instance field reference: private System.Threading.SendOrPostCallback m_Delegate
    System::Threading::SendOrPostCallback*& dyn_m_Delegate();
    // Get instance field reference: private System.Object m_State
    ::Il2CppObject*& dyn_m_State();
    // public System.Void .ctor(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0x190013C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSSpecificSynchronizationContext::InvocationContext* New_ctor(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::OSSpecificSynchronizationContext::InvocationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSSpecificSynchronizationContext::InvocationContext*, creationType>(d, state)));
    }
    // public System.Void Invoke()
    // Offset: 0x1900178
    void Invoke();
  }; // System.Threading.OSSpecificSynchronizationContext/System.Threading.InvocationContext
  #pragma pack(pop)
  static check_size<sizeof(OSSpecificSynchronizationContext::InvocationContext), 24 + sizeof(::Il2CppObject*)> __System_Threading_OSSpecificSynchronizationContext_InvocationContextSizeCheck;
  static_assert(sizeof(OSSpecificSynchronizationContext::InvocationContext) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::OSSpecificSynchronizationContext::InvocationContext*, "System.Threading", "OSSpecificSynchronizationContext/InvocationContext");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::InvocationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::InvocationContext::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::OSSpecificSynchronizationContext::InvocationContext::*)()>(&System::Threading::OSSpecificSynchronizationContext::InvocationContext::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext::InvocationContext*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
