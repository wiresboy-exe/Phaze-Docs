// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IReadOnlyCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [TypeDependencyAttribute] Offset: DA5AD8
  template<typename T>
  class IReadOnlyCollection_1/*, public System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Creating value type constructor for type: IReadOnlyCollection_1
    IReadOnlyCollection_1() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<T>
    operator System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IReadOnlyCollection_1::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
  }; // System.Collections.Generic.IReadOnlyCollection`1
  // Could not write size check! Type: System.Collections.Generic.IReadOnlyCollection`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IReadOnlyCollection_1, "System.Collections.Generic", "IReadOnlyCollection`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
