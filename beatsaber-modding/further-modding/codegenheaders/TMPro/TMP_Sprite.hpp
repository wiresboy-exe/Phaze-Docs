// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.TMP_TextElement_Legacy
#include "TMPro/TMP_TextElement_Legacy.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Sprite
  // [TokenAttribute] Offset: FFFFFFFF
  class TMP_Sprite : public TMPro::TMP_TextElement_Legacy {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    // public System.String name
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 hashCode
    // Size: 0x4
    // Offset: 0x40
    int hashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 unicode
    // Size: 0x4
    // Offset: 0x44
    int unicode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector2 pivot
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Vector2 pivot;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Sprite sprite
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Sprite* sprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: TMP_Sprite
    TMP_Sprite(::Il2CppString* name_ = {}, int hashCode_ = {}, int unicode_ = {}, UnityEngine::Vector2 pivot_ = {}, UnityEngine::Sprite* sprite_ = {}) noexcept : name{name_}, hashCode{hashCode_}, unicode{unicode_}, pivot{pivot_}, sprite{sprite_} {}
    // Get instance field reference: public System.String name
    ::Il2CppString*& dyn_name();
    // Get instance field reference: public System.Int32 hashCode
    int& dyn_hashCode();
    // Get instance field reference: public System.Int32 unicode
    int& dyn_unicode();
    // Get instance field reference: public UnityEngine.Vector2 pivot
    UnityEngine::Vector2& dyn_pivot();
    // Get instance field reference: public UnityEngine.Sprite sprite
    UnityEngine::Sprite*& dyn_sprite();
    // public System.Void .ctor()
    // Offset: 0x11558EC
    // Implemented from: TMPro.TMP_TextElement_Legacy
    // Base method: System.Void TMP_TextElement_Legacy::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Sprite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Sprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Sprite*, creationType>()));
    }
  }; // TMPro.TMP_Sprite
  #pragma pack(pop)
  static check_size<sizeof(TMP_Sprite), 80 + sizeof(UnityEngine::Sprite*)> __TMPro_TMP_SpriteSizeCheck;
  static_assert(sizeof(TMP_Sprite) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Sprite*, "TMPro", "TMP_Sprite");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_Sprite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
