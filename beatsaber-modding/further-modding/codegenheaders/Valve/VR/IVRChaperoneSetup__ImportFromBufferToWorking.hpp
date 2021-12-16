// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/Valve.VR._ImportFromBufferToWorking
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF8488
  class IVRChaperoneSetup::_ImportFromBufferToWorking : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ImportFromBufferToWorking
    _ImportFromBufferToWorking() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2052380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_ImportFromBufferToWorking* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_ImportFromBufferToWorking*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0x2052390
    bool Invoke(::Il2CppString* pBuffer, uint nImportFlags);
    // public System.IAsyncResult BeginInvoke(System.String pBuffer, System.UInt32 nImportFlags, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20527A8
    System::IAsyncResult* BeginInvoke(::Il2CppString* pBuffer, uint nImportFlags, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x2052844
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/Valve.VR._ImportFromBufferToWorking
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking*, "Valve.VR", "IVRChaperoneSetup/_ImportFromBufferToWorking");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::*)(::Il2CppString*, uint)>(&Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::Invoke)> {
  static const MethodInfo* get() {
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nImportFlags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pBuffer, nImportFlags});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::*)(::Il2CppString*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pBuffer = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nImportFlags = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pBuffer, nImportFlags, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::*)(System::IAsyncResult*)>(&Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRChaperoneSetup::_ImportFromBufferToWorking*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
