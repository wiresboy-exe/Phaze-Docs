// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IPrefabInstantiator
  // [TokenAttribute] Offset: FFFFFFFF
  class IPrefabInstantiator {
    public:
    // Creating value type constructor for type: IPrefabInstantiator
    IPrefabInstantiator() noexcept {}
    // public System.Type get_ArgumentTarget()
    // Offset: 0xFFFFFFFF
    System::Type* get_ArgumentTarget();
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> get_ExtraArguments()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* get_ExtraArguments();
    // public Zenject.GameObjectCreationParameters get_GameObjectCreationParameters()
    // Offset: 0xFFFFFFFF
    Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters();
    // public UnityEngine.GameObject Instantiate(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction)
    // Offset: 0xFFFFFFFF
    UnityEngine::GameObject* Instantiate(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, ByRef<System::Action*> injectAction);
    // public UnityEngine.Object GetPrefab()
    // Offset: 0xFFFFFFFF
    UnityEngine::Object* GetPrefab();
  }; // Zenject.IPrefabInstantiator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IPrefabInstantiator*, "Zenject", "IPrefabInstantiator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::get_ArgumentTarget
// Il2CppName: get_ArgumentTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::get_ArgumentTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "get_ArgumentTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::get_ExtraArguments
// Il2CppName: get_ExtraArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<Zenject::TypeValuePair>* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::get_ExtraArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "get_ExtraArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::get_GameObjectCreationParameters
// Il2CppName: get_GameObjectCreationParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Zenject::GameObjectCreationParameters* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::get_GameObjectCreationParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "get_GameObjectCreationParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::Instantiate
// Il2CppName: Instantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (Zenject::IPrefabInstantiator::*)(Zenject::InjectContext*, System::Collections::Generic::List_1<Zenject::TypeValuePair>*, ByRef<System::Action*>)>(&Zenject::IPrefabInstantiator::Instantiate)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    static auto* args = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Zenject", "TypeValuePair")})->byval_arg;
    static auto* injectAction = &::il2cpp_utils::GetClassFromName("System", "Action")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "Instantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, args, injectAction});
  }
};
// Writing MetadataGetter for method: Zenject::IPrefabInstantiator::GetPrefab
// Il2CppName: GetPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object* (Zenject::IPrefabInstantiator::*)()>(&Zenject::IPrefabInstantiator::GetPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::IPrefabInstantiator*), "GetPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
