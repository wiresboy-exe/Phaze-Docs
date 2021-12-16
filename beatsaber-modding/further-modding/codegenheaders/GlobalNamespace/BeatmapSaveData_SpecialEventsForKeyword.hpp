// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/BeatmapEventType
#include "GlobalNamespace/BeatmapSaveData_BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/SpecialEventsForKeyword
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::SpecialEventsForKeyword : public ::Il2CppObject {
    public:
    // private System.String _keyword
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* keyword;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapSaveData/BeatmapEventType> _specialEvents
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* specialEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>*) == 0x8);
    // Creating value type constructor for type: SpecialEventsForKeyword
    SpecialEventsForKeyword(::Il2CppString* keyword_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* specialEvents_ = {}) noexcept : keyword{keyword_}, specialEvents{specialEvents_} {}
    // Get instance field reference: private System.String _keyword
    ::Il2CppString*& dyn__keyword();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveData/BeatmapEventType> _specialEvents
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>*& dyn__specialEvents();
    // public System.String get_keyword()
    // Offset: 0x10D65A8
    ::Il2CppString* get_keyword();
    // public System.Collections.Generic.List`1<BeatmapSaveData/BeatmapEventType> get_specialEvents()
    // Offset: 0x10D65B0
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* get_specialEvents();
    // public System.Void .ctor(System.String keyword, System.Collections.Generic.List`1<BeatmapSaveData/BeatmapEventType> specialEvents)
    // Offset: 0x10D65B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::SpecialEventsForKeyword* New_ctor(::Il2CppString* keyword, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* specialEvents) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::SpecialEventsForKeyword*, creationType>(keyword, specialEvents)));
    }
  }; // BeatmapSaveData/SpecialEventsForKeyword
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::SpecialEventsForKeyword), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>*)> __GlobalNamespace_BeatmapSaveData_SpecialEventsForKeywordSizeCheck;
  static_assert(sizeof(BeatmapSaveData::SpecialEventsForKeyword) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*, "", "BeatmapSaveData/SpecialEventsForKeyword");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::get_keyword
// Il2CppName: get_keyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::*)()>(&GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::get_keyword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*), "get_keyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::get_specialEvents
// Il2CppName: get_specialEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::BeatmapEventType>* (GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::*)()>(&GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::get_specialEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*), "get_specialEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!