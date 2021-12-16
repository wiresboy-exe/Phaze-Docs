// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
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
  // Autogenerated type: Valve.VR.IVRCompositor/Valve.VR._GetVulkanDeviceExtensionsRequired
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF87BC
  class IVRCompositor::_GetVulkanDeviceExtensionsRequired : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetVulkanDeviceExtensionsRequired
    _GetVulkanDeviceExtensionsRequired() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2058738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetVulkanDeviceExtensionsRequired* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetVulkanDeviceExtensionsRequired*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.IntPtr pPhysicalDevice, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x2058748
    uint Invoke(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pPhysicalDevice, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20589E4
    System::IAsyncResult* BeginInvoke(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x2058A9C
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/Valve.VR._GetVulkanDeviceExtensionsRequired
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*, "Valve.VR", "IVRCompositor/_GetVulkanDeviceExtensionsRequired");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::*)(System::IntPtr, System::Text::StringBuilder*, uint)>(&Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::Invoke)> {
  static const MethodInfo* get() {
    static auto* pPhysicalDevice = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pPhysicalDevice, pchValue, unBufferSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::*)(System::IntPtr, System::Text::StringBuilder*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pPhysicalDevice = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pPhysicalDevice, pchValue, unBufferSize, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::*)(System::IAsyncResult*)>(&Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
