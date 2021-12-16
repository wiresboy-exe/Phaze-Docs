// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem
#include "UnityEngine/XR/XRDisplaySubsystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem/UnityEngine.XR.XRMirrorViewBlitDesc
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DDC058
  struct XRDisplaySubsystem::XRMirrorViewBlitDesc/*, public System::ValueType*/ {
    public:
    // private System.IntPtr displaySubsystemInstance
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr displaySubsystemInstance;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Boolean nativeBlitAvailable
    // Size: 0x1
    // Offset: 0x8
    bool nativeBlitAvailable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean nativeBlitInvalidStates
    // Size: 0x1
    // Offset: 0x9
    bool nativeBlitInvalidStates;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: nativeBlitInvalidStates and: blitParamsCount
    char __padding2[0x2] = {};
    // public System.Int32 blitParamsCount
    // Size: 0x4
    // Offset: 0xC
    int blitParamsCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: XRMirrorViewBlitDesc
    constexpr XRMirrorViewBlitDesc(System::IntPtr displaySubsystemInstance_ = {}, bool nativeBlitAvailable_ = {}, bool nativeBlitInvalidStates_ = {}, int blitParamsCount_ = {}) noexcept : displaySubsystemInstance{displaySubsystemInstance_}, nativeBlitAvailable{nativeBlitAvailable_}, nativeBlitInvalidStates{nativeBlitInvalidStates_}, blitParamsCount{blitParamsCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: private System.IntPtr displaySubsystemInstance
    System::IntPtr& dyn_displaySubsystemInstance();
    // Get instance field reference: public System.Boolean nativeBlitAvailable
    bool& dyn_nativeBlitAvailable();
    // Get instance field reference: public System.Boolean nativeBlitInvalidStates
    bool& dyn_nativeBlitInvalidStates();
    // Get instance field reference: public System.Int32 blitParamsCount
    int& dyn_blitParamsCount();
  }; // UnityEngine.XR.XRDisplaySubsystem/UnityEngine.XR.XRMirrorViewBlitDesc
  #pragma pack(pop)
  static check_size<sizeof(XRDisplaySubsystem::XRMirrorViewBlitDesc), 12 + sizeof(int)> __UnityEngine_XR_XRDisplaySubsystem_XRMirrorViewBlitDescSizeCheck;
  static_assert(sizeof(XRDisplaySubsystem::XRMirrorViewBlitDesc) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystem::XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
