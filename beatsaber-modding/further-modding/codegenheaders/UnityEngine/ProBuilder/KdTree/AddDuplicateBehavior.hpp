// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  struct AddDuplicateBehavior/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AddDuplicateBehavior
    constexpr AddDuplicateBehavior(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Skip
    static constexpr const int Skip = 0;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Skip
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Skip();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Skip
    static void _set_Skip(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Error
    static constexpr const int Error = 1;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Error
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Error();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Error
    static void _set_Error(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Update
    static constexpr const int Update = 2;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Update
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Update();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Update
    static void _set_Update(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Collect
    static constexpr const int Collect = 3;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Collect
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Collect();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Collect
    static void _set_Collect(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
  #pragma pack(pop)
  static check_size<sizeof(AddDuplicateBehavior), 0 + sizeof(int)> __UnityEngine_ProBuilder_KdTree_AddDuplicateBehaviorSizeCheck;
  static_assert(sizeof(AddDuplicateBehavior) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, "UnityEngine.ProBuilder.KdTree", "AddDuplicateBehavior");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
