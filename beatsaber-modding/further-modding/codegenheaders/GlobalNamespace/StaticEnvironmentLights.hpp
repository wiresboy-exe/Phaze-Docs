// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StaticEnvironmentLights
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticEnvironmentLights : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Color[] _lightColors
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::Color>* lightColors;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Color>*) == 0x8);
    // private UnityEngine.Material[] _materials
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::Material*>* materials;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Material*>*) == 0x8);
    // Creating value type constructor for type: StaticEnvironmentLights
    StaticEnvironmentLights(::Array<UnityEngine::Color>* lightColors_ = {}, ::Array<UnityEngine::Material*>* materials_ = {}) noexcept : lightColors{lightColors_}, materials{materials_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Color[] _lightColors
    ::Array<UnityEngine::Color>*& dyn__lightColors();
    // Get instance field reference: private UnityEngine.Material[] _materials
    ::Array<UnityEngine::Material*>*& dyn__materials();
    // protected System.Void Awake()
    // Offset: 0x1069FB4
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x106A05C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticEnvironmentLights* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StaticEnvironmentLights::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticEnvironmentLights*, creationType>()));
    }
  }; // StaticEnvironmentLights
  #pragma pack(pop)
  static check_size<sizeof(StaticEnvironmentLights), 32 + sizeof(::Array<UnityEngine::Material*>*)> __GlobalNamespace_StaticEnvironmentLightsSizeCheck;
  static_assert(sizeof(StaticEnvironmentLights) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StaticEnvironmentLights*, "", "StaticEnvironmentLights");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticEnvironmentLights::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticEnvironmentLights::*)()>(&GlobalNamespace::StaticEnvironmentLights::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticEnvironmentLights*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticEnvironmentLights::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!