// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.WebRequestQueueOperation
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequestQueueOperation : public ::Il2CppObject {
    public:
    // public UnityEngine.Networking.UnityWebRequestAsyncOperation Result
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Networking::UnityWebRequestAsyncOperation* Result;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequestAsyncOperation*) == 0x8);
    // public System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> OnComplete
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>* OnComplete;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>*) == 0x8);
    // UnityEngine.Networking.UnityWebRequest m_WebRequest
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::UnityWebRequest* m_WebRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // Creating value type constructor for type: WebRequestQueueOperation
    WebRequestQueueOperation(UnityEngine::Networking::UnityWebRequestAsyncOperation* Result_ = {}, System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>* OnComplete_ = {}, UnityEngine::Networking::UnityWebRequest* m_WebRequest_ = {}) noexcept : Result{Result_}, OnComplete{OnComplete_}, m_WebRequest{m_WebRequest_} {}
    // Get instance field reference: public UnityEngine.Networking.UnityWebRequestAsyncOperation Result
    UnityEngine::Networking::UnityWebRequestAsyncOperation*& dyn_Result();
    // Get instance field reference: public System.Action`1<UnityEngine.Networking.UnityWebRequestAsyncOperation> OnComplete
    System::Action_1<UnityEngine::Networking::UnityWebRequestAsyncOperation*>*& dyn_OnComplete();
    // Get instance field reference: UnityEngine.Networking.UnityWebRequest m_WebRequest
    UnityEngine::Networking::UnityWebRequest*& dyn_m_WebRequest();
    // public System.Boolean get_IsDone()
    // Offset: 0x19F40DC
    bool get_IsDone();
    // public System.Void .ctor(UnityEngine.Networking.UnityWebRequest request)
    // Offset: 0x19FA588
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestQueueOperation* New_ctor(UnityEngine::Networking::UnityWebRequest* request) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::WebRequestQueueOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestQueueOperation*, creationType>(request)));
    }
    // System.Void Complete(UnityEngine.Networking.UnityWebRequestAsyncOperation asyncOp)
    // Offset: 0x19FA778
    void Complete(UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);
  }; // UnityEngine.ResourceManagement.WebRequestQueueOperation
  #pragma pack(pop)
  static check_size<sizeof(WebRequestQueueOperation), 32 + sizeof(UnityEngine::Networking::UnityWebRequest*)> __UnityEngine_ResourceManagement_WebRequestQueueOperationSizeCheck;
  static_assert(sizeof(WebRequestQueueOperation) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::WebRequestQueueOperation*, "UnityEngine.ResourceManagement", "WebRequestQueueOperation");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone
// Il2CppName: get_IsDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)()>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::get_IsDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueueOperation*), "get_IsDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::WebRequestQueueOperation::*)(UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&UnityEngine::ResourceManagement::WebRequestQueueOperation::Complete)> {
  static const MethodInfo* get() {
    static auto* asyncOp = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequestAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::WebRequestQueueOperation*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncOp});
  }
};
