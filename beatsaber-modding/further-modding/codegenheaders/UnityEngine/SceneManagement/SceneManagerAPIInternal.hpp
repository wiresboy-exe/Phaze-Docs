// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneParameters
  struct LoadSceneParameters;
  // Forward declaring type: UnloadSceneOptions
  struct UnloadSceneOptions;
}
// Completed forward declares
// Type namespace: UnityEngine.SceneManagement
namespace UnityEngine::SceneManagement {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SceneManagement.SceneManagerAPIInternal
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: DB6418
  // [NativeHeaderAttribute] Offset: DB6418
  class SceneManagerAPIInternal : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SceneManagerAPIInternal
    SceneManagerAPIInternal() noexcept {}
    // static public UnityEngine.AsyncOperation LoadSceneAsyncNameIndexInternal(System.String sceneName, System.Int32 sceneBuildIndex, UnityEngine.SceneManagement.LoadSceneParameters parameters, System.Boolean mustCompleteNextFrame)
    // Offset: 0x1C78D44
    static UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal(::Il2CppString* sceneName, int sceneBuildIndex, UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame);
    // static public UnityEngine.AsyncOperation UnloadSceneNameIndexInternal(System.String sceneName, System.Int32 sceneBuildIndex, System.Boolean immediately, UnityEngine.SceneManagement.UnloadSceneOptions options, out System.Boolean outSuccess)
    // Offset: 0x1C78E90
    static UnityEngine::AsyncOperation* UnloadSceneNameIndexInternal(::Il2CppString* sceneName, int sceneBuildIndex, bool immediately, UnityEngine::SceneManagement::UnloadSceneOptions options, ByRef<bool> outSuccess);
    // static private UnityEngine.AsyncOperation LoadSceneAsyncNameIndexInternal_Injected(System.String sceneName, System.Int32 sceneBuildIndex, ref UnityEngine.SceneManagement.LoadSceneParameters parameters, System.Boolean mustCompleteNextFrame)
    // Offset: 0x1C79C40
    static UnityEngine::AsyncOperation* LoadSceneAsyncNameIndexInternal_Injected(::Il2CppString* sceneName, int sceneBuildIndex, ByRef<UnityEngine::SceneManagement::LoadSceneParameters> parameters, bool mustCompleteNextFrame);
  }; // UnityEngine.SceneManagement.SceneManagerAPIInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SceneManagement::SceneManagerAPIInternal*, "UnityEngine.SceneManagement", "SceneManagerAPIInternal");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal
// Il2CppName: LoadSceneAsyncNameIndexInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AsyncOperation* (*)(::Il2CppString*, int, UnityEngine::SceneManagement::LoadSceneParameters, bool)>(&UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sceneBuildIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneParameters")->byval_arg;
    static auto* mustCompleteNextFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPIInternal*), "LoadSceneAsyncNameIndexInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal
// Il2CppName: UnloadSceneNameIndexInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AsyncOperation* (*)(::Il2CppString*, int, bool, UnityEngine::SceneManagement::UnloadSceneOptions, ByRef<bool>)>(&UnityEngine::SceneManagement::SceneManagerAPIInternal::UnloadSceneNameIndexInternal)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sceneBuildIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "UnloadSceneOptions")->byval_arg;
    static auto* outSuccess = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPIInternal*), "UnloadSceneNameIndexInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, sceneBuildIndex, immediately, options, outSuccess});
  }
};
// Writing MetadataGetter for method: UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected
// Il2CppName: LoadSceneAsyncNameIndexInternal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AsyncOperation* (*)(::Il2CppString*, int, ByRef<UnityEngine::SceneManagement::LoadSceneParameters>, bool)>(&UnityEngine::SceneManagement::SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal_Injected)> {
  static const MethodInfo* get() {
    static auto* sceneName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sceneBuildIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("UnityEngine.SceneManagement", "LoadSceneParameters")->this_arg;
    static auto* mustCompleteNextFrame = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SceneManagement::SceneManagerAPIInternal*), "LoadSceneAsyncNameIndexInternal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneName, sceneBuildIndex, parameters, mustCompleteNextFrame});
  }
};
