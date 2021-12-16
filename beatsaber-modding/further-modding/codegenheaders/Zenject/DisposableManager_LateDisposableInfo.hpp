// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ILateDisposable
  class ILateDisposable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DisposableManager/Zenject.LateDisposableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DisposableManager::LateDisposableInfo : public ::Il2CppObject {
    public:
    // public Zenject.ILateDisposable LateDisposable
    // Size: 0x8
    // Offset: 0x10
    Zenject::ILateDisposable* LateDisposable;
    // Field size check
    static_assert(sizeof(Zenject::ILateDisposable*) == 0x8);
    // public System.Int32 Priority
    // Size: 0x4
    // Offset: 0x18
    int Priority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LateDisposableInfo
    LateDisposableInfo(Zenject::ILateDisposable* LateDisposable_ = {}, int Priority_ = {}) noexcept : LateDisposable{LateDisposable_}, Priority{Priority_} {}
    // Get instance field reference: public Zenject.ILateDisposable LateDisposable
    Zenject::ILateDisposable*& dyn_LateDisposable();
    // Get instance field reference: public System.Int32 Priority
    int& dyn_Priority();
    // public System.Void .ctor(Zenject.ILateDisposable lateDisposable, System.Int32 priority)
    // Offset: 0x165CED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisposableManager::LateDisposableInfo* New_ctor(Zenject::ILateDisposable* lateDisposable, int priority) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DisposableManager::LateDisposableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisposableManager::LateDisposableInfo*, creationType>(lateDisposable, priority)));
    }
  }; // Zenject.DisposableManager/Zenject.LateDisposableInfo
  #pragma pack(pop)
  static check_size<sizeof(DisposableManager::LateDisposableInfo), 24 + sizeof(int)> __Zenject_DisposableManager_LateDisposableInfoSizeCheck;
  static_assert(sizeof(DisposableManager::LateDisposableInfo) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::LateDisposableInfo*, "Zenject", "DisposableManager/LateDisposableInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DisposableManager::LateDisposableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
