// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BoolSO
#include "GlobalNamespace/BoolSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BoolWithDefaultValueSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BoolWithDefaultValueSO : public GlobalNamespace::BoolSO {
    public:
    // private System.Boolean _defaultValue
    // Size: 0x1
    // Offset: 0x21
    bool defaultValue;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BoolWithDefaultValueSO
    BoolWithDefaultValueSO(bool defaultValue_ = {}) noexcept : defaultValue{defaultValue_} {}
    // Get instance field reference: private System.Boolean _defaultValue
    bool& dyn__defaultValue();
    // public System.Void .ctor()
    // Offset: 0x125C7C8
    // Implemented from: BoolSO
    // Base method: System.Void BoolSO::.ctor()
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolWithDefaultValueSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BoolWithDefaultValueSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolWithDefaultValueSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x125C728
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // BoolWithDefaultValueSO
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolWithDefaultValueSO*, "", "BoolWithDefaultValueSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BoolWithDefaultValueSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BoolWithDefaultValueSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BoolWithDefaultValueSO::*)()>(&GlobalNamespace::BoolWithDefaultValueSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BoolWithDefaultValueSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};