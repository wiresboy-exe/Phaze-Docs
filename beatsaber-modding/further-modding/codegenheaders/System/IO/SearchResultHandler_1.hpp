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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchResult
  class SearchResult;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // WARNING Size may be invalid!
  // Autogenerated type: System.IO.SearchResultHandler`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSource>
  class SearchResultHandler_1 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SearchResultHandler_1
    SearchResultHandler_1() noexcept {}
    // System.Boolean IsResultIncluded(System.IO.SearchResult result)
    // Offset: 0xFFFFFFFF
    bool IsResultIncluded(System::IO::SearchResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::SearchResultHandler_1::IsResultIncluded");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IsResultIncluded", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, result);
    }
    // TSource CreateObject(System.IO.SearchResult result)
    // Offset: 0xFFFFFFFF
    TSource CreateObject(System::IO::SearchResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::SearchResultHandler_1::CreateObject");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateObject", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<TSource, false>(___instance_arg, ___internal__method, result);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchResultHandler_1<TSource>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::SearchResultHandler_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchResultHandler_1<TSource>*, creationType>()));
    }
  }; // System.IO.SearchResultHandler`1
  // Could not write size check! Type: System.IO.SearchResultHandler`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IO::SearchResultHandler_1, "System.IO", "SearchResultHandler`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
