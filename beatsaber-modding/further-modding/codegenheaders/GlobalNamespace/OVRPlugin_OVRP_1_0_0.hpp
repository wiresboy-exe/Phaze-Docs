// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_0_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_0_0 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRP_1_0_0
    OVRP_1_0_0() noexcept {}
    // Get static field: static public readonly System.Version version
    static System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x16321BC
    static void _cctor();
    // static public OVRPlugin/TrackingOrigin ovrp_GetTrackingOriginType()
    // Offset: 0x1631FD0
    static GlobalNamespace::OVRPlugin::TrackingOrigin ovrp_GetTrackingOriginType();
    // static public OVRPlugin/Bool ovrp_SetTrackingOriginType(OVRPlugin/TrackingOrigin originType)
    // Offset: 0x1632044
    static GlobalNamespace::OVRPlugin::Bool ovrp_SetTrackingOriginType(GlobalNamespace::OVRPlugin::TrackingOrigin originType);
    // static public OVRPlugin/Posef ovrp_GetTrackingCalibratedOrigin()
    // Offset: 0x16320C4
    static GlobalNamespace::OVRPlugin::Posef ovrp_GetTrackingCalibratedOrigin();
    // static public OVRPlugin/Bool ovrp_RecenterTrackingOrigin(System.UInt32 flags)
    // Offset: 0x163213C
    static GlobalNamespace::OVRPlugin::Bool ovrp_RecenterTrackingOrigin(uint flags);
  }; // OVRPlugin/OVRP_1_0_0
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::OVRP_1_0_0*, "", "OVRPlugin/OVRP_1_0_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_0_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_0_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_GetTrackingOriginType
// Il2CppName: ovrp_GetTrackingOriginType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::TrackingOrigin (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_GetTrackingOriginType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_0_0*), "ovrp_GetTrackingOriginType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_SetTrackingOriginType
// Il2CppName: ovrp_SetTrackingOriginType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(GlobalNamespace::OVRPlugin::TrackingOrigin)>(&GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_SetTrackingOriginType)> {
  static const MethodInfo* get() {
    static auto* originType = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/TrackingOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_0_0*), "ovrp_SetTrackingOriginType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_GetTrackingCalibratedOrigin
// Il2CppName: ovrp_GetTrackingCalibratedOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Posef (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_GetTrackingCalibratedOrigin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_0_0*), "ovrp_GetTrackingCalibratedOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_RecenterTrackingOrigin
// Il2CppName: ovrp_RecenterTrackingOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Bool (*)(uint)>(&GlobalNamespace::OVRPlugin::OVRP_1_0_0::ovrp_RecenterTrackingOrigin)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_0_0*), "ovrp_RecenterTrackingOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};