// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
#include "UnityEngine/ProBuilder/KdTree/AddDuplicateBehavior.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.HyperRect`1
#include "UnityEngine/ProBuilder/KdTree/HyperRect_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Skipping declaration: <>c__DisplayClass33_0 because it is already included!
  // Skipping declaration: <GetEnumerator>d__33 because it is already included!
  // Forward declaring type: KdTreeNode`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class KdTreeNode_2;
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
  // Forward declaring type: NearestNeighbourList`2<TItem, TDistance>
  template<typename TItem, typename TDistance>
  class NearestNeighbourList_2;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.KdTree`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class KdTree_2 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::KdTree::KdTree_2::$$c__DisplayClass33_0<TKey, TValue>
    class $$c__DisplayClass33_0;
    // Nested type: UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33<TKey, TValue>
    class $GetEnumerator$d__33;
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<>c__DisplayClass33_0
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $$c__DisplayClass33_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = KdTree_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<>c__DisplayClass33_0";
      static constexpr bool IS_VALUE_TYPE = false;
      // public System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> left
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* left;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*) == 0x8);
      // public System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> right
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* right;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass33_0
      $$c__DisplayClass33_0(System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* left_ = {}, System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* right_ = {}) noexcept : left{left_}, right{right_} {}
      // Autogenerated instance field getter
      // Get instance field: public System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> left
      System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& dyn_left() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$$c__DisplayClass33_0::dyn_left");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "left"))->offset;
        return *reinterpret_cast<System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> right
      System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& dyn_right() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$$c__DisplayClass33_0::dyn_right");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "right"))->offset;
        return *reinterpret_cast<System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // System.Void <GetEnumerator>b__0(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node)
      // Offset: 0xFFFFFFFF
      void $GetEnumerator$b__0(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node) {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$$c__DisplayClass33_0::<GetEnumerator>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<GetEnumerator>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, node);
      }
      // System.Void <GetEnumerator>b__1(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node)
      // Offset: 0xFFFFFFFF
      void $GetEnumerator$b__1(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node) {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$$c__DisplayClass33_0::<GetEnumerator>b__1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<GetEnumerator>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, node);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename KdTree_2<TKey, TValue>::$$c__DisplayClass33_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$$c__DisplayClass33_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename KdTree_2<TKey, TValue>::$$c__DisplayClass33_0*, creationType>()));
      }
    }; // UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<>c__DisplayClass33_0
    // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<>c__DisplayClass33_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<GetEnumerator>d__33
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    class $GetEnumerator$d__33 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*/ {
      public:
      using declaring_type = KdTree_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "<GetEnumerator>d__33";
      static constexpr bool IS_VALUE_TYPE = false;
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> <>2__current
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* $$2__current;
      // Field size check
      static_assert(sizeof(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*) == 0x8);
      // public UnityEngine.ProBuilder.KdTree.KdTree`2<TKey,TValue> <>4__this
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* $$4__this;
      // Field size check
      static_assert(sizeof(UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*) == 0x8);
      // private UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<>c__DisplayClass33_0<TKey,TValue> <>8__1
      // Size: 0x8
      // Offset: 0x0
      typename UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::$$c__DisplayClass33_0* $$8__1;
      // Field size check
      static_assert(sizeof(typename UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::$$c__DisplayClass33_0*) == 0x8);
      // private System.Action`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> <addLeft>5__2
      // Size: 0x8
      // Offset: 0x0
      System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* $addLeft$5__2;
      // Field size check
      static_assert(sizeof(System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*) == 0x8);
      // private System.Action`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> <addRight>5__3
      // Size: 0x8
      // Offset: 0x0
      System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* $addRight$5__3;
      // Field size check
      static_assert(sizeof(System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*) == 0x8);
      // Creating value type constructor for type: $GetEnumerator$d__33
      $GetEnumerator$d__33(int $$1__state_ = {}, UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* $$2__current_ = {}, UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* $$4__this_ = {}, typename UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::$$c__DisplayClass33_0* $$8__1_ = {}, System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* $addLeft$5__2_ = {}, System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* $addRight$5__3_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $addLeft$5__2{$addLeft$5__2_}, $addRight$5__3{$addRight$5__3_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>
      operator System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(this);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Int32 <>1__state
      int& dyn_$$1__state() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::dyn_$$1__state");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
        return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> <>2__current
      UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& dyn_$$2__current() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::dyn_$$2__current");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>2__current"))->offset;
        return *reinterpret_cast<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public UnityEngine.ProBuilder.KdTree.KdTree`2<TKey,TValue> <>4__this
      UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>*& dyn_$$4__this() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::dyn_$$4__this");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
        return *reinterpret_cast<UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<>c__DisplayClass33_0<TKey,TValue> <>8__1
      typename UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::$$c__DisplayClass33_0*& dyn_$$8__1() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::dyn_$$8__1");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>8__1"))->offset;
        return *reinterpret_cast<typename UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::$$c__DisplayClass33_0**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Action`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> <addLeft>5__2
      System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& dyn_$addLeft$5__2() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::dyn_$addLeft$5__2");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<addLeft>5__2"))->offset;
        return *reinterpret_cast<System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: private System.Action`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> <addRight>5__3
      System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*& dyn_$addRight$5__3() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::dyn_$addRight$5__3");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<addRight>5__3"))->offset;
        return *reinterpret_cast<System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current()
      // Offset: 0xFFFFFFFF
      UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* System_Collections_Generic_IEnumerator$UnityEngine_ProBuilder_KdTree_KdTreeNode$TKey_TValue$$_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, false>(___instance_arg, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::System.Collections.IEnumerator.get_Current");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(___instance_arg, ___internal__method);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename KdTree_2<TKey, TValue>::$GetEnumerator$d__33* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename KdTree_2<TKey, TValue>::$GetEnumerator$d__33*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::System.IDisposable.Dispose");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::MoveNext");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33::System.Collections.IEnumerator.Reset");
        auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        auto ___instance_arg = this;
        ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
      }
    }; // UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<GetEnumerator>d__33
    // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.KdTree`2/UnityEngine.ProBuilder.KdTree.<GetEnumerator>d__33 is generic, or has no fields that are valid for size checks!
    // private System.Int32 dimensions
    // Size: 0x4
    // Offset: 0x0
    int dimensions;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TKey> typeMath
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*) == 0x8);
    // private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> root
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* root;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*) == 0x8);
    // private UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior <AddDuplicateBehavior>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior AddDuplicateBehavior;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior) == 0x4);
    // private System.Int32 <Count>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: KdTree_2
    KdTree_2(int dimensions_ = {}, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath_ = {}, UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* root_ = {}, UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior AddDuplicateBehavior_ = {}, int Count_ = {}) noexcept : dimensions{dimensions_}, typeMath{typeMath_}, root{root_}, AddDuplicateBehavior{AddDuplicateBehavior_}, Count{Count_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 dimensions
    int& dyn_dimensions() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::dyn_dimensions");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "dimensions"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TKey> typeMath
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>*& dyn_typeMath() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::dyn_typeMath");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "typeMath"))->offset;
      return *reinterpret_cast<UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> root
    UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*& dyn_root() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::dyn_root");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "root"))->offset;
      return *reinterpret_cast<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior <AddDuplicateBehavior>k__BackingField
    UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior& dyn_$AddDuplicateBehavior$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::dyn_$AddDuplicateBehavior$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<AddDuplicateBehavior>k__BackingField"))->offset;
      return *reinterpret_cast<UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <Count>k__BackingField
    int& dyn_$Count$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::dyn_$Count$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Count>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior get_AddDuplicateBehavior()
    // Offset: 0xFFFFFFFF
    UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior get_AddDuplicateBehavior() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::get_AddDuplicateBehavior");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_AddDuplicateBehavior", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, false>(___instance_arg, ___internal__method);
    }
    // private System.Void set_AddDuplicateBehavior(UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior value)
    // Offset: 0xFFFFFFFF
    void set_AddDuplicateBehavior(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::set_AddDuplicateBehavior");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_AddDuplicateBehavior", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::get_Count");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
    // private System.Void set_Count(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_Count(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::set_Count");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, value);
    }
    // public System.Void .ctor(System.Int32 dimensions, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TKey> typeMath)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KdTree_2<TKey, TValue>* New_ctor(int dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KdTree_2<TKey, TValue>*, creationType>(dimensions, typeMath)));
    }
    // public System.Void .ctor(System.Int32 dimensions, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TKey> typeMath, UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior addDuplicateBehavior)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KdTree_2<TKey, TValue>* New_ctor(int dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath, UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KdTree_2<TKey, TValue>*, creationType>(dimensions, typeMath, addDuplicateBehavior)));
    }
    // public System.Boolean Add(TKey[] point, TValue value)
    // Offset: 0xFFFFFFFF
    bool Add(::Array<TKey>* point, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::Add");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(point), ::il2cpp_utils::ExtractType(value)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, point, value);
    }
    // private System.Void AddNearestNeighbours(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node, TKey[] target, UnityEngine.ProBuilder.KdTree.HyperRect`1<TKey> rect, System.Int32 depth, UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>,TKey> nearestNeighbours, TKey maxSearchRadiusSquared)
    // Offset: 0xFFFFFFFF
    void AddNearestNeighbours(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, ::Array<TKey>* target, UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey> rect, int depth, UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, TKey>* nearestNeighbours, TKey maxSearchRadiusSquared) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::AddNearestNeighbours");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddNearestNeighbours", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node), ::il2cpp_utils::ExtractType(target), ::il2cpp_utils::ExtractType(rect), ::il2cpp_utils::ExtractType(depth), ::il2cpp_utils::ExtractType(nearestNeighbours), ::il2cpp_utils::ExtractType(maxSearchRadiusSquared)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, node, target, rect, depth, nearestNeighbours, maxSearchRadiusSquared);
    }
    // public UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>[] RadialSearch(TKey[] center, TKey radius, System.Int32 count)
    // Offset: 0xFFFFFFFF
    ::Array<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* RadialSearch(::Array<TKey>* center, TKey radius, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::RadialSearch");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "RadialSearch", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(center), ::il2cpp_utils::ExtractType(radius), ::il2cpp_utils::ExtractType(count)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<::Array<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*, false>(___instance_arg, ___internal__method, center, radius, count);
    }
    // private System.Void AddNodeToStringBuilder(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node, System.Text.StringBuilder sb, System.Int32 depth)
    // Offset: 0xFFFFFFFF
    void AddNodeToStringBuilder(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, System::Text::StringBuilder* sb, int depth) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::AddNodeToStringBuilder");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddNodeToStringBuilder", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node), ::il2cpp_utils::ExtractType(sb), ::il2cpp_utils::ExtractType(depth)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, node, sb, depth);
    }
    // public System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*, false>(___instance_arg, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(___instance_arg, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::KdTree_2::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(___instance_arg, ___internal__method);
    }
  }; // UnityEngine.ProBuilder.KdTree.KdTree`2
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.KdTree`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::KdTree_2, "UnityEngine.ProBuilder.KdTree", "KdTree`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
