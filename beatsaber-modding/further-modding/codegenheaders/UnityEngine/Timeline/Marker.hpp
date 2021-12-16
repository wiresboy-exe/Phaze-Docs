// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Timeline.IMarker
#include "UnityEngine/Timeline/IMarker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.Marker
  // [TokenAttribute] Offset: FFFFFFFF
  class Marker : public UnityEngine::ScriptableObject/*, public UnityEngine::Timeline::IMarker*/ {
    public:
    // [TimeFieldAttribute] Offset: 0xDFCF84
    // [TooltipAttribute] Offset: 0xDFCF84
    // private System.Double m_Time
    // Size: 0x8
    // Offset: 0x18
    double m_Time;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private UnityEngine.Timeline.TrackAsset <parent>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Timeline::TrackAsset* parent;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TrackAsset*) == 0x8);
    // Creating value type constructor for type: Marker
    Marker(double m_Time_ = {}, UnityEngine::Timeline::TrackAsset* parent_ = {}) noexcept : m_Time{m_Time_}, parent{parent_} {}
    // Creating interface conversion operator: operator UnityEngine::Timeline::IMarker
    operator UnityEngine::Timeline::IMarker() noexcept {
      return *reinterpret_cast<UnityEngine::Timeline::IMarker*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Double m_Time
    double& dyn_m_Time();
    // Get instance field reference: private UnityEngine.Timeline.TrackAsset <parent>k__BackingField
    UnityEngine::Timeline::TrackAsset*& dyn_$parent$k__BackingField();
    // public UnityEngine.Timeline.TrackAsset get_parent()
    // Offset: 0x18284E0
    UnityEngine::Timeline::TrackAsset* get_parent();
    // private System.Void set_parent(UnityEngine.Timeline.TrackAsset value)
    // Offset: 0x18284E8
    void set_parent(UnityEngine::Timeline::TrackAsset* value);
    // public System.Double get_time()
    // Offset: 0x18284F0
    double get_time();
    // public System.Void set_time(System.Double value)
    // Offset: 0x18284F8
    void set_time(double value);
    // private System.Void UnityEngine.Timeline.IMarker.Initialize(UnityEngine.Timeline.TrackAsset parentTrack)
    // Offset: 0x1828578
    void UnityEngine_Timeline_IMarker_Initialize(UnityEngine::Timeline::TrackAsset* parentTrack);
    // public System.Void OnInitialize(UnityEngine.Timeline.TrackAsset aPent)
    // Offset: 0x18286DC
    void OnInitialize(UnityEngine::Timeline::TrackAsset* aPent);
    // protected System.Void .ctor()
    // Offset: 0x18286E0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Marker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::Marker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Marker*, creationType>()));
    }
  }; // UnityEngine.Timeline.Marker
  #pragma pack(pop)
  static check_size<sizeof(Marker), 32 + sizeof(UnityEngine::Timeline::TrackAsset*)> __UnityEngine_Timeline_MarkerSizeCheck;
  static_assert(sizeof(Marker) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::Marker*, "UnityEngine.Timeline", "Marker");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::Marker::get_parent
// Il2CppName: get_parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset* (UnityEngine::Timeline::Marker::*)()>(&UnityEngine::Timeline::Marker::get_parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Marker*), "get_parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Marker::set_parent
// Il2CppName: set_parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::Marker::*)(UnityEngine::Timeline::TrackAsset*)>(&UnityEngine::Timeline::Marker::set_parent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Marker*), "set_parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Marker::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::Marker::*)()>(&UnityEngine::Timeline::Marker::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Marker*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Marker::set_time
// Il2CppName: set_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::Marker::*)(double)>(&UnityEngine::Timeline::Marker::set_time)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Marker*), "set_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Marker::UnityEngine_Timeline_IMarker_Initialize
// Il2CppName: UnityEngine.Timeline.IMarker.Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::Marker::*)(UnityEngine::Timeline::TrackAsset*)>(&UnityEngine::Timeline::Marker::UnityEngine_Timeline_IMarker_Initialize)> {
  static const MethodInfo* get() {
    static auto* parentTrack = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Marker*), "UnityEngine.Timeline.IMarker.Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentTrack});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Marker::OnInitialize
// Il2CppName: OnInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::Marker::*)(UnityEngine::Timeline::TrackAsset*)>(&UnityEngine::Timeline::Marker::OnInitialize)> {
  static const MethodInfo* get() {
    static auto* aPent = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TrackAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::Marker*), "OnInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aPent});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::Marker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!