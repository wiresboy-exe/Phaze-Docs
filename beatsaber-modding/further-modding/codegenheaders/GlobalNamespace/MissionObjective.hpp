// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ReferenceValueComparisonType because it is already included!
  // Forward declaring type: MissionObjectiveTypeSO
  class MissionObjectiveTypeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjective
  // [TokenAttribute] Offset: FFFFFFFF
  class MissionObjective : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MissionObjective::ReferenceValueComparisonType
    struct ReferenceValueComparisonType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MissionObjective/ReferenceValueComparisonType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ReferenceValueComparisonType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: ReferenceValueComparisonType
      constexpr ReferenceValueComparisonType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MissionObjective/ReferenceValueComparisonType None
      static constexpr const int None = 0;
      // Get static field: static public MissionObjective/ReferenceValueComparisonType None
      static GlobalNamespace::MissionObjective::ReferenceValueComparisonType _get_None();
      // Set static field: static public MissionObjective/ReferenceValueComparisonType None
      static void _set_None(GlobalNamespace::MissionObjective::ReferenceValueComparisonType value);
      // static field const value: static public MissionObjective/ReferenceValueComparisonType Equal
      static constexpr const int Equal = 1;
      // Get static field: static public MissionObjective/ReferenceValueComparisonType Equal
      static GlobalNamespace::MissionObjective::ReferenceValueComparisonType _get_Equal();
      // Set static field: static public MissionObjective/ReferenceValueComparisonType Equal
      static void _set_Equal(GlobalNamespace::MissionObjective::ReferenceValueComparisonType value);
      // static field const value: static public MissionObjective/ReferenceValueComparisonType Max
      static constexpr const int Max = 2;
      // Get static field: static public MissionObjective/ReferenceValueComparisonType Max
      static GlobalNamespace::MissionObjective::ReferenceValueComparisonType _get_Max();
      // Set static field: static public MissionObjective/ReferenceValueComparisonType Max
      static void _set_Max(GlobalNamespace::MissionObjective::ReferenceValueComparisonType value);
      // static field const value: static public MissionObjective/ReferenceValueComparisonType Min
      static constexpr const int Min = 3;
      // Get static field: static public MissionObjective/ReferenceValueComparisonType Min
      static GlobalNamespace::MissionObjective::ReferenceValueComparisonType _get_Min();
      // Set static field: static public MissionObjective/ReferenceValueComparisonType Min
      static void _set_Min(GlobalNamespace::MissionObjective::ReferenceValueComparisonType value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MissionObjective/ReferenceValueComparisonType
    #pragma pack(pop)
    static check_size<sizeof(MissionObjective::ReferenceValueComparisonType), 0 + sizeof(int)> __GlobalNamespace_MissionObjective_ReferenceValueComparisonTypeSizeCheck;
    static_assert(sizeof(MissionObjective::ReferenceValueComparisonType) == 0x4);
    // private MissionObjectiveTypeSO _type
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MissionObjectiveTypeSO* type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveTypeSO*) == 0x8);
    // private MissionObjective/ReferenceValueComparisonType _referenceValueComparisonType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::MissionObjective::ReferenceValueComparisonType referenceValueComparisonType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjective::ReferenceValueComparisonType) == 0x4);
    // private System.Int32 _referenceValue
    // Size: 0x4
    // Offset: 0x1C
    int referenceValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MissionObjective
    MissionObjective(GlobalNamespace::MissionObjectiveTypeSO* type_ = {}, GlobalNamespace::MissionObjective::ReferenceValueComparisonType referenceValueComparisonType_ = {}, int referenceValue_ = {}) noexcept : type{type_}, referenceValueComparisonType{referenceValueComparisonType_}, referenceValue{referenceValue_} {}
    // Get instance field reference: private MissionObjectiveTypeSO _type
    GlobalNamespace::MissionObjectiveTypeSO*& dyn__type();
    // Get instance field reference: private MissionObjective/ReferenceValueComparisonType _referenceValueComparisonType
    GlobalNamespace::MissionObjective::ReferenceValueComparisonType& dyn__referenceValueComparisonType();
    // Get instance field reference: private System.Int32 _referenceValue
    int& dyn__referenceValue();
    // public MissionObjectiveTypeSO get_type()
    // Offset: 0x11444D4
    GlobalNamespace::MissionObjectiveTypeSO* get_type();
    // public MissionObjective/ReferenceValueComparisonType get_referenceValueComparisonType()
    // Offset: 0x11444DC
    GlobalNamespace::MissionObjective::ReferenceValueComparisonType get_referenceValueComparisonType();
    // public System.Int32 get_referenceValue()
    // Offset: 0x11444E4
    int get_referenceValue();
    // public System.Void .ctor()
    // Offset: 0x1144754
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjective* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjective::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjective*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11445D4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11446E4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // MissionObjective
  #pragma pack(pop)
  static check_size<sizeof(MissionObjective), 28 + sizeof(int)> __GlobalNamespace_MissionObjectiveSizeCheck;
  static_assert(sizeof(MissionObjective) == 0x20);
  // static public System.Boolean op_Equality(MissionObjective obj1, MissionObjective obj2)
  // Offset: 0x11444EC
  bool operator ==(GlobalNamespace::MissionObjective* obj1, GlobalNamespace::MissionObjective& obj2);
  // static public System.Boolean op_Inequality(MissionObjective obj1, MissionObjective obj2)
  // Offset: 0x11445B8
  bool operator !=(GlobalNamespace::MissionObjective* obj1, GlobalNamespace::MissionObjective& obj2);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjective*, "", "MissionObjective");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjective::ReferenceValueComparisonType, "", "MissionObjective/ReferenceValueComparisonType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjectiveTypeSO* (GlobalNamespace::MissionObjective::*)()>(&GlobalNamespace::MissionObjective::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjective*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::get_referenceValueComparisonType
// Il2CppName: get_referenceValueComparisonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::MissionObjective::ReferenceValueComparisonType (GlobalNamespace::MissionObjective::*)()>(&GlobalNamespace::MissionObjective::get_referenceValueComparisonType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjective*), "get_referenceValueComparisonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::get_referenceValue
// Il2CppName: get_referenceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionObjective::*)()>(&GlobalNamespace::MissionObjective::get_referenceValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjective*), "get_referenceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MissionObjective::*)(::Il2CppObject*)>(&GlobalNamespace::MissionObjective::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjective*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MissionObjective::*)()>(&GlobalNamespace::MissionObjective::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionObjective*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::MissionObjective::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!