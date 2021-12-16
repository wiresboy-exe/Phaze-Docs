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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IReadOnlyDictionary_2;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.CollectionExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class CollectionExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CollectionExtensions
    CollectionExtensions() noexcept {}
    // static public TValue GetValueOrDefault(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue> dictionary, TKey key)
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    static TValue GetValueOrDefault(System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::CollectionExtensions::GetValueOrDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Collections.Generic", "CollectionExtensions", "GetValueOrDefault", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dictionary), ::il2cpp_utils::ExtractType(key)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary, key);
    }
    // static public TValue GetValueOrDefault(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue> dictionary, TKey key, TValue defaultValue)
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    static TValue GetValueOrDefault(System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary, TKey key, TValue defaultValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::CollectionExtensions::GetValueOrDefault");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Collections.Generic", "CollectionExtensions", "GetValueOrDefault", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(dictionary), ::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractType(defaultValue)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary, key, defaultValue);
    }
  }; // System.Collections.Generic.CollectionExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::CollectionExtensions*, "System.Collections.Generic", "CollectionExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::CollectionExtensions::GetValueOrDefault
// Il2CppName: GetValueOrDefault
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Collections::Generic::CollectionExtensions::GetValueOrDefault
// Il2CppName: GetValueOrDefault
// Cannot write MetadataGetter for generic methods!