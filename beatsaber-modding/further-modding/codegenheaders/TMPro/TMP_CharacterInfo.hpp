// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.TMP_TextElementType
#include "TMPro/TMP_TextElementType.hpp"
// Including type: TMPro.TMP_Vertex
#include "TMPro/TMP_Vertex.hpp"
// Including type: TMPro.FontStyles
#include "TMPro/FontStyles.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_TextElement
  class TMP_TextElement;
  // Forward declaring type: TMP_FontAsset
  class TMP_FontAsset;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x151
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_CharacterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_CharacterInfo/*, public System::ValueType*/ {
    public:
    // public System.Char character
    // Size: 0x2
    // Offset: 0x0
    ::Il2CppChar character;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: character and: index
    char __padding0[0x2] = {};
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x4
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stringLength
    // Size: 0x4
    // Offset: 0x8
    int stringLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TMP_TextElementType elementType
    // Size: 0x4
    // Offset: 0xC
    TMPro::TMP_TextElementType elementType;
    // Field size check
    static_assert(sizeof(TMPro::TMP_TextElementType) == 0x4);
    // public TMPro.TMP_TextElement textElement
    // Size: 0x8
    // Offset: 0x10
    TMPro::TMP_TextElement* textElement;
    // Field size check
    static_assert(sizeof(TMPro::TMP_TextElement*) == 0x8);
    // public TMPro.TMP_FontAsset fontAsset
    // Size: 0x8
    // Offset: 0x18
    TMPro::TMP_FontAsset* fontAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_FontAsset*) == 0x8);
    // public TMPro.TMP_SpriteAsset spriteAsset
    // Size: 0x8
    // Offset: 0x20
    TMPro::TMP_SpriteAsset* spriteAsset;
    // Field size check
    static_assert(sizeof(TMPro::TMP_SpriteAsset*) == 0x8);
    // public System.Int32 spriteIndex
    // Size: 0x4
    // Offset: 0x28
    int spriteIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: spriteIndex and: material
    char __padding7[0x4] = {};
    // public UnityEngine.Material material
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // public System.Int32 materialReferenceIndex
    // Size: 0x4
    // Offset: 0x38
    int materialReferenceIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isUsingAlternateTypeface
    // Size: 0x1
    // Offset: 0x3C
    bool isUsingAlternateTypeface;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isUsingAlternateTypeface and: pointSize
    char __padding10[0x3] = {};
    // public System.Single pointSize
    // Size: 0x4
    // Offset: 0x40
    float pointSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x44
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 pageNumber
    // Size: 0x4
    // Offset: 0x48
    int pageNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 vertexIndex
    // Size: 0x4
    // Offset: 0x4C
    int vertexIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TMP_Vertex vertex_BL
    // Size: 0x28
    // Offset: 0x50
    TMPro::TMP_Vertex vertex_BL;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Vertex) == 0x28);
    // public TMPro.TMP_Vertex vertex_TL
    // Size: 0x28
    // Offset: 0x78
    TMPro::TMP_Vertex vertex_TL;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Vertex) == 0x28);
    // public TMPro.TMP_Vertex vertex_TR
    // Size: 0x28
    // Offset: 0xA0
    TMPro::TMP_Vertex vertex_TR;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Vertex) == 0x28);
    // public TMPro.TMP_Vertex vertex_BR
    // Size: 0x28
    // Offset: 0xC8
    TMPro::TMP_Vertex vertex_BR;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Vertex) == 0x28);
    // public UnityEngine.Vector3 topLeft
    // Size: 0xC
    // Offset: 0xF0
    UnityEngine::Vector3 topLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bottomLeft
    // Size: 0xC
    // Offset: 0xFC
    UnityEngine::Vector3 bottomLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 topRight
    // Size: 0xC
    // Offset: 0x108
    UnityEngine::Vector3 topRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 bottomRight
    // Size: 0xC
    // Offset: 0x114
    UnityEngine::Vector3 bottomRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // public System.Single origin
    // Size: 0x4
    // Offset: 0x120
    float origin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ascender
    // Size: 0x4
    // Offset: 0x124
    float ascender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baseLine
    // Size: 0x4
    // Offset: 0x128
    float baseLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single descender
    // Size: 0x4
    // Offset: 0x12C
    float descender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single xAdvance
    // Size: 0x4
    // Offset: 0x130
    float xAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single aspectRatio
    // Size: 0x4
    // Offset: 0x134
    float aspectRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single scale
    // Size: 0x4
    // Offset: 0x138
    float scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color32 color
    // Size: 0x4
    // Offset: 0x13C
    UnityEngine::Color32 color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 underlineColor
    // Size: 0x4
    // Offset: 0x140
    UnityEngine::Color32 underlineColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 strikethroughColor
    // Size: 0x4
    // Offset: 0x144
    UnityEngine::Color32 strikethroughColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public UnityEngine.Color32 highlightColor
    // Size: 0x4
    // Offset: 0x148
    UnityEngine::Color32 highlightColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color32) == 0x4);
    // public TMPro.FontStyles style
    // Size: 0x4
    // Offset: 0x14C
    TMPro::FontStyles style;
    // Field size check
    static_assert(sizeof(TMPro::FontStyles) == 0x4);
    // public System.Boolean isVisible
    // Size: 0x1
    // Offset: 0x150
    bool isVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TMP_CharacterInfo
    constexpr TMP_CharacterInfo(::Il2CppChar character_ = {}, int index_ = {}, int stringLength_ = {}, TMPro::TMP_TextElementType elementType_ = {}, TMPro::TMP_TextElement* textElement_ = {}, TMPro::TMP_FontAsset* fontAsset_ = {}, TMPro::TMP_SpriteAsset* spriteAsset_ = {}, int spriteIndex_ = {}, UnityEngine::Material* material_ = {}, int materialReferenceIndex_ = {}, bool isUsingAlternateTypeface_ = {}, float pointSize_ = {}, int lineNumber_ = {}, int pageNumber_ = {}, int vertexIndex_ = {}, TMPro::TMP_Vertex vertex_BL_ = {}, TMPro::TMP_Vertex vertex_TL_ = {}, TMPro::TMP_Vertex vertex_TR_ = {}, TMPro::TMP_Vertex vertex_BR_ = {}, UnityEngine::Vector3 topLeft_ = {}, UnityEngine::Vector3 bottomLeft_ = {}, UnityEngine::Vector3 topRight_ = {}, UnityEngine::Vector3 bottomRight_ = {}, float origin_ = {}, float ascender_ = {}, float baseLine_ = {}, float descender_ = {}, float xAdvance_ = {}, float aspectRatio_ = {}, float scale_ = {}, UnityEngine::Color32 color_ = {}, UnityEngine::Color32 underlineColor_ = {}, UnityEngine::Color32 strikethroughColor_ = {}, UnityEngine::Color32 highlightColor_ = {}, TMPro::FontStyles style_ = {}, bool isVisible_ = {}) noexcept : character{character_}, index{index_}, stringLength{stringLength_}, elementType{elementType_}, textElement{textElement_}, fontAsset{fontAsset_}, spriteAsset{spriteAsset_}, spriteIndex{spriteIndex_}, material{material_}, materialReferenceIndex{materialReferenceIndex_}, isUsingAlternateTypeface{isUsingAlternateTypeface_}, pointSize{pointSize_}, lineNumber{lineNumber_}, pageNumber{pageNumber_}, vertexIndex{vertexIndex_}, vertex_BL{vertex_BL_}, vertex_TL{vertex_TL_}, vertex_TR{vertex_TR_}, vertex_BR{vertex_BR_}, topLeft{topLeft_}, bottomLeft{bottomLeft_}, topRight{topRight_}, bottomRight{bottomRight_}, origin{origin_}, ascender{ascender_}, baseLine{baseLine_}, descender{descender_}, xAdvance{xAdvance_}, aspectRatio{aspectRatio_}, scale{scale_}, color{color_}, underlineColor{underlineColor_}, strikethroughColor{strikethroughColor_}, highlightColor{highlightColor_}, style{style_}, isVisible{isVisible_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Char character
    ::Il2CppChar& dyn_character();
    // Get instance field reference: public System.Int32 index
    int& dyn_index();
    // Get instance field reference: public System.Int32 stringLength
    int& dyn_stringLength();
    // Get instance field reference: public TMPro.TMP_TextElementType elementType
    TMPro::TMP_TextElementType& dyn_elementType();
    // Get instance field reference: public TMPro.TMP_TextElement textElement
    TMPro::TMP_TextElement*& dyn_textElement();
    // Get instance field reference: public TMPro.TMP_FontAsset fontAsset
    TMPro::TMP_FontAsset*& dyn_fontAsset();
    // Get instance field reference: public TMPro.TMP_SpriteAsset spriteAsset
    TMPro::TMP_SpriteAsset*& dyn_spriteAsset();
    // Get instance field reference: public System.Int32 spriteIndex
    int& dyn_spriteIndex();
    // Get instance field reference: public UnityEngine.Material material
    UnityEngine::Material*& dyn_material();
    // Get instance field reference: public System.Int32 materialReferenceIndex
    int& dyn_materialReferenceIndex();
    // Get instance field reference: public System.Boolean isUsingAlternateTypeface
    bool& dyn_isUsingAlternateTypeface();
    // Get instance field reference: public System.Single pointSize
    float& dyn_pointSize();
    // Get instance field reference: public System.Int32 lineNumber
    int& dyn_lineNumber();
    // Get instance field reference: public System.Int32 pageNumber
    int& dyn_pageNumber();
    // Get instance field reference: public System.Int32 vertexIndex
    int& dyn_vertexIndex();
    // Get instance field reference: public TMPro.TMP_Vertex vertex_BL
    TMPro::TMP_Vertex& dyn_vertex_BL();
    // Get instance field reference: public TMPro.TMP_Vertex vertex_TL
    TMPro::TMP_Vertex& dyn_vertex_TL();
    // Get instance field reference: public TMPro.TMP_Vertex vertex_TR
    TMPro::TMP_Vertex& dyn_vertex_TR();
    // Get instance field reference: public TMPro.TMP_Vertex vertex_BR
    TMPro::TMP_Vertex& dyn_vertex_BR();
    // Get instance field reference: public UnityEngine.Vector3 topLeft
    UnityEngine::Vector3& dyn_topLeft();
    // Get instance field reference: public UnityEngine.Vector3 bottomLeft
    UnityEngine::Vector3& dyn_bottomLeft();
    // Get instance field reference: public UnityEngine.Vector3 topRight
    UnityEngine::Vector3& dyn_topRight();
    // Get instance field reference: public UnityEngine.Vector3 bottomRight
    UnityEngine::Vector3& dyn_bottomRight();
    // Get instance field reference: public System.Single origin
    float& dyn_origin();
    // Get instance field reference: public System.Single ascender
    float& dyn_ascender();
    // Get instance field reference: public System.Single baseLine
    float& dyn_baseLine();
    // Get instance field reference: public System.Single descender
    float& dyn_descender();
    // Get instance field reference: public System.Single xAdvance
    float& dyn_xAdvance();
    // Get instance field reference: public System.Single aspectRatio
    float& dyn_aspectRatio();
    // Get instance field reference: public System.Single scale
    float& dyn_scale();
    // Get instance field reference: public UnityEngine.Color32 color
    UnityEngine::Color32& dyn_color();
    // Get instance field reference: public UnityEngine.Color32 underlineColor
    UnityEngine::Color32& dyn_underlineColor();
    // Get instance field reference: public UnityEngine.Color32 strikethroughColor
    UnityEngine::Color32& dyn_strikethroughColor();
    // Get instance field reference: public UnityEngine.Color32 highlightColor
    UnityEngine::Color32& dyn_highlightColor();
    // Get instance field reference: public TMPro.FontStyles style
    TMPro::FontStyles& dyn_style();
    // Get instance field reference: public System.Boolean isVisible
    bool& dyn_isVisible();
  }; // TMPro.TMP_CharacterInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_CharacterInfo), 336 + sizeof(bool)> __TMPro_TMP_CharacterInfoSizeCheck;
  static_assert(sizeof(TMP_CharacterInfo) == 0x151);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_CharacterInfo, "TMPro", "TMP_CharacterInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"