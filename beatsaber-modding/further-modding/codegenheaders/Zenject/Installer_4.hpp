// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InstallerBase
#include "Zenject/InstallerBase.hpp"
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
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.Installer`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TDerived>
  class Installer_4 : public Zenject::InstallerBase {
    public:
    // Creating value type constructor for type: Installer_4
    Installer_4() noexcept {}
    // static public System.Void Install(Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3)
    // Offset: 0xFFFFFFFF
    static void Install(Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Installer_4::Install");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Installer_4<TParam1, TParam2, TParam3, TDerived>*>::get(), "Install", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container), ::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, container, p1, p2, p3);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Installer_4<TParam1, TParam2, TParam3, TDerived>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Installer_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Installer_4<TParam1, TParam2, TParam3, TDerived>*, creationType>()));
    }
  }; // Zenject.Installer`4
  // Could not write size check! Type: Zenject.Installer`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Installer_4, "Zenject", "Installer`4");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
