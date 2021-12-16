// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSaturationValueSlider
  class ColorSaturationValueSlider;
  // Forward declaring type: ColorHueSlider
  class ColorHueSlider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: HSVPanelController
  // [TokenAttribute] Offset: FFFFFFFF
  class HSVPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSaturationValueSlider _colorSaturationValueSlider
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSaturationValueSlider* colorSaturationValueSlider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSaturationValueSlider*) == 0x8);
    // private ColorHueSlider _colorHueSlider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorHueSlider* colorHueSlider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorHueSlider*) == 0x8);
    // private System.Action`2<UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*) == 0x8);
    // private UnityEngine.Vector3 _hsvColor
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 hsvColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: HSVPanelController
    HSVPanelController(GlobalNamespace::ColorSaturationValueSlider* colorSaturationValueSlider_ = {}, GlobalNamespace::ColorHueSlider* colorHueSlider_ = {}, System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent_ = {}, UnityEngine::Vector3 hsvColor_ = {}) noexcept : colorSaturationValueSlider{colorSaturationValueSlider_}, colorHueSlider{colorHueSlider_}, colorDidChangeEvent{colorDidChangeEvent_}, hsvColor{hsvColor_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private ColorSaturationValueSlider _colorSaturationValueSlider
    GlobalNamespace::ColorSaturationValueSlider*& dyn__colorSaturationValueSlider();
    // Get instance field reference: private ColorHueSlider _colorHueSlider
    GlobalNamespace::ColorHueSlider*& dyn__colorHueSlider();
    // Get instance field reference: private System.Action`2<UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*& dyn_colorDidChangeEvent();
    // Get instance field reference: private UnityEngine.Vector3 _hsvColor
    UnityEngine::Vector3& dyn__hsvColor();
    // public UnityEngine.Color get_color()
    // Offset: 0x1106BF4
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1106C04
    void set_color(UnityEngine::Color value);
    // public System.Void add_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x1106AAC
    void add_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0x1106B50
    void remove_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // protected System.Void Awake()
    // Offset: 0x1106CCC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1106DAC
    void OnDestroy();
    // private System.Void HandleColorSaturationOrValueDidChange(ColorSaturationValueSlider slider, UnityEngine.Vector2 colorSaturationAndValue, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x1106F04
    void HandleColorSaturationOrValueDidChange(GlobalNamespace::ColorSaturationValueSlider* slider, UnityEngine::Vector2 colorSaturationAndValue, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandleColorHueDidChange(ColorHueSlider slider, System.Single hue, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0x1106F9C
    void HandleColorHueDidChange(GlobalNamespace::ColorHueSlider* slider, float hue, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void RefreshSlidersValues()
    // Offset: 0x1106C64
    void RefreshSlidersValues();
    // private System.Void RefreshSlidersColors()
    // Offset: 0x1106C40
    void RefreshSlidersColors();
    // public System.Void .ctor()
    // Offset: 0x110702C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HSVPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HSVPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HSVPanelController*, creationType>()));
    }
  }; // HSVPanelController
  #pragma pack(pop)
  static check_size<sizeof(HSVPanelController), 48 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_HSVPanelControllerSizeCheck;
  static_assert(sizeof(HSVPanelController) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HSVPanelController*, "", "HSVPanelController");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::HSVPanelController::*)()>(&GlobalNamespace::HSVPanelController::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)(UnityEngine::Color)>(&GlobalNamespace::HSVPanelController::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::add_colorDidChangeEvent
// Il2CppName: add_colorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::HSVPanelController::add_colorDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), ::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "add_colorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::remove_colorDidChangeEvent
// Il2CppName: remove_colorDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>*)>(&GlobalNamespace::HSVPanelController::remove_colorDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), ::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "remove_colorDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)()>(&GlobalNamespace::HSVPanelController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)()>(&GlobalNamespace::HSVPanelController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::HandleColorSaturationOrValueDidChange
// Il2CppName: HandleColorSaturationOrValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)(GlobalNamespace::ColorSaturationValueSlider*, UnityEngine::Vector2, GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::HSVPanelController::HandleColorSaturationOrValueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("", "ColorSaturationValueSlider")->byval_arg;
    static auto* colorSaturationAndValue = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* colorChangeUIEventType = &::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "HandleColorSaturationOrValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, colorSaturationAndValue, colorChangeUIEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::HandleColorHueDidChange
// Il2CppName: HandleColorHueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)(GlobalNamespace::ColorHueSlider*, float, GlobalNamespace::ColorChangeUIEventType)>(&GlobalNamespace::HSVPanelController::HandleColorHueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("", "ColorHueSlider")->byval_arg;
    static auto* hue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* colorChangeUIEventType = &::il2cpp_utils::GetClassFromName("", "ColorChangeUIEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "HandleColorHueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, hue, colorChangeUIEventType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::RefreshSlidersValues
// Il2CppName: RefreshSlidersValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)()>(&GlobalNamespace::HSVPanelController::RefreshSlidersValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "RefreshSlidersValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::RefreshSlidersColors
// Il2CppName: RefreshSlidersColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HSVPanelController::*)()>(&GlobalNamespace::HSVPanelController::RefreshSlidersColors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HSVPanelController*), "RefreshSlidersColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HSVPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!