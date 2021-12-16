// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_PageInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct TMP_PageInfo/*, public System::ValueType*/ {
    public:
    // public System.Int32 firstCharacterIndex
    // Size: 0x4
    // Offset: 0x0
    int firstCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lastCharacterIndex
    // Size: 0x4
    // Offset: 0x4
    int lastCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single ascender
    // Size: 0x4
    // Offset: 0x8
    float ascender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single baseLine
    // Size: 0x4
    // Offset: 0xC
    float baseLine;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single descender
    // Size: 0x4
    // Offset: 0x10
    float descender;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TMP_PageInfo
    constexpr TMP_PageInfo(int firstCharacterIndex_ = {}, int lastCharacterIndex_ = {}, float ascender_ = {}, float baseLine_ = {}, float descender_ = {}) noexcept : firstCharacterIndex{firstCharacterIndex_}, lastCharacterIndex{lastCharacterIndex_}, ascender{ascender_}, baseLine{baseLine_}, descender{descender_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 firstCharacterIndex
    int& dyn_firstCharacterIndex();
    // Get instance field reference: public System.Int32 lastCharacterIndex
    int& dyn_lastCharacterIndex();
    // Get instance field reference: public System.Single ascender
    float& dyn_ascender();
    // Get instance field reference: public System.Single baseLine
    float& dyn_baseLine();
    // Get instance field reference: public System.Single descender
    float& dyn_descender();
  }; // TMPro.TMP_PageInfo
  #pragma pack(pop)
  static check_size<sizeof(TMP_PageInfo), 16 + sizeof(float)> __TMPro_TMP_PageInfoSizeCheck;
  static_assert(sizeof(TMP_PageInfo) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_PageInfo, "TMPro", "TMP_PageInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
