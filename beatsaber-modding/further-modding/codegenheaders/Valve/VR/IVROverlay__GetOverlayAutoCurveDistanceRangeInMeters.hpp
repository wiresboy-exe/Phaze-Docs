// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._GetOverlayAutoCurveDistanceRangeInMeters
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF89EC
  class IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayAutoCurveDistanceRangeInMeters
    _GetOverlayAutoCurveDistanceRangeInMeters() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20606F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters)
    // Offset: 0x2060704
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<float> pfMinDistanceInMeters, ByRef<float> pfMaxDistanceInMeters);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20609A0
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<float> pfMinDistanceInMeters, ByRef<float> pfMaxDistanceInMeters, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters, System.IAsyncResult result)
    // Offset: 0x2060A6C
    Valve::VR::EVROverlayError EndInvoke(ByRef<float> pfMinDistanceInMeters, ByRef<float> pfMaxDistanceInMeters, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._GetOverlayAutoCurveDistanceRangeInMeters
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*, "Valve.VR", "IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, ByRef<float>, ByRef<float>)>(&Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pfMinDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfMaxDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, ByRef<float>, ByRef<float>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pfMinDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfMaxDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::*)(ByRef<float>, ByRef<float>, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pfMinDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfMaxDistanceInMeters = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pfMinDistanceInMeters, pfMaxDistanceInMeters, result});
  }
};
