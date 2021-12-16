// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.HandleConstraint2D
  // [TokenAttribute] Offset: FFFFFFFF
  class HandleConstraint2D : public ::Il2CppObject {
    public:
    // public System.Int32 x
    // Size: 0x4
    // Offset: 0x10
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 y
    // Size: 0x4
    // Offset: 0x14
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HandleConstraint2D
    HandleConstraint2D(int x_ = {}, int y_ = {}) noexcept : x{x_}, y{y_} {}
    // Get static field: static public readonly UnityEngine.ProBuilder.HandleConstraint2D None
    static UnityEngine::ProBuilder::HandleConstraint2D* _get_None();
    // Set static field: static public readonly UnityEngine.ProBuilder.HandleConstraint2D None
    static void _set_None(UnityEngine::ProBuilder::HandleConstraint2D* value);
    // Get instance field reference: public System.Int32 x
    int& dyn_x();
    // Get instance field reference: public System.Int32 y
    int& dyn_y();
    // public System.Void .ctor(System.Int32 x, System.Int32 y)
    // Offset: 0x1AF345C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandleConstraint2D* New_ctor(int x, int y) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::HandleConstraint2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandleConstraint2D*, creationType>(x, y)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AF3828
    static void _cctor();
    // public UnityEngine.ProBuilder.HandleConstraint2D Inverse()
    // Offset: 0x1AF3494
    UnityEngine::ProBuilder::HandleConstraint2D* Inverse();
    // public UnityEngine.Vector2 Mask(UnityEngine.Vector2 v)
    // Offset: 0x1AF3514
    UnityEngine::Vector2 Mask(UnityEngine::Vector2 v);
    // public UnityEngine.Vector2 InverseMask(UnityEngine.Vector2 v)
    // Offset: 0x1AF352C
    UnityEngine::Vector2 InverseMask(UnityEngine::Vector2 v);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1AF35DC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x1AF35E4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.String ToString()
    // Offset: 0x1AF3674
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.HandleConstraint2D
  #pragma pack(pop)
  static check_size<sizeof(HandleConstraint2D), 20 + sizeof(int)> __UnityEngine_ProBuilder_HandleConstraint2DSizeCheck;
  static_assert(sizeof(HandleConstraint2D) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.ProBuilder.HandleConstraint2D a, UnityEngine.ProBuilder.HandleConstraint2D b)
  // Offset: 0x1AF3554
  bool operator ==(UnityEngine::ProBuilder::HandleConstraint2D* a, UnityEngine::ProBuilder::HandleConstraint2D& b);
  // static public System.Boolean op_Inequality(UnityEngine.ProBuilder.HandleConstraint2D a, UnityEngine.ProBuilder.HandleConstraint2D b)
  // Offset: 0x1AF3598
  bool operator !=(UnityEngine::ProBuilder::HandleConstraint2D* a, UnityEngine::ProBuilder::HandleConstraint2D& b);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleConstraint2D*, "UnityEngine.ProBuilder", "HandleConstraint2D");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::HandleConstraint2D::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleConstraint2D*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::HandleConstraint2D* (UnityEngine::ProBuilder::HandleConstraint2D::*)()>(&UnityEngine::ProBuilder::HandleConstraint2D::Inverse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleConstraint2D*), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::Mask
// Il2CppName: Mask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::ProBuilder::HandleConstraint2D::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::HandleConstraint2D::Mask)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleConstraint2D*), "Mask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::InverseMask
// Il2CppName: InverseMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (UnityEngine::ProBuilder::HandleConstraint2D::*)(UnityEngine::Vector2)>(&UnityEngine::ProBuilder::HandleConstraint2D::InverseMask)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleConstraint2D*), "InverseMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::HandleConstraint2D::*)()>(&UnityEngine::ProBuilder::HandleConstraint2D::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleConstraint2D*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::HandleConstraint2D::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::HandleConstraint2D::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleConstraint2D*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::ProBuilder::HandleConstraint2D::*)()>(&UnityEngine::ProBuilder::HandleConstraint2D::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::HandleConstraint2D*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::HandleConstraint2D::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
