// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.CertificateHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: DFF5B8
  class CertificateHandler : public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: CertificateHandler
    CertificateHandler(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // Get instance field reference: System.IntPtr m_Ptr
    System::IntPtr& dyn_m_Ptr();
    // private System.Void Release()
    // Offset: 0x23F07D8
    void Release();
    // protected System.Boolean ValidateCertificate(System.Byte[] certificateData)
    // Offset: 0x23F0818
    bool ValidateCertificate(::Array<uint8_t>* certificateData);
    // System.Boolean ValidateCertificateNative(System.Byte[] certificateData)
    // Offset: 0x23F0820
    bool ValidateCertificateNative(::Array<uint8_t>* certificateData);
    // public System.Void Dispose()
    // Offset: 0x23F082C
    void Dispose();
  }; // UnityEngine.Networking.CertificateHandler
  #pragma pack(pop)
  static check_size<sizeof(CertificateHandler), 16 + sizeof(System::IntPtr)> __UnityEngine_Networking_CertificateHandlerSizeCheck;
  static_assert(sizeof(CertificateHandler) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::CertificateHandler*, "UnityEngine.Networking", "CertificateHandler");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::CertificateHandler::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::CertificateHandler::*)()>(&UnityEngine::Networking::CertificateHandler::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::CertificateHandler*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::CertificateHandler::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::CertificateHandler::*)(::Array<uint8_t>*)>(&UnityEngine::Networking::CertificateHandler::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* certificateData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::CertificateHandler*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificateData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::CertificateHandler::ValidateCertificateNative
// Il2CppName: ValidateCertificateNative
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Networking::CertificateHandler::*)(::Array<uint8_t>*)>(&UnityEngine::Networking::CertificateHandler::ValidateCertificateNative)> {
  static const MethodInfo* get() {
    static auto* certificateData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::CertificateHandler*), "ValidateCertificateNative", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificateData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::CertificateHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::CertificateHandler::*)()>(&UnityEngine::Networking::CertificateHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::CertificateHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
