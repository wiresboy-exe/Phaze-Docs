// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRScreenshots
#include "Valve/VR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotType
  struct EVRScreenshotType;
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
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
  // Autogenerated type: Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyType
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF9108
  class IVRScreenshots::_GetScreenshotPropertyType : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetScreenshotPropertyType
    _GetScreenshotPropertyType() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D46AF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRScreenshots::_GetScreenshotPropertyType* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRScreenshots::_GetScreenshotPropertyType*, creationType>(object, method)));
    }
    // public Valve.VR.EVRScreenshotType Invoke(System.UInt32 screenshotHandle, ref Valve.VR.EVRScreenshotError pError)
    // Offset: 0x1D46B04
    Valve::VR::EVRScreenshotType Invoke(uint screenshotHandle, ByRef<Valve::VR::EVRScreenshotError> pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, ref Valve.VR.EVRScreenshotError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D46D88
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, ByRef<Valve::VR::EVRScreenshotError> pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRScreenshotType EndInvoke(ref Valve.VR.EVRScreenshotError pError, System.IAsyncResult result)
    // Offset: 0x1D46E3C
    Valve::VR::EVRScreenshotType EndInvoke(ByRef<Valve::VR::EVRScreenshotError> pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRScreenshots/Valve.VR._GetScreenshotPropertyType
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRScreenshots::_GetScreenshotPropertyType*, "Valve.VR", "IVRScreenshots/_GetScreenshotPropertyType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotType (Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::*)(uint, ByRef<Valve::VR::EVRScreenshotError>)>(&Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::Invoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyType*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, pError});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::*)(uint, ByRef<Valve::VR::EVRScreenshotError>, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* screenshotHandle = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyType*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screenshotHandle, pError, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVRScreenshotType (Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::*)(ByRef<Valve::VR::EVRScreenshotError>, System::IAsyncResult*)>(&Valve::VR::IVRScreenshots::_GetScreenshotPropertyType::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRScreenshotError")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRScreenshots::_GetScreenshotPropertyType*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pError, result});
  }
};
