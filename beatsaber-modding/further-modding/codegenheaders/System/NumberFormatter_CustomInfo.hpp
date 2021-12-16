// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.NumberFormatter
#include "System/NumberFormatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.NumberFormatter/System.CustomInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class NumberFormatter::CustomInfo : public ::Il2CppObject {
    public:
    // public System.Boolean UseGroup
    // Size: 0x1
    // Offset: 0x10
    bool UseGroup;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UseGroup and: DecimalDigits
    char __padding0[0x3] = {};
    // public System.Int32 DecimalDigits
    // Size: 0x4
    // Offset: 0x14
    int DecimalDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 DecimalPointPos
    // Size: 0x4
    // Offset: 0x18
    int DecimalPointPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 DecimalTailSharpDigits
    // Size: 0x4
    // Offset: 0x1C
    int DecimalTailSharpDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 IntegerDigits
    // Size: 0x4
    // Offset: 0x20
    int IntegerDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 IntegerHeadSharpDigits
    // Size: 0x4
    // Offset: 0x24
    int IntegerHeadSharpDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 IntegerHeadPos
    // Size: 0x4
    // Offset: 0x28
    int IntegerHeadPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean UseExponent
    // Size: 0x1
    // Offset: 0x2C
    bool UseExponent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UseExponent and: ExponentDigits
    char __padding7[0x3] = {};
    // public System.Int32 ExponentDigits
    // Size: 0x4
    // Offset: 0x30
    int ExponentDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ExponentTailSharpDigits
    // Size: 0x4
    // Offset: 0x34
    int ExponentTailSharpDigits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean ExponentNegativeSignOnly
    // Size: 0x1
    // Offset: 0x38
    bool ExponentNegativeSignOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ExponentNegativeSignOnly and: DividePlaces
    char __padding10[0x3] = {};
    // public System.Int32 DividePlaces
    // Size: 0x4
    // Offset: 0x3C
    int DividePlaces;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Percents
    // Size: 0x4
    // Offset: 0x40
    int Percents;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Permilles
    // Size: 0x4
    // Offset: 0x44
    int Permilles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CustomInfo
    CustomInfo(bool UseGroup_ = {}, int DecimalDigits_ = {}, int DecimalPointPos_ = {}, int DecimalTailSharpDigits_ = {}, int IntegerDigits_ = {}, int IntegerHeadSharpDigits_ = {}, int IntegerHeadPos_ = {}, bool UseExponent_ = {}, int ExponentDigits_ = {}, int ExponentTailSharpDigits_ = {}, bool ExponentNegativeSignOnly_ = {}, int DividePlaces_ = {}, int Percents_ = {}, int Permilles_ = {}) noexcept : UseGroup{UseGroup_}, DecimalDigits{DecimalDigits_}, DecimalPointPos{DecimalPointPos_}, DecimalTailSharpDigits{DecimalTailSharpDigits_}, IntegerDigits{IntegerDigits_}, IntegerHeadSharpDigits{IntegerHeadSharpDigits_}, IntegerHeadPos{IntegerHeadPos_}, UseExponent{UseExponent_}, ExponentDigits{ExponentDigits_}, ExponentTailSharpDigits{ExponentTailSharpDigits_}, ExponentNegativeSignOnly{ExponentNegativeSignOnly_}, DividePlaces{DividePlaces_}, Percents{Percents_}, Permilles{Permilles_} {}
    // Get instance field reference: public System.Boolean UseGroup
    bool& dyn_UseGroup();
    // Get instance field reference: public System.Int32 DecimalDigits
    int& dyn_DecimalDigits();
    // Get instance field reference: public System.Int32 DecimalPointPos
    int& dyn_DecimalPointPos();
    // Get instance field reference: public System.Int32 DecimalTailSharpDigits
    int& dyn_DecimalTailSharpDigits();
    // Get instance field reference: public System.Int32 IntegerDigits
    int& dyn_IntegerDigits();
    // Get instance field reference: public System.Int32 IntegerHeadSharpDigits
    int& dyn_IntegerHeadSharpDigits();
    // Get instance field reference: public System.Int32 IntegerHeadPos
    int& dyn_IntegerHeadPos();
    // Get instance field reference: public System.Boolean UseExponent
    bool& dyn_UseExponent();
    // Get instance field reference: public System.Int32 ExponentDigits
    int& dyn_ExponentDigits();
    // Get instance field reference: public System.Int32 ExponentTailSharpDigits
    int& dyn_ExponentTailSharpDigits();
    // Get instance field reference: public System.Boolean ExponentNegativeSignOnly
    bool& dyn_ExponentNegativeSignOnly();
    // Get instance field reference: public System.Int32 DividePlaces
    int& dyn_DividePlaces();
    // Get instance field reference: public System.Int32 Percents
    int& dyn_Percents();
    // Get instance field reference: public System.Int32 Permilles
    int& dyn_Permilles();
    // static public System.Void GetActiveSection(System.String format, ref System.Boolean positive, System.Boolean zero, ref System.Int32 offset, ref System.Int32 length)
    // Offset: 0x1846A94
    static void GetActiveSection(::Il2CppString* format, ByRef<bool> positive, bool zero, ByRef<int> offset, ByRef<int> length);
    // static public System.NumberFormatter/System.CustomInfo Parse(System.String format, System.Int32 offset, System.Int32 length, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x1846D80
    static System::NumberFormatter::CustomInfo* Parse(::Il2CppString* format, int offset, int length, System::Globalization::NumberFormatInfo* nfi);
    // public System.String Format(System.String format, System.Int32 offset, System.Int32 length, System.Globalization.NumberFormatInfo nfi, System.Boolean positive, System.Text.StringBuilder sb_int, System.Text.StringBuilder sb_dec, System.Text.StringBuilder sb_exp)
    // Offset: 0x18475A4
    ::Il2CppString* Format(::Il2CppString* format, int offset, int length, System::Globalization::NumberFormatInfo* nfi, bool positive, System::Text::StringBuilder* sb_int, System::Text::StringBuilder* sb_dec, System::Text::StringBuilder* sb_exp);
    // public System.Void .ctor()
    // Offset: 0x1847F5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NumberFormatter::CustomInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::NumberFormatter::CustomInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NumberFormatter::CustomInfo*, creationType>()));
    }
  }; // System.NumberFormatter/System.CustomInfo
  #pragma pack(pop)
  static check_size<sizeof(NumberFormatter::CustomInfo), 68 + sizeof(int)> __System_NumberFormatter_CustomInfoSizeCheck;
  static_assert(sizeof(NumberFormatter::CustomInfo) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::NumberFormatter::CustomInfo*, "System", "NumberFormatter/CustomInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::NumberFormatter::CustomInfo::GetActiveSection
// Il2CppName: GetActiveSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppString*, ByRef<bool>, bool, ByRef<int>, ByRef<int>)>(&System::NumberFormatter::CustomInfo::GetActiveSection)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* positive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* zero = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::NumberFormatter::CustomInfo*), "GetActiveSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, positive, zero, offset, length});
  }
};
// Writing MetadataGetter for method: System::NumberFormatter::CustomInfo::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::NumberFormatter::CustomInfo* (*)(::Il2CppString*, int, int, System::Globalization::NumberFormatInfo*)>(&System::NumberFormatter::CustomInfo::Parse)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::NumberFormatter::CustomInfo*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, offset, length, nfi});
  }
};
// Writing MetadataGetter for method: System::NumberFormatter::CustomInfo::Format
// Il2CppName: Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::NumberFormatter::CustomInfo::*)(::Il2CppString*, int, int, System::Globalization::NumberFormatInfo*, bool, System::Text::StringBuilder*, System::Text::StringBuilder*, System::Text::StringBuilder*)>(&System::NumberFormatter::CustomInfo::Format)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nfi = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    static auto* positive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* sb_int = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* sb_dec = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* sb_exp = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::NumberFormatter::CustomInfo*), "Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, offset, length, nfi, positive, sb_int, sb_dec, sb_exp});
  }
};
// Writing MetadataGetter for method: System::NumberFormatter::CustomInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
