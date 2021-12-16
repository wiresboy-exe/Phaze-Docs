// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.AimController
#include "RootMotion/FinalIK/AimController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.AimController/RootMotion.FinalIK.<TurnToTarget>d__33
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AimController::$TurnToTarget$d__33 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public RootMotion.FinalIK.AimController <>4__this
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::AimController* $$4__this;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::AimController*) == 0x8);
    // Creating value type constructor for type: $TurnToTarget$d__33
    $TurnToTarget$d__33(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, RootMotion::FinalIK::AimController* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public RootMotion.FinalIK.AimController <>4__this
    RootMotion::FinalIK::AimController*& dyn_$$4__this();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1D31AA4
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1D31B0C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1D31880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AimController::$TurnToTarget$d__33* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::AimController::$TurnToTarget$d__33::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AimController::$TurnToTarget$d__33*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1D31980
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1D31984
    bool MoveNext();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1D31AAC
    void System_Collections_IEnumerator_Reset();
  }; // RootMotion.FinalIK.AimController/RootMotion.FinalIK.<TurnToTarget>d__33
  #pragma pack(pop)
  static check_size<sizeof(AimController::$TurnToTarget$d__33), 32 + sizeof(RootMotion::FinalIK::AimController*)> __RootMotion_FinalIK_AimController_$TurnToTarget$d__33SizeCheck;
  static_assert(sizeof(AimController::$TurnToTarget$d__33) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::AimController::$TurnToTarget$d__33*, "RootMotion.FinalIK", "AimController/<TurnToTarget>d__33");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (RootMotion::FinalIK::AimController::$TurnToTarget$d__33::*)()>(&RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController::$TurnToTarget$d__33*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (RootMotion::FinalIK::AimController::$TurnToTarget$d__33::*)()>(&RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController::$TurnToTarget$d__33*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::$TurnToTarget$d__33::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimController::$TurnToTarget$d__33::*)()>(&RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController::$TurnToTarget$d__33*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::$TurnToTarget$d__33::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::AimController::$TurnToTarget$d__33::*)()>(&RootMotion::FinalIK::AimController::$TurnToTarget$d__33::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController::$TurnToTarget$d__33*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::AimController::$TurnToTarget$d__33::*)()>(&RootMotion::FinalIK::AimController::$TurnToTarget$d__33::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::AimController::$TurnToTarget$d__33*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
