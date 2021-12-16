// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
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
  // Forward declaring type: EVREye
  struct EVREye;
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
  // Autogenerated type: Valve.VR.IVRExtendedDisplay/Valve.VR._GetEyeOutputViewport
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF7EE8
  class IVRExtendedDisplay::_GetEyeOutputViewport : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetEyeOutputViewport
    _GetEyeOutputViewport() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x205CAC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetEyeOutputViewport* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetEyeOutputViewport*, creationType>(object, method)));
    }
    // public System.Void Invoke(Valve.VR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x205CAD8
    void Invoke(Valve::VR::EVREye eEye, ByRef<uint> pnX, ByRef<uint> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x205CDC8
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, ByRef<uint> pnX, ByRef<uint> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x205CECC
    void EndInvoke(ByRef<uint> pnX, ByRef<uint> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight, System::IAsyncResult* result);
  }; // Valve.VR.IVRExtendedDisplay/Valve.VR._GetEyeOutputViewport
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport*, "Valve.VR", "IVRExtendedDisplay/_GetEyeOutputViewport");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::*)(Valve::VR::EVREye, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<uint>)>(&Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::*)(Valve::VR::EVREye, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<uint>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pnX, pnY, pnWidth, pnHeight, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::*)(ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<uint>, System::IAsyncResult*)>(&Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetEyeOutputViewport*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight, result});
  }
};
