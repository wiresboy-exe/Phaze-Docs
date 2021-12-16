// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: TitleViewController
  class TitleViewController;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ScreenSystem
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenSystem : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.Screen _mainScreen
    // Size: 0x8
    // Offset: 0x18
    HMUI::Screen* mainScreen;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // private HMUI.Screen _leftScreen
    // Size: 0x8
    // Offset: 0x20
    HMUI::Screen* leftScreen;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // private HMUI.Screen _rightScreen
    // Size: 0x8
    // Offset: 0x28
    HMUI::Screen* rightScreen;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // private HMUI.Screen _bottomScreen
    // Size: 0x8
    // Offset: 0x30
    HMUI::Screen* bottomScreen;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // private HMUI.Screen _topScreen
    // Size: 0x8
    // Offset: 0x38
    HMUI::Screen* topScreen;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // private UnityEngine.UI.Button _backButton
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::UI::Button* backButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private HMUI.TitleViewController _titleViewController
    // Size: 0x8
    // Offset: 0x48
    HMUI::TitleViewController* titleViewController;
    // Field size check
    static_assert(sizeof(HMUI::TitleViewController*) == 0x8);
    // private System.Action backButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* backButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _backButtonIsVisible
    // Size: 0x1
    // Offset: 0x58
    bool backButtonIsVisible;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: backButtonIsVisible and: buttonBinder
    char __padding8[0x7] = {};
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: ScreenSystem
    ScreenSystem(HMUI::Screen* mainScreen_ = {}, HMUI::Screen* leftScreen_ = {}, HMUI::Screen* rightScreen_ = {}, HMUI::Screen* bottomScreen_ = {}, HMUI::Screen* topScreen_ = {}, UnityEngine::UI::Button* backButton_ = {}, HMUI::TitleViewController* titleViewController_ = {}, System::Action* backButtonWasPressedEvent_ = {}, bool backButtonIsVisible_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : mainScreen{mainScreen_}, leftScreen{leftScreen_}, rightScreen{rightScreen_}, bottomScreen{bottomScreen_}, topScreen{topScreen_}, backButton{backButton_}, titleViewController{titleViewController_}, backButtonWasPressedEvent{backButtonWasPressedEvent_}, backButtonIsVisible{backButtonIsVisible_}, buttonBinder{buttonBinder_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HMUI.Screen _mainScreen
    HMUI::Screen*& dyn__mainScreen();
    // Get instance field reference: private HMUI.Screen _leftScreen
    HMUI::Screen*& dyn__leftScreen();
    // Get instance field reference: private HMUI.Screen _rightScreen
    HMUI::Screen*& dyn__rightScreen();
    // Get instance field reference: private HMUI.Screen _bottomScreen
    HMUI::Screen*& dyn__bottomScreen();
    // Get instance field reference: private HMUI.Screen _topScreen
    HMUI::Screen*& dyn__topScreen();
    // Get instance field reference: private UnityEngine.UI.Button _backButton
    UnityEngine::UI::Button*& dyn__backButton();
    // Get instance field reference: private HMUI.TitleViewController _titleViewController
    HMUI::TitleViewController*& dyn__titleViewController();
    // Get instance field reference: private System.Action backButtonWasPressedEvent
    System::Action*& dyn_backButtonWasPressedEvent();
    // Get instance field reference: private System.Boolean _backButtonIsVisible
    bool& dyn__backButtonIsVisible();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // public HMUI.TitleViewController get_titleViewController()
    // Offset: 0x131358C
    HMUI::TitleViewController* get_titleViewController();
    // public HMUI.Screen get_mainScreen()
    // Offset: 0x1313594
    HMUI::Screen* get_mainScreen();
    // public HMUI.Screen get_leftScreen()
    // Offset: 0x131359C
    HMUI::Screen* get_leftScreen();
    // public HMUI.Screen get_rightScreen()
    // Offset: 0x13135A4
    HMUI::Screen* get_rightScreen();
    // public HMUI.Screen get_bottomScreen()
    // Offset: 0x13135AC
    HMUI::Screen* get_bottomScreen();
    // public HMUI.Screen get_topScreen()
    // Offset: 0x13135B4
    HMUI::Screen* get_topScreen();
    // public System.Void add_backButtonWasPressedEvent(System.Action value)
    // Offset: 0x13135BC
    void add_backButtonWasPressedEvent(System::Action* value);
    // public System.Void remove_backButtonWasPressedEvent(System.Action value)
    // Offset: 0x1313660
    void remove_backButtonWasPressedEvent(System::Action* value);
    // private System.Void Awake()
    // Offset: 0x1313704
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x13137B4
    void OnDestroy();
    // public System.Void SetBackButton(System.Boolean visible, System.Boolean animated)
    // Offset: 0x13137D0
    void SetBackButton(bool visible, bool animated);
    // private System.Void <Awake>b__24_0()
    // Offset: 0x1313814
    void $Awake$b__24_0();
    // public System.Void .ctor()
    // Offset: 0x131380C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ScreenSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenSystem*, creationType>()));
    }
  }; // HMUI.ScreenSystem
  #pragma pack(pop)
  static check_size<sizeof(ScreenSystem), 96 + sizeof(HMUI::ButtonBinder*)> __HMUI_ScreenSystemSizeCheck;
  static_assert(sizeof(ScreenSystem) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScreenSystem*, "HMUI", "ScreenSystem");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::ScreenSystem::get_titleViewController
// Il2CppName: get_titleViewController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TitleViewController* (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::get_titleViewController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "get_titleViewController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::get_mainScreen
// Il2CppName: get_mainScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::Screen* (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::get_mainScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "get_mainScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::get_leftScreen
// Il2CppName: get_leftScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::Screen* (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::get_leftScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "get_leftScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::get_rightScreen
// Il2CppName: get_rightScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::Screen* (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::get_rightScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "get_rightScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::get_bottomScreen
// Il2CppName: get_bottomScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::Screen* (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::get_bottomScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "get_bottomScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::get_topScreen
// Il2CppName: get_topScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::Screen* (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::get_topScreen)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "get_topScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::add_backButtonWasPressedEvent
// Il2CppName: add_backButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenSystem::*)(System::Action*)>(&HMUI::ScreenSystem::add_backButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "add_backButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::remove_backButtonWasPressedEvent
// Il2CppName: remove_backButtonWasPressedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenSystem::*)(System::Action*)>(&HMUI::ScreenSystem::remove_backButtonWasPressedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "remove_backButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::SetBackButton
// Il2CppName: SetBackButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenSystem::*)(bool, bool)>(&HMUI::ScreenSystem::SetBackButton)> {
  static const MethodInfo* get() {
    static auto* visible = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* animated = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "SetBackButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visible, animated});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::$Awake$b__24_0
// Il2CppName: <Awake>b__24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::ScreenSystem::*)()>(&HMUI::ScreenSystem::$Awake$b__24_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::ScreenSystem*), "<Awake>b__24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::ScreenSystem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!