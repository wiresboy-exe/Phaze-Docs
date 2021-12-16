// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionSystem
#include "RootMotion/FinalIK/InteractionSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: RootMotion.FinalIK.InteractionObject
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionSystem/RootMotion.FinalIK.InteractionEventDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionSystem::InteractionEventDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: InteractionEventDelegate
    InteractionEventDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E94698
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionSystem::InteractionEventDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionSystem::InteractionEventDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.InteractionEvent interactionEvent)
    // Offset: 0x1E8EF14
    void Invoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, RootMotion::FinalIK::InteractionObject::InteractionEvent* interactionEvent);
    // public System.IAsyncResult BeginInvoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, RootMotion.FinalIK.InteractionObject/RootMotion.FinalIK.InteractionEvent interactionEvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E946A8
    System::IAsyncResult* BeginInvoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, RootMotion::FinalIK::InteractionObject::InteractionEvent* interactionEvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E94748
    void EndInvoke(System::IAsyncResult* result);
  }; // RootMotion.FinalIK.InteractionSystem/RootMotion.FinalIK.InteractionEventDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate*, "RootMotion.FinalIK", "InteractionSystem/InteractionEventDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::*)(RootMotion::FinalIK::FullBodyBipedEffector, RootMotion::FinalIK::InteractionObject*, RootMotion::FinalIK::InteractionObject::InteractionEvent*)>(&RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* effectorType = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FullBodyBipedEffector")->byval_arg;
    static auto* interactionObject = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject")->byval_arg;
    static auto* interactionEvent = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject/InteractionEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effectorType, interactionObject, interactionEvent});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::*)(RootMotion::FinalIK::FullBodyBipedEffector, RootMotion::FinalIK::InteractionObject*, RootMotion::FinalIK::InteractionObject::InteractionEvent*, System::AsyncCallback*, ::Il2CppObject*)>(&RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* effectorType = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FullBodyBipedEffector")->byval_arg;
    static auto* interactionObject = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject")->byval_arg;
    static auto* interactionEvent = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject/InteractionEvent")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effectorType, interactionObject, interactionEvent, callback, object});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::*)(System::IAsyncResult*)>(&RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
