// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.SubContainerBinder
#include "Zenject/SubContainerBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerBinder/Zenject.<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SubContainerBinder::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public Zenject.DiContainer subContainer
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* subContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass7_0
    $$c__DisplayClass7_0(Zenject::DiContainer* subContainer_ = {}) noexcept : subContainer{subContainer_} {}
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return subContainer;
    }
    // Get instance field reference: public Zenject.DiContainer subContainer
    Zenject::DiContainer*& dyn_subContainer();
    // Zenject.ISubContainerCreator <ByInstance>b__0(Zenject.DiContainer _)
    // Offset: 0x17261FC
    Zenject::ISubContainerCreator* $ByInstance$b__0(Zenject::DiContainer* _);
    // public System.Void .ctor()
    // Offset: 0x17247F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerBinder::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerBinder::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerBinder::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // Zenject.SubContainerBinder/Zenject.<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(SubContainerBinder::$$c__DisplayClass7_0), 16 + sizeof(Zenject::DiContainer*)> __Zenject_SubContainerBinder_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(SubContainerBinder::$$c__DisplayClass7_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass7_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass7_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass7_0::$ByInstance$b__0
// Il2CppName: <ByInstance>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::ISubContainerCreator* (Zenject::SubContainerBinder::$$c__DisplayClass7_0::*)(Zenject::DiContainer*)>(&Zenject::SubContainerBinder::$$c__DisplayClass7_0::$ByInstance$b__0)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SubContainerBinder::$$c__DisplayClass7_0*), "<ByInstance>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: Zenject::SubContainerBinder::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
