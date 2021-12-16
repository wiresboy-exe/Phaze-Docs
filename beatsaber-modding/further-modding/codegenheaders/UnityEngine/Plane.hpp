// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Plane
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DB375C
  struct Plane/*, public System::ValueType*/ {
    public:
    // private UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single m_Distance
    // Size: 0x4
    // Offset: 0xC
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Plane
    constexpr Plane(UnityEngine::Vector3 m_Normal_ = {}, float m_Distance_ = {}) noexcept : m_Normal{m_Normal_}, m_Distance{m_Distance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static field const value: static System.Int32 size
    static constexpr const int size = 16;
    // Get static field: static System.Int32 size
    static int _get_size();
    // Set static field: static System.Int32 size
    static void _set_size(int value);
    // Get instance field reference: private UnityEngine.Vector3 m_Normal
    UnityEngine::Vector3& dyn_m_Normal();
    // Get instance field reference: private System.Single m_Distance
    float& dyn_m_Distance();
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0x1D0B010
    UnityEngine::Vector3 get_normal();
    // public System.Void .ctor(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0x1D0B01C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Plane(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Plane::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(inNormal), ::il2cpp_utils::ExtractType(inPoint)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, inNormal, inPoint);
    }
    // public System.Void .ctor(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c)
    // Offset: 0x1D0B0E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    Plane(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3 c) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Plane::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a), ::il2cpp_utils::ExtractType(b), ::il2cpp_utils::ExtractType(c)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, a, b, c);
    }
    // public System.Void SetNormalAndPosition(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0x1D0B22C
    void SetNormalAndPosition(UnityEngine::Vector3 inNormal, UnityEngine::Vector3 inPoint);
    // public UnityEngine.Vector3 ClosestPointOnPlane(UnityEngine.Vector3 point)
    // Offset: 0x1D0B300
    UnityEngine::Vector3 ClosestPointOnPlane(UnityEngine::Vector3 point);
    // public System.Single GetDistanceToPoint(UnityEngine.Vector3 point)
    // Offset: 0x1D0B3E0
    float GetDistanceToPoint(UnityEngine::Vector3 point);
    // public System.Boolean SameSide(UnityEngine.Vector3 inPt0, UnityEngine.Vector3 inPt1)
    // Offset: 0x1D0B494
    bool SameSide(UnityEngine::Vector3 inPt0, UnityEngine::Vector3 inPt1);
    // public System.Boolean Raycast(UnityEngine.Ray ray, out System.Single enter)
    // Offset: 0x1D0B518
    bool Raycast(UnityEngine::Ray ray, ByRef<float> enter);
    // public override System.String ToString()
    // Offset: 0x1D0B65C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Plane
  #pragma pack(pop)
  static check_size<sizeof(Plane), 12 + sizeof(float)> __UnityEngine_PlaneSizeCheck;
  static_assert(sizeof(Plane) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Plane, "UnityEngine", "Plane");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Plane::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Plane::*)()>(&UnityEngine::Plane::get_normal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::Plane
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Plane::Plane
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Plane::SetNormalAndPosition
// Il2CppName: SetNormalAndPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Plane::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Plane::SetNormalAndPosition)> {
  static const MethodInfo* get() {
    static auto* inNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* inPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "SetNormalAndPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inNormal, inPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::ClosestPointOnPlane
// Il2CppName: ClosestPointOnPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::Plane::*)(UnityEngine::Vector3)>(&UnityEngine::Plane::ClosestPointOnPlane)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "ClosestPointOnPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::GetDistanceToPoint
// Il2CppName: GetDistanceToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Plane::*)(UnityEngine::Vector3)>(&UnityEngine::Plane::GetDistanceToPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "GetDistanceToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::SameSide
// Il2CppName: SameSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Plane::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&UnityEngine::Plane::SameSide)> {
  static const MethodInfo* get() {
    static auto* inPt0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* inPt1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "SameSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inPt0, inPt1});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Plane::*)(UnityEngine::Ray, ByRef<float>)>(&UnityEngine::Plane::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* enter = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, enter});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Plane::*)()>(&UnityEngine::Plane::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
