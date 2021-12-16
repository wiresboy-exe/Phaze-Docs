// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.TextSlider
#include "HMUI/TextSlider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.RangeValuesTextSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class RangeValuesTextSlider : public HMUI::TextSlider {
    public:
    // private System.Single _minValue
    // Size: 0x4
    // Offset: 0x13C
    float minValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxValue
    // Size: 0x4
    // Offset: 0x140
    float maxValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NullAllowed] Offset: 0xE1BB9C
    // private UnityEngine.UI.Button _decButton
    // Size: 0x8
    // Offset: 0x148
    UnityEngine::UI::Button* decButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [NullAllowed] Offset: 0xE1BBD4
    // private UnityEngine.UI.Button _incButton
    // Size: 0x8
    // Offset: 0x150
    UnityEngine::UI::Button* incButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private System.Action`2<HMUI.RangeValuesTextSlider,System.Single> valueDidChangeEvent
    // Size: 0x8
    // Offset: 0x158
    System::Action_2<HMUI::RangeValuesTextSlider*, float>* valueDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<HMUI::RangeValuesTextSlider*, float>*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x160
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // Creating value type constructor for type: RangeValuesTextSlider
    RangeValuesTextSlider(float minValue_ = {}, float maxValue_ = {}, UnityEngine::UI::Button* decButton_ = {}, UnityEngine::UI::Button* incButton_ = {}, System::Action_2<HMUI::RangeValuesTextSlider*, float>* valueDidChangeEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}) noexcept : minValue{minValue_}, maxValue{maxValue_}, decButton{decButton_}, incButton{incButton_}, valueDidChangeEvent{valueDidChangeEvent_}, buttonBinder{buttonBinder_} {}
    // Get instance field reference: private System.Single _minValue
    float& dyn__minValue();
    // Get instance field reference: private System.Single _maxValue
    float& dyn__maxValue();
    // Get instance field reference: private UnityEngine.UI.Button _decButton
    UnityEngine::UI::Button*& dyn__decButton();
    // Get instance field reference: private UnityEngine.UI.Button _incButton
    UnityEngine::UI::Button*& dyn__incButton();
    // Get instance field reference: private System.Action`2<HMUI.RangeValuesTextSlider,System.Single> valueDidChangeEvent
    System::Action_2<HMUI::RangeValuesTextSlider*, float>*& dyn_valueDidChangeEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // public System.Single get_minValue()
    // Offset: 0x1311BB0
    float get_minValue();
    // public System.Void set_minValue(System.Single value)
    // Offset: 0x1311BB8
    void set_minValue(float value);
    // public System.Single get_maxValue()
    // Offset: 0x1311C40
    float get_maxValue();
    // public System.Void set_maxValue(System.Single value)
    // Offset: 0x1311C48
    void set_maxValue(float value);
    // public System.Single get_value()
    // Offset: 0x1311D0C
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0x1311CD0
    void set_value(float value);
    // public System.Void add_valueDidChangeEvent(System.Action`2<HMUI.RangeValuesTextSlider,System.Single> value)
    // Offset: 0x1311E64
    void add_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider*, float>* value);
    // public System.Void remove_valueDidChangeEvent(System.Action`2<HMUI.RangeValuesTextSlider,System.Single> value)
    // Offset: 0x1311F0C
    void remove_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider*, float>* value);
    // private System.Void HandleNormalizedValueDidChange(HMUI.TextSlider slider, System.Single normalizedValue)
    // Offset: 0x1312360
    void HandleNormalizedValueDidChange(HMUI::TextSlider* slider, float normalizedValue);
    // public System.Single ConvertFromNormalizedValue(System.Single normalizedValue)
    // Offset: 0x1311E4C
    float ConvertFromNormalizedValue(float normalizedValue);
    // public System.Single NormalizeValue(System.Single rangeValue)
    // Offset: 0x1311CEC
    float NormalizeValue(float rangeValue);
    // protected System.String TextForValue(System.Single value)
    // Offset: 0x131240C
    ::Il2CppString* TextForValue(float value);
    // private System.Void <Awake>b__17_0()
    // Offset: 0x131250C
    void $Awake$b__17_0();
    // private System.Void <Awake>b__17_1()
    // Offset: 0x1312564
    void $Awake$b__17_1();
    // public System.Void .ctor()
    // Offset: 0x1311BA4
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeValuesTextSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::RangeValuesTextSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeValuesTextSlider*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x1311FB4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x1312220
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x13123E8
    // Implemented from: HMUI.TextSlider
    // Base method: System.String TextSlider::TextForNormalizedValue(System.Single normalizedValue)
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
  }; // HMUI.RangeValuesTextSlider
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::RangeValuesTextSlider*, "HMUI", "RangeValuesTextSlider");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::get_minValue
// Il2CppName: get_minValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::RangeValuesTextSlider::*)()>(&HMUI::RangeValuesTextSlider::get_minValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "get_minValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::set_minValue
// Il2CppName: set_minValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)(float)>(&HMUI::RangeValuesTextSlider::set_minValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "set_minValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::get_maxValue
// Il2CppName: get_maxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::RangeValuesTextSlider::*)()>(&HMUI::RangeValuesTextSlider::get_maxValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "get_maxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::set_maxValue
// Il2CppName: set_maxValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)(float)>(&HMUI::RangeValuesTextSlider::set_maxValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "set_maxValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::RangeValuesTextSlider::*)()>(&HMUI::RangeValuesTextSlider::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)(float)>(&HMUI::RangeValuesTextSlider::set_value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::add_valueDidChangeEvent
// Il2CppName: add_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)(System::Action_2<HMUI::RangeValuesTextSlider*, float>*)>(&HMUI::RangeValuesTextSlider::add_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "RangeValuesTextSlider"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "add_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::remove_valueDidChangeEvent
// Il2CppName: remove_valueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)(System::Action_2<HMUI::RangeValuesTextSlider*, float>*)>(&HMUI::RangeValuesTextSlider::remove_valueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "RangeValuesTextSlider"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "remove_valueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::HandleNormalizedValueDidChange
// Il2CppName: HandleNormalizedValueDidChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)(HMUI::TextSlider*, float)>(&HMUI::RangeValuesTextSlider::HandleNormalizedValueDidChange)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("HMUI", "TextSlider")->byval_arg;
    static auto* normalizedValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "HandleNormalizedValueDidChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider, normalizedValue});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::ConvertFromNormalizedValue
// Il2CppName: ConvertFromNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::RangeValuesTextSlider::*)(float)>(&HMUI::RangeValuesTextSlider::ConvertFromNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* normalizedValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "ConvertFromNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalizedValue});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::NormalizeValue
// Il2CppName: NormalizeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::RangeValuesTextSlider::*)(float)>(&HMUI::RangeValuesTextSlider::NormalizeValue)> {
  static const MethodInfo* get() {
    static auto* rangeValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "NormalizeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rangeValue});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::TextForValue
// Il2CppName: TextForValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HMUI::RangeValuesTextSlider::*)(float)>(&HMUI::RangeValuesTextSlider::TextForValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "TextForValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::$Awake$b__17_0
// Il2CppName: <Awake>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)()>(&HMUI::RangeValuesTextSlider::$Awake$b__17_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "<Awake>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::$Awake$b__17_1
// Il2CppName: <Awake>b__17_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)()>(&HMUI::RangeValuesTextSlider::$Awake$b__17_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "<Awake>b__17_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)()>(&HMUI::RangeValuesTextSlider::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::RangeValuesTextSlider::*)()>(&HMUI::RangeValuesTextSlider::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::RangeValuesTextSlider::TextForNormalizedValue
// Il2CppName: TextForNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (HMUI::RangeValuesTextSlider::*)(float)>(&HMUI::RangeValuesTextSlider::TextForNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* normalizedValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::RangeValuesTextSlider*), "TextForNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalizedValue});
  }
};