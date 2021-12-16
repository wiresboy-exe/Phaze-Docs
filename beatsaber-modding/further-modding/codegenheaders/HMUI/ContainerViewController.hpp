// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: Screen
  class Screen;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ContainerViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class ContainerViewController : public HMUI::ViewController {
    public:
    // Nested type: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15
    class $AddViewControllerCoroutine$d__15;
    // Nested type: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17
    class $RemoveViewControllersCoroutine$d__17;
    // [NullAllowed] Offset: 0xE1BDDC
    // private UnityEngine.RectTransform _controllersContainer
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::RectTransform* controllersContainer;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // protected System.Collections.Generic.List`1<HMUI.ViewController> _viewControllers
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<HMUI::ViewController*>*) == 0x8);
    // Creating value type constructor for type: ContainerViewController
    ContainerViewController(UnityEngine::RectTransform* controllersContainer_ = {}, System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers_ = {}) noexcept : controllersContainer{controllersContainer_}, viewControllers{viewControllers_} {}
    // Get instance field reference: private UnityEngine.RectTransform _controllersContainer
    UnityEngine::RectTransform*& dyn__controllersContainer();
    // Get instance field reference: protected System.Collections.Generic.List`1<HMUI.ViewController> _viewControllers
    System::Collections::Generic::List_1<HMUI::ViewController*>*& dyn__viewControllers();
    // public UnityEngine.RectTransform get_controllersContainer()
    // Offset: 0x136E5CC
    UnityEngine::RectTransform* get_controllersContainer();
    // public System.Collections.Generic.List`1<HMUI.ViewController> get_viewControllers()
    // Offset: 0x136E678
    System::Collections::Generic::List_1<HMUI::ViewController*>* get_viewControllers();
    // protected System.Void LayoutViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers)
    // Offset: 0xFFFFFFFF
    void LayoutViewControllers(System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers);
    // public System.Void ClearChildViewControllers()
    // Offset: 0x136EA98
    void ClearChildViewControllers();
    // public System.Void SetChildViewController(HMUI.ViewController viewController)
    // Offset: 0x136EBC0
    void SetChildViewController(HMUI::ViewController* viewController);
    // public System.Void SetChildViewControllers(params HMUI.ViewController[] viewControllers)
    // Offset: 0x136EC70
    void SetChildViewControllers(::Array<HMUI::ViewController*>* viewControllers);
    // Creating initializer_list -> params proxy for: System.Void SetChildViewControllers(params HMUI.ViewController[] viewControllers)
    void SetChildViewControllers(std::initializer_list<HMUI::ViewController*> viewControllers);
    // Creating TArgs -> initializer_list proxy for: System.Void SetChildViewControllers(params HMUI.ViewController[] viewControllers)
    template<class ...TParams>
    void SetChildViewControllers(TParams&&... viewControllers) {
      SetChildViewControllers({viewControllers...});
    }
    // protected System.Void AddViewController(HMUI.ViewController viewController, System.Action finishedCallback, System.Action`2<System.Single,HMUI.ViewController[]> animationLayouter, System.Boolean immediately)
    // Offset: 0x136EDCC
    void AddViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, System::Action_2<float, ::Array<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // private System.Collections.IEnumerator AddViewControllerCoroutine(HMUI.ViewController newViewController, System.Action finishedCallback, System.Action`2<System.Single,HMUI.ViewController[]> animationLayouter, System.Boolean immediately)
    // Offset: 0x136EEE0
    System::Collections::IEnumerator* AddViewControllerCoroutine(HMUI::ViewController* newViewController, System::Action* finishedCallback, System::Action_2<float, ::Array<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // protected System.Void RemoveViewControllers(HMUI.ViewController[] viewControllers, System.Action finishedCallback, System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter, System.Boolean immediately)
    // Offset: 0x136EFA8
    void RemoveViewControllers(::Array<HMUI::ViewController*>* viewControllers, System::Action* finishedCallback, System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // private System.Collections.IEnumerator RemoveViewControllersCoroutine(HMUI.ViewController[] viewControllersToRemove, System.Action finishedCallback, System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter, System.Boolean immediately)
    // Offset: 0x136F014
    System::Collections::IEnumerator* RemoveViewControllersCoroutine(::Array<HMUI::ViewController*>* viewControllersToRemove, System::Action* finishedCallback, System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // private System.Single[] GetNewXPositionsForViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers, System.Int32 exludeFromEndCount)
    // Offset: 0x136F0DC
    ::Array<float>* GetNewXPositionsForViewControllers(System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers, int exludeFromEndCount);
    // protected System.Void .ctor()
    // Offset: 0x136F310
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContainerViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ContainerViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContainerViewController*, creationType>()));
    }
    // public override System.Void __Init(HMUI.Screen screen, HMUI.ViewController parentViewController, HMUI.ContainerViewController containerViewController)
    // Offset: 0x136E680
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::__Init(HMUI.Screen screen, HMUI.ViewController parentViewController, HMUI.ContainerViewController containerViewController)
    void __Init(HMUI::Screen* screen, HMUI::ViewController* parentViewController, HMUI::ContainerViewController* containerViewController);
    // public override System.Void __Activate(System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x136E760
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::__Activate(System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void __Activate(bool addedToHierarchy, bool screenSystemEnabling);
    // public override System.Void __Deactivate(System.Boolean removedFromHierarchy, System.Boolean deactivateGameObject, System.Boolean screenSystemDisabling)
    // Offset: 0x136E89C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::__Deactivate(System.Boolean removedFromHierarchy, System.Boolean deactivateGameObject, System.Boolean screenSystemDisabling)
    void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);
    // public override System.Void DeactivateGameObject()
    // Offset: 0x136E984
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DeactivateGameObject()
    void DeactivateGameObject();
  }; // HMUI.ContainerViewController
  #pragma pack(pop)
  static check_size<sizeof(ContainerViewController), 120 + sizeof(System::Collections::Generic::List_1<HMUI::ViewController*>*)> __HMUI_ContainerViewControllerSizeCheck;
  static_assert(sizeof(ContainerViewController) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ContainerViewController*, "HMUI", "ContainerViewController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ContainerViewController::get_controllersContainer
// Il2CppName: get_controllersContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform* (HMUI::ContainerViewController::*)()>(&HMUI::ContainerViewController::get_controllersContainer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "get_controllersContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::get_viewControllers
// Il2CppName: get_viewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<HMUI::ViewController*>* (HMUI::ContainerViewController::*)()>(&HMUI::ContainerViewController::get_viewControllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "get_viewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::LayoutViewControllers
// Il2CppName: LayoutViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(System::Collections::Generic::List_1<HMUI::ViewController*>*)>(&HMUI::ContainerViewController::LayoutViewControllers)> {
  static const MethodInfo* get() {
    static auto* viewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "LayoutViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllers});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::ClearChildViewControllers
// Il2CppName: ClearChildViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)()>(&HMUI::ContainerViewController::ClearChildViewControllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "ClearChildViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::SetChildViewController
// Il2CppName: SetChildViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(HMUI::ViewController*)>(&HMUI::ContainerViewController::SetChildViewController)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "SetChildViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::SetChildViewControllers
// Il2CppName: SetChildViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(::Array<HMUI::ViewController*>*)>(&HMUI::ContainerViewController::SetChildViewControllers)> {
  static const MethodInfo* get() {
    static auto* viewControllers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "SetChildViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllers});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::AddViewController
// Il2CppName: AddViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(HMUI::ViewController*, System::Action*, System::Action_2<float, ::Array<HMUI::ViewController*>*>*, bool)>(&HMUI::ContainerViewController::AddViewController)> {
  static const MethodInfo* get() {
    static auto* viewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* animationLayouter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)})->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "AddViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewController, finishedCallback, animationLayouter, immediately});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::AddViewControllerCoroutine
// Il2CppName: AddViewControllerCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::ContainerViewController::*)(HMUI::ViewController*, System::Action*, System::Action_2<float, ::Array<HMUI::ViewController*>*>*, bool)>(&HMUI::ContainerViewController::AddViewControllerCoroutine)> {
  static const MethodInfo* get() {
    static auto* newViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* animationLayouter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)})->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "AddViewControllerCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newViewController, finishedCallback, animationLayouter, immediately});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::RemoveViewControllers
// Il2CppName: RemoveViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(::Array<HMUI::ViewController*>*, System::Action*, System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>*, bool)>(&HMUI::ContainerViewController::RemoveViewControllers)> {
  static const MethodInfo* get() {
    static auto* viewControllers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* animationLayouter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})})->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "RemoveViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllers, finishedCallback, animationLayouter, immediately});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::RemoveViewControllersCoroutine
// Il2CppName: RemoveViewControllersCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (HMUI::ContainerViewController::*)(::Array<HMUI::ViewController*>*, System::Action*, System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>*, bool)>(&HMUI::ContainerViewController::RemoveViewControllersCoroutine)> {
  static const MethodInfo* get() {
    static auto* viewControllersToRemove = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1)->byval_arg;
    static auto* finishedCallback = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* animationLayouter = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single"), il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("HMUI", "ViewController"), 1), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})})->byval_arg;
    static auto* immediately = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "RemoveViewControllersCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllersToRemove, finishedCallback, animationLayouter, immediately});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::GetNewXPositionsForViewControllers
// Il2CppName: GetNewXPositionsForViewControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<float>* (HMUI::ContainerViewController::*)(System::Collections::Generic::List_1<HMUI::ViewController*>*, int)>(&HMUI::ContainerViewController::GetNewXPositionsForViewControllers)> {
  static const MethodInfo* get() {
    static auto* viewControllers = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "ViewController")})->byval_arg;
    static auto* exludeFromEndCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "GetNewXPositionsForViewControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{viewControllers, exludeFromEndCount});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::ContainerViewController::__Init
// Il2CppName: __Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(HMUI::Screen*, HMUI::ViewController*, HMUI::ContainerViewController*)>(&HMUI::ContainerViewController::__Init)> {
  static const MethodInfo* get() {
    static auto* screen = &::il2cpp_utils::GetClassFromName("HMUI", "Screen")->byval_arg;
    static auto* parentViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ViewController")->byval_arg;
    static auto* containerViewController = &::il2cpp_utils::GetClassFromName("HMUI", "ContainerViewController")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "__Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{screen, parentViewController, containerViewController});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::__Activate
// Il2CppName: __Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(bool, bool)>(&HMUI::ContainerViewController::__Activate)> {
  static const MethodInfo* get() {
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "__Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::__Deactivate
// Il2CppName: __Deactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)(bool, bool, bool)>(&HMUI::ContainerViewController::__Deactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* deactivateGameObject = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "__Deactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, deactivateGameObject, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: HMUI::ContainerViewController::DeactivateGameObject
// Il2CppName: DeactivateGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ContainerViewController::*)()>(&HMUI::ContainerViewController::DeactivateGameObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ContainerViewController*), "DeactivateGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};