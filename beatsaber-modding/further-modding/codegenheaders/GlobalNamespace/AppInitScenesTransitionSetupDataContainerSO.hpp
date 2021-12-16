// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AppInitScenesTransitionSetupDataSO
  class AppInitScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AppInitScenesTransitionSetupDataContainerSO
  // [TokenAttribute] Offset: FFFFFFFF
  class AppInitScenesTransitionSetupDataContainerSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public AppInitScenesTransitionSetupDataSO appInitScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AppInitScenesTransitionSetupDataSO* appInitScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: AppInitScenesTransitionSetupDataContainerSO
    AppInitScenesTransitionSetupDataContainerSO(GlobalNamespace::AppInitScenesTransitionSetupDataSO* appInitScenesTransitionSetupData_ = {}) noexcept : appInitScenesTransitionSetupData{appInitScenesTransitionSetupData_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public AppInitScenesTransitionSetupDataSO appInitScenesTransitionSetupData
    GlobalNamespace::AppInitScenesTransitionSetupDataSO*& dyn_appInitScenesTransitionSetupData();
    // public System.Void .ctor()
    // Offset: 0x1175D44
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppInitScenesTransitionSetupDataContainerSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppInitScenesTransitionSetupDataContainerSO*, creationType>()));
    }
  }; // AppInitScenesTransitionSetupDataContainerSO
  #pragma pack(pop)
  static check_size<sizeof(AppInitScenesTransitionSetupDataContainerSO), 24 + sizeof(GlobalNamespace::AppInitScenesTransitionSetupDataSO*)> __GlobalNamespace_AppInitScenesTransitionSetupDataContainerSOSizeCheck;
  static_assert(sizeof(AppInitScenesTransitionSetupDataContainerSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*, "", "AppInitScenesTransitionSetupDataContainerSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!