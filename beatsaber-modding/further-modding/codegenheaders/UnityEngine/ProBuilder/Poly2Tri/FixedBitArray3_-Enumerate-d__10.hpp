// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
#include "UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/UnityEngine.ProBuilder.Poly2Tri.<Enumerate>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FixedBitArray3::$Enumerate$d__10 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<bool>, public System::Collections::Generic::IEnumerator_1<bool>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean <>2__current
    // Size: 0x1
    // Offset: 0x14
    bool $$2__current;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: $$2__current and: $$l__initialThreadId
    char __padding1[0x3] = {};
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x18
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 <>4__this
    // Size: 0x3
    // Offset: 0x1C
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 <>3__<>4__this
    // Size: 0x3
    // Offset: 0x1F
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$3__$$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // Padding between fields: $$3__$$4__this and: $i$5__2
    char __padding4[0x2] = {};
    // private System.Int32 <i>5__2
    // Size: 0x4
    // Offset: 0x24
    int $i$5__2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $Enumerate$d__10
    $Enumerate$d__10(int $$1__state_ = {}, bool $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$4__this_ = {}, UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 $$3__$$4__this_ = {}, int $i$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$3__$$4__this{$$3__$$4__this_}, $i$5__2{$i$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<bool>
    operator System::Collections::Generic::IEnumerable_1<bool>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<bool>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<bool>
    operator System::Collections::Generic::IEnumerator_1<bool>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<bool>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Boolean <>2__current
    bool& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    int& dyn_$$l__initialThreadId();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 <>4__this
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& dyn_$$4__this();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 <>3__<>4__this
    UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& dyn_$$3__$$4__this();
    // Get instance field reference: private System.Int32 <i>5__2
    int& dyn_$i$5__2();
    // private System.Boolean System.Collections.Generic.IEnumerator<System.Boolean>.get_Current()
    // Offset: 0x23C99A0
    bool System_Collections_Generic_IEnumerator$System_Boolean$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x23C9A08
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x23C982C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedBitArray3::$Enumerate$d__10* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedBitArray3::$Enumerate$d__10*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x23C9920
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x23C9924
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x23C99A8
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Boolean> System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator()
    // Offset: 0x23C9A6C
    System::Collections::Generic::IEnumerator_1<bool>* System_Collections_Generic_IEnumerable$System_Boolean$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x23C9B20
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3/UnityEngine.ProBuilder.Poly2Tri.<Enumerate>d__10
  #pragma pack(pop)
  static check_size<sizeof(FixedBitArray3::$Enumerate$d__10), 36 + sizeof(int)> __UnityEngine_ProBuilder_Poly2Tri_FixedBitArray3_$Enumerate$d__10SizeCheck;
  static_assert(sizeof(FixedBitArray3::$Enumerate$d__10) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*, "UnityEngine.ProBuilder.Poly2Tri", "FixedBitArray3/<Enumerate>d__10");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_Generic_IEnumerator$System_Boolean$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Boolean>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::*)()>(&UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_Generic_IEnumerator$System_Boolean$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*), "System.Collections.Generic.IEnumerator<System.Boolean>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::*)()>(&UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::*)()>(&UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::*)()>(&UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::*)()>(&UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_Generic_IEnumerable$System_Boolean$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<bool>* (UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::*)()>(&UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_Generic_IEnumerable$System_Boolean$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*), "System.Collections.Generic.IEnumerable<System.Boolean>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::*)()>(&UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3::$Enumerate$d__10*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};