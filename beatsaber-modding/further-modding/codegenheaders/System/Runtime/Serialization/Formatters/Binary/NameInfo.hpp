// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.NameInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class NameInfo : public ::Il2CppObject {
    public:
    // System.String NIFullName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* NIFullName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int64 NIobjectId
    // Size: 0x8
    // Offset: 0x18
    int64_t NIobjectId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int64 NIassemId
    // Size: 0x8
    // Offset: 0x20
    int64_t NIassemId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE NIprimitiveTypeEnum
    // Size: 0x4
    // Offset: 0x28
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // Padding between fields: NIprimitiveTypeEnum and: NItype
    char __padding3[0x4] = {};
    // System.Type NItype
    // Size: 0x8
    // Offset: 0x30
    System::Type* NItype;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Boolean NIisSealed
    // Size: 0x1
    // Offset: 0x38
    bool NIisSealed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean NIisArray
    // Size: 0x1
    // Offset: 0x39
    bool NIisArray;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean NIisArrayItem
    // Size: 0x1
    // Offset: 0x3A
    bool NIisArrayItem;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean NItransmitTypeOnObject
    // Size: 0x1
    // Offset: 0x3B
    bool NItransmitTypeOnObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean NItransmitTypeOnMember
    // Size: 0x1
    // Offset: 0x3C
    bool NItransmitTypeOnMember;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean NIisParentTypeOnObject
    // Size: 0x1
    // Offset: 0x3D
    bool NIisParentTypeOnObject;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: NIisParentTypeOnObject and: NIarrayEnum
    char __padding10[0x2] = {};
    // System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE NIarrayEnum
    // Size: 0x4
    // Offset: 0x40
    System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE) == 0x4);
    // private System.Boolean NIsealedStatusChecked
    // Size: 0x1
    // Offset: 0x44
    bool NIsealedStatusChecked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NameInfo
    NameInfo(::Il2CppString* NIFullName_ = {}, int64_t NIobjectId_ = {}, int64_t NIassemId_ = {}, System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum_ = {}, System::Type* NItype_ = {}, bool NIisSealed_ = {}, bool NIisArray_ = {}, bool NIisArrayItem_ = {}, bool NItransmitTypeOnObject_ = {}, bool NItransmitTypeOnMember_ = {}, bool NIisParentTypeOnObject_ = {}, System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum_ = {}, bool NIsealedStatusChecked_ = {}) noexcept : NIFullName{NIFullName_}, NIobjectId{NIobjectId_}, NIassemId{NIassemId_}, NIprimitiveTypeEnum{NIprimitiveTypeEnum_}, NItype{NItype_}, NIisSealed{NIisSealed_}, NIisArray{NIisArray_}, NIisArrayItem{NIisArrayItem_}, NItransmitTypeOnObject{NItransmitTypeOnObject_}, NItransmitTypeOnMember{NItransmitTypeOnMember_}, NIisParentTypeOnObject{NIisParentTypeOnObject_}, NIarrayEnum{NIarrayEnum_}, NIsealedStatusChecked{NIsealedStatusChecked_} {}
    // Get instance field reference: System.String NIFullName
    ::Il2CppString*& dyn_NIFullName();
    // Get instance field reference: System.Int64 NIobjectId
    int64_t& dyn_NIobjectId();
    // Get instance field reference: System.Int64 NIassemId
    int64_t& dyn_NIassemId();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE NIprimitiveTypeEnum
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& dyn_NIprimitiveTypeEnum();
    // Get instance field reference: System.Type NItype
    System::Type*& dyn_NItype();
    // Get instance field reference: System.Boolean NIisSealed
    bool& dyn_NIisSealed();
    // Get instance field reference: System.Boolean NIisArray
    bool& dyn_NIisArray();
    // Get instance field reference: System.Boolean NIisArrayItem
    bool& dyn_NIisArrayItem();
    // Get instance field reference: System.Boolean NItransmitTypeOnObject
    bool& dyn_NItransmitTypeOnObject();
    // Get instance field reference: System.Boolean NItransmitTypeOnMember
    bool& dyn_NItransmitTypeOnMember();
    // Get instance field reference: System.Boolean NIisParentTypeOnObject
    bool& dyn_NIisParentTypeOnObject();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE NIarrayEnum
    System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& dyn_NIarrayEnum();
    // Get instance field reference: private System.Boolean NIsealedStatusChecked
    bool& dyn_NIsealedStatusChecked();
    // public System.Boolean get_IsSealed()
    // Offset: 0x1620F48
    bool get_IsSealed();
    // public System.String get_NIname()
    // Offset: 0x1620FA0
    ::Il2CppString* get_NIname();
    // public System.Void set_NIname(System.String value)
    // Offset: 0x1620FE4
    void set_NIname(::Il2CppString* value);
    // System.Void Init()
    // Offset: 0x1620F28
    void Init();
    // System.Void .ctor()
    // Offset: 0x1620F20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::NameInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameInfo*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.NameInfo
  #pragma pack(pop)
  static check_size<sizeof(NameInfo), 68 + sizeof(bool)> __System_Runtime_Serialization_Formatters_Binary_NameInfoSizeCheck;
  static_assert(sizeof(NameInfo) == 0x45);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::NameInfo*, "System.Runtime.Serialization.Formatters.Binary", "NameInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameInfo::get_IsSealed
// Il2CppName: get_IsSealed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::NameInfo::get_IsSealed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::NameInfo*), "get_IsSealed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameInfo::get_NIname
// Il2CppName: get_NIname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::NameInfo::get_NIname)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::NameInfo*), "get_NIname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameInfo::set_NIname
// Il2CppName: set_NIname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::NameInfo::*)(::Il2CppString*)>(&System::Runtime::Serialization::Formatters::Binary::NameInfo::set_NIname)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::NameInfo*), "set_NIname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::NameInfo::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::NameInfo*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::NameInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
