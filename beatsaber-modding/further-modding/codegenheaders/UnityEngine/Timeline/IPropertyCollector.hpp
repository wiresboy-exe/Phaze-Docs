// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IPropertyCollector
  // [TokenAttribute] Offset: FFFFFFFF
  class IPropertyCollector {
    public:
    // Creating value type constructor for type: IPropertyCollector
    IPropertyCollector() noexcept {}
    // public System.Void PushActiveGameObject(UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFF
    void PushActiveGameObject(UnityEngine::GameObject* gameObject);
    // public System.Void PopActiveGameObject()
    // Offset: 0xFFFFFFFF
    void PopActiveGameObject();
    // public System.Void AddFromClip(UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    void AddFromClip(UnityEngine::AnimationClip* clip);
    // public System.Void AddFromClips(System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationClip> clips)
    // Offset: 0xFFFFFFFF
    void AddFromClips(System::Collections::Generic::IEnumerable_1<UnityEngine::AnimationClip*>* clips);
    // public System.Void AddFromName(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AddFromName(::Il2CppString* name) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IPropertyCollector::AddFromName");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddFromName", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(name)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___generic__method, name);
    }
    // public System.Void AddFromName(System.String name)
    // Offset: 0xFFFFFFFF
    void AddFromName(::Il2CppString* name);
    // public System.Void AddFromClip(UnityEngine.GameObject obj, UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    void AddFromClip(UnityEngine::GameObject* obj, UnityEngine::AnimationClip* clip);
    // public System.Void AddFromClips(UnityEngine.GameObject obj, System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationClip> clips)
    // Offset: 0xFFFFFFFF
    void AddFromClips(UnityEngine::GameObject* obj, System::Collections::Generic::IEnumerable_1<UnityEngine::AnimationClip*>* clips);
    // public System.Void AddFromName(UnityEngine.GameObject obj, System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AddFromName(UnityEngine::GameObject* obj, ::Il2CppString* name) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IPropertyCollector::AddFromName");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "AddFromName", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj), ::il2cpp_utils::ExtractType(name)})));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___generic__method, obj, name);
    }
    // public System.Void AddFromName(UnityEngine.GameObject obj, System.String name)
    // Offset: 0xFFFFFFFF
    void AddFromName(UnityEngine::GameObject* obj, ::Il2CppString* name);
    // public System.Void AddFromName(UnityEngine.Component component, System.String name)
    // Offset: 0xFFFFFFFF
    void AddFromName(UnityEngine::Component* component, ::Il2CppString* name);
    // public System.Void AddFromComponent(UnityEngine.GameObject obj, UnityEngine.Component component)
    // Offset: 0xFFFFFFFF
    void AddFromComponent(UnityEngine::GameObject* obj, UnityEngine::Component* component);
    // public System.Void AddObjectProperties(UnityEngine.Object obj, UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    void AddObjectProperties(UnityEngine::Object* obj, UnityEngine::AnimationClip* clip);
  }; // UnityEngine.Timeline.IPropertyCollector
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IPropertyCollector*, "UnityEngine.Timeline", "IPropertyCollector");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::PushActiveGameObject
// Il2CppName: PushActiveGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::GameObject*)>(&UnityEngine::Timeline::IPropertyCollector::PushActiveGameObject)> {
  static const MethodInfo* get() {
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "PushActiveGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameObject});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::PopActiveGameObject
// Il2CppName: PopActiveGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)()>(&UnityEngine::Timeline::IPropertyCollector::PopActiveGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "PopActiveGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromClip
// Il2CppName: AddFromClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::AnimationClip*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromClip)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromClips
// Il2CppName: AddFromClips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::AnimationClip*>*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromClips)> {
  static const MethodInfo* get() {
    static auto* clips = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromClips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clips});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromName
// Il2CppName: AddFromName
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromName
// Il2CppName: AddFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(::Il2CppString*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromClip
// Il2CppName: AddFromClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::GameObject*, UnityEngine::AnimationClip*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromClip)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromClips
// Il2CppName: AddFromClips
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<UnityEngine::AnimationClip*>*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromClips)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* clips = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromClips", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, clips});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromName
// Il2CppName: AddFromName
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromName
// Il2CppName: AddFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::GameObject*, ::Il2CppString*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromName)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromName
// Il2CppName: AddFromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::Component*, ::Il2CppString*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromName)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddFromComponent
// Il2CppName: AddFromComponent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::GameObject*, UnityEngine::Component*)>(&UnityEngine::Timeline::IPropertyCollector::AddFromComponent)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* component = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddFromComponent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, component});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IPropertyCollector::AddObjectProperties
// Il2CppName: AddObjectProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::IPropertyCollector::*)(UnityEngine::Object*, UnityEngine::AnimationClip*)>(&UnityEngine::Timeline::IPropertyCollector::AddObjectProperties)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IPropertyCollector*), "AddObjectProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, clip});
  }
};
