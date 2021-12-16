// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Dropdown/TMPro.OptionData
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Dropdown::OptionData : public ::Il2CppObject {
    public:
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite m_Image
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* m_Image;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: OptionData
    OptionData(::Il2CppString* m_Text_ = {}, UnityEngine::Sprite* m_Image_ = {}) noexcept : m_Text{m_Text_}, m_Image{m_Image_} {}
    // Get instance field reference: private System.String m_Text
    ::Il2CppString*& dyn_m_Text();
    // Get instance field reference: private UnityEngine.Sprite m_Image
    UnityEngine::Sprite*& dyn_m_Image();
    // public System.String get_text()
    // Offset: 0x1111F68
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x1111F70
    void set_text(::Il2CppString* value);
    // public UnityEngine.Sprite get_image()
    // Offset: 0x1111F78
    UnityEngine::Sprite* get_image();
    // public System.Void set_image(UnityEngine.Sprite value)
    // Offset: 0x1111F80
    void set_image(UnityEngine::Sprite* value);
    // public System.Void .ctor(System.String text)
    // Offset: 0x110FCC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor(::Il2CppString* text) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>(text)));
    }
    // public System.Void .ctor(UnityEngine.Sprite image)
    // Offset: 0x110FDD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor(UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>(image)));
    }
    // public System.Void .ctor(System.String text, UnityEngine.Sprite image)
    // Offset: 0x1111F88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor(::Il2CppString* text, UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>(text, image)));
    }
    // public System.Void .ctor()
    // Offset: 0x110F138
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>()));
    }
  }; // TMPro.TMP_Dropdown/TMPro.OptionData
  #pragma pack(pop)
  static check_size<sizeof(TMP_Dropdown::OptionData), 24 + sizeof(UnityEngine::Sprite*)> __TMPro_TMP_Dropdown_OptionDataSizeCheck;
  static_assert(sizeof(TMP_Dropdown::OptionData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown::OptionData*, "TMPro", "TMP_Dropdown/OptionData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::get_text
// Il2CppName: get_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (TMPro::TMP_Dropdown::OptionData::*)()>(&TMPro::TMP_Dropdown::OptionData::get_text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::OptionData*), "get_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::set_text
// Il2CppName: set_text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Dropdown::OptionData::*)(::Il2CppString*)>(&TMPro::TMP_Dropdown::OptionData::set_text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::OptionData*), "set_text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::get_image
// Il2CppName: get_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (TMPro::TMP_Dropdown::OptionData::*)()>(&TMPro::TMP_Dropdown::OptionData::get_image)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::OptionData*), "get_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::set_image
// Il2CppName: set_image
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_Dropdown::OptionData::*)(UnityEngine::Sprite*)>(&TMPro::TMP_Dropdown::OptionData::set_image)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_Dropdown::OptionData*), "set_image", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_Dropdown::OptionData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!