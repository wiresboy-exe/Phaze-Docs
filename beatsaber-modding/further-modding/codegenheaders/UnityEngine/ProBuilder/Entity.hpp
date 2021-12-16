// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ProBuilder.EntityType
#include "UnityEngine/ProBuilder/EntityType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Entity
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E5B3C0
  class Entity : public UnityEngine::MonoBehaviour {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xE5BEDC
    // private UnityEngine.ProBuilder.EntityType m_EntityType
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::ProBuilder::EntityType m_EntityType;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::EntityType) == 0x4);
    // Creating value type constructor for type: Entity
    Entity(UnityEngine::ProBuilder::EntityType m_EntityType_ = {}) noexcept : m_EntityType{m_EntityType_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ProBuilder.EntityType m_EntityType
    UnityEngine::ProBuilder::EntityType& dyn_m_EntityType();
    // public UnityEngine.ProBuilder.EntityType get_entityType()
    // Offset: 0x1AF0FAC
    UnityEngine::ProBuilder::EntityType get_entityType();
    // public System.Void Awake()
    // Offset: 0x1AF0FB4
    void Awake();
    // public System.Void SetEntity(UnityEngine.ProBuilder.EntityType t)
    // Offset: 0x1AF1074
    void SetEntity(UnityEngine::ProBuilder::EntityType t);
    // public System.Void .ctor()
    // Offset: 0x1AF107C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Entity* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Entity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Entity*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Entity
  #pragma pack(pop)
  static check_size<sizeof(Entity), 24 + sizeof(UnityEngine::ProBuilder::EntityType)> __UnityEngine_ProBuilder_EntitySizeCheck;
  static_assert(sizeof(Entity) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Entity*, "UnityEngine.ProBuilder", "Entity");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Entity::get_entityType
// Il2CppName: get_entityType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::EntityType (UnityEngine::ProBuilder::Entity::*)()>(&UnityEngine::ProBuilder::Entity::get_entityType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Entity*), "get_entityType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Entity::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Entity::*)()>(&UnityEngine::ProBuilder::Entity::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Entity*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Entity::SetEntity
// Il2CppName: SetEntity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Entity::*)(UnityEngine::ProBuilder::EntityType)>(&UnityEngine::ProBuilder::Entity::SetEntity)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EntityType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Entity*), "SetEntity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Entity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
