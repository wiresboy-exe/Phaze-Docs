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
  // Autogenerated type: Valve.VR.IVRExtendedDisplay/Valve.VR._GetWindowBounds
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF7ED4
  class IVRExtendedDisplay::_GetWindowBounds : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWindowBounds
    _GetWindowBounds() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x205CEF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetWindowBounds* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRExtendedDisplay::_GetWindowBounds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetWindowBounds*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x205CF08
    void Invoke(ByRef<int> pnX, ByRef<int> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x205D1A8
    System::IAsyncResult* BeginInvoke(ByRef<int> pnX, ByRef<int> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x205D294
    void EndInvoke(ByRef<int> pnX, ByRef<int> pnY, ByRef<uint> pnWidth, ByRef<uint> pnHeight, System::IAsyncResult* result);
  }; // Valve.VR.IVRExtendedDisplay/Valve.VR._GetWindowBounds
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay::_GetWindowBounds*, "Valve.VR", "IVRExtendedDisplay/_GetWindowBounds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetWindowBounds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetWindowBounds::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRExtendedDisplay::_GetWindowBounds::*)(ByRef<int>, ByRef<int>, ByRef<uint>, ByRef<uint>)>(&Valve::VR::IVRExtendedDisplay::_GetWindowBounds::Invoke)> {
  static const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetWindowBounds*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetWindowBounds::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRExtendedDisplay::_GetWindowBounds::*)(ByRef<int>, ByRef<int>, ByRef<uint>, ByRef<uint>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRExtendedDisplay::_GetWindowBounds::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetWindowBounds*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRExtendedDisplay::_GetWindowBounds::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVRExtendedDisplay::_GetWindowBounds::*)(ByRef<int>, ByRef<int>, ByRef<uint>, ByRef<uint>, System::IAsyncResult*)>(&Valve::VR::IVRExtendedDisplay::_GetWindowBounds::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRExtendedDisplay::_GetWindowBounds*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight, result});
  }
};
