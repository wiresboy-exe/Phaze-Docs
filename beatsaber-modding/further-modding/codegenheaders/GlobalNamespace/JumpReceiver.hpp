// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Playables.INotificationReceiver
#include "UnityEngine/Playables/INotificationReceiver.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: INotification
  class INotification;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: JumpReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  class JumpReceiver : public UnityEngine::MonoBehaviour/*, public UnityEngine::Playables::INotificationReceiver*/ {
    public:
    // private System.Boolean <jumpToDestinationValid>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool jumpToDestinationValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: JumpReceiver
    JumpReceiver(bool jumpToDestinationValid_ = {}) noexcept : jumpToDestinationValid{jumpToDestinationValid_} {}
    // Creating interface conversion operator: operator UnityEngine::Playables::INotificationReceiver
    operator UnityEngine::Playables::INotificationReceiver() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::INotificationReceiver*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean <jumpToDestinationValid>k__BackingField
    bool& dyn_$jumpToDestinationValid$k__BackingField();
    // public System.Boolean get_jumpToDestinationValid()
    // Offset: 0x1269FC4
    bool get_jumpToDestinationValid();
    // public System.Void set_jumpToDestinationValid(System.Boolean value)
    // Offset: 0x1269FCC
    void set_jumpToDestinationValid(bool value);
    // public System.Void OnNotify(UnityEngine.Playables.Playable origin, UnityEngine.Playables.INotification notification, System.Object context)
    // Offset: 0x1269FD8
    void OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::Il2CppObject* context);
    // public System.Void .ctor()
    // Offset: 0x126A10C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JumpReceiver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::JumpReceiver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JumpReceiver*, creationType>()));
    }
  }; // JumpReceiver
  #pragma pack(pop)
  static check_size<sizeof(JumpReceiver), 24 + sizeof(bool)> __GlobalNamespace_JumpReceiverSizeCheck;
  static_assert(sizeof(JumpReceiver) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JumpReceiver*, "", "JumpReceiver");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::JumpReceiver::get_jumpToDestinationValid
// Il2CppName: get_jumpToDestinationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::JumpReceiver::*)()>(&GlobalNamespace::JumpReceiver::get_jumpToDestinationValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JumpReceiver*), "get_jumpToDestinationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JumpReceiver::set_jumpToDestinationValid
// Il2CppName: set_jumpToDestinationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JumpReceiver::*)(bool)>(&GlobalNamespace::JumpReceiver::set_jumpToDestinationValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JumpReceiver*), "set_jumpToDestinationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JumpReceiver::OnNotify
// Il2CppName: OnNotify
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JumpReceiver::*)(UnityEngine::Playables::Playable, UnityEngine::Playables::INotification*, ::Il2CppObject*)>(&GlobalNamespace::JumpReceiver::OnNotify)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* notification = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "INotification")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JumpReceiver*), "OnNotify", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, notification, context});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JumpReceiver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!