// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_Character
  class TMP_Character;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_FontUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_FontUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TMP_FontUtilities
    TMP_FontUtilities() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedFontAssets
    static System::Collections::Generic::List_1<int>* _get_k_searchedFontAssets();
    // Set static field: static private System.Collections.Generic.List`1<System.Int32> k_searchedFontAssets
    static void _set_k_searchedFontAssets(System::Collections::Generic::List_1<int>* value);
    // static public TMPro.TMP_FontAsset SearchForCharacter(TMPro.TMP_FontAsset font, System.UInt32 unicode, out TMPro.TMP_Character character)
    // Offset: 0x11185D0
    static TMPro::TMP_FontAsset* SearchForCharacter(TMPro::TMP_FontAsset* font, uint unicode, ByRef<TMPro::TMP_Character*> character);
    // static public TMPro.TMP_FontAsset SearchForCharacter(System.Collections.Generic.List`1<TMPro.TMP_FontAsset> fonts, System.UInt32 unicode, out TMPro.TMP_Character character)
    // Offset: 0x11188C0
    static TMPro::TMP_FontAsset* SearchForCharacter(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fonts, uint unicode, ByRef<TMPro::TMP_Character*> character);
    // static private TMPro.TMP_FontAsset SearchForCharacterInternal(TMPro.TMP_FontAsset font, System.UInt32 unicode, out TMPro.TMP_Character character)
    // Offset: 0x11186A0
    static TMPro::TMP_FontAsset* SearchForCharacterInternal(TMPro::TMP_FontAsset* font, uint unicode, ByRef<TMPro::TMP_Character*> character);
    // static private TMPro.TMP_FontAsset SearchForCharacterInternal(System.Collections.Generic.List`1<TMPro.TMP_FontAsset> fonts, System.UInt32 unicode, out TMPro.TMP_Character character)
    // Offset: 0x11188C4
    static TMPro::TMP_FontAsset* SearchForCharacterInternal(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>* fonts, uint unicode, ByRef<TMPro::TMP_Character*> character);
  }; // TMPro.TMP_FontUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontUtilities*, "TMPro", "TMP_FontUtilities");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_FontUtilities::SearchForCharacter
// Il2CppName: SearchForCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_FontAsset* (*)(TMPro::TMP_FontAsset*, uint, ByRef<TMPro::TMP_Character*>)>(&TMPro::TMP_FontUtilities::SearchForCharacter)> {
  static const MethodInfo* get() {
    static auto* font = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* character = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Character")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontUtilities*), "SearchForCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{font, unicode, character});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontUtilities::SearchForCharacter
// Il2CppName: SearchForCharacter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_FontAsset* (*)(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>*, uint, ByRef<TMPro::TMP_Character*>)>(&TMPro::TMP_FontUtilities::SearchForCharacter)> {
  static const MethodInfo* get() {
    static auto* fonts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")})->byval_arg;
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* character = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Character")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontUtilities*), "SearchForCharacter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fonts, unicode, character});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontUtilities::SearchForCharacterInternal
// Il2CppName: SearchForCharacterInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_FontAsset* (*)(TMPro::TMP_FontAsset*, uint, ByRef<TMPro::TMP_Character*>)>(&TMPro::TMP_FontUtilities::SearchForCharacterInternal)> {
  static const MethodInfo* get() {
    static auto* font = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")->byval_arg;
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* character = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Character")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontUtilities*), "SearchForCharacterInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{font, unicode, character});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_FontUtilities::SearchForCharacterInternal
// Il2CppName: SearchForCharacterInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TMPro::TMP_FontAsset* (*)(System::Collections::Generic::List_1<TMPro::TMP_FontAsset*>*, uint, ByRef<TMPro::TMP_Character*>)>(&TMPro::TMP_FontUtilities::SearchForCharacterInternal)> {
  static const MethodInfo* get() {
    static auto* fonts = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("TMPro", "TMP_FontAsset")})->byval_arg;
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* character = &::il2cpp_utils::GetClassFromName("TMPro", "TMP_Character")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_FontUtilities*), "SearchForCharacterInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fonts, unicode, character});
  }
};
