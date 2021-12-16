// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
  // Forward declaring type: Selectable
  class Selectable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.DefaultControls
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultControls : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::UI::DefaultControls::IFactoryControls
    class IFactoryControls;
    // Nested type: UnityEngine::UI::DefaultControls::DefaultRuntimeFactory
    class DefaultRuntimeFactory;
    // Nested type: UnityEngine::UI::DefaultControls::Resources
    struct Resources;
    // Creating value type constructor for type: DefaultControls
    DefaultControls() noexcept {}
    // Get static field: static private UnityEngine.UI.DefaultControls/UnityEngine.UI.IFactoryControls m_CurrentFactory
    static UnityEngine::UI::DefaultControls::IFactoryControls* _get_m_CurrentFactory();
    // Set static field: static private UnityEngine.UI.DefaultControls/UnityEngine.UI.IFactoryControls m_CurrentFactory
    static void _set_m_CurrentFactory(UnityEngine::UI::DefaultControls::IFactoryControls* value);
    // static field const value: static private System.Single kWidth
    static constexpr const float kWidth = 160;
    // Get static field: static private System.Single kWidth
    static float _get_kWidth();
    // Set static field: static private System.Single kWidth
    static void _set_kWidth(float value);
    // static field const value: static private System.Single kThickHeight
    static constexpr const float kThickHeight = 30;
    // Get static field: static private System.Single kThickHeight
    static float _get_kThickHeight();
    // Set static field: static private System.Single kThickHeight
    static void _set_kThickHeight(float value);
    // static field const value: static private System.Single kThinHeight
    static constexpr const float kThinHeight = 20;
    // Get static field: static private System.Single kThinHeight
    static float _get_kThinHeight();
    // Set static field: static private System.Single kThinHeight
    static void _set_kThinHeight(float value);
    // Get static field: static private UnityEngine.Vector2 s_ThickElementSize
    static UnityEngine::Vector2 _get_s_ThickElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ThickElementSize
    static void _set_s_ThickElementSize(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Vector2 s_ThinElementSize
    static UnityEngine::Vector2 _get_s_ThinElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ThinElementSize
    static void _set_s_ThinElementSize(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Vector2 s_ImageElementSize
    static UnityEngine::Vector2 _get_s_ImageElementSize();
    // Set static field: static private UnityEngine.Vector2 s_ImageElementSize
    static void _set_s_ImageElementSize(UnityEngine::Vector2 value);
    // Get static field: static private UnityEngine.Color s_DefaultSelectableColor
    static UnityEngine::Color _get_s_DefaultSelectableColor();
    // Set static field: static private UnityEngine.Color s_DefaultSelectableColor
    static void _set_s_DefaultSelectableColor(UnityEngine::Color value);
    // Get static field: static private UnityEngine.Color s_PanelColor
    static UnityEngine::Color _get_s_PanelColor();
    // Set static field: static private UnityEngine.Color s_PanelColor
    static void _set_s_PanelColor(UnityEngine::Color value);
    // Get static field: static private UnityEngine.Color s_TextColor
    static UnityEngine::Color _get_s_TextColor();
    // Set static field: static private UnityEngine.Color s_TextColor
    static void _set_s_TextColor(UnityEngine::Color value);
    // static public UnityEngine.UI.DefaultControls/UnityEngine.UI.IFactoryControls get_factory()
    // Offset: 0x147CFA8
    static UnityEngine::UI::DefaultControls::IFactoryControls* get_factory();
    // static private System.Void .cctor()
    // Offset: 0x1481058
    static void _cctor();
    // static private UnityEngine.GameObject CreateUIElementRoot(System.String name, UnityEngine.Vector2 size, params System.Type[] components)
    // Offset: 0x147D010
    static UnityEngine::GameObject* CreateUIElementRoot(::Il2CppString* name, UnityEngine::Vector2 size, ::Array<System::Type*>* components);
    // Creating initializer_list -> params proxy for: UnityEngine.GameObject CreateUIElementRoot(System.String name, UnityEngine.Vector2 size, params System.Type[] components)
    static UnityEngine::GameObject* CreateUIElementRoot(::Il2CppString* name, UnityEngine::Vector2 size, std::initializer_list<System::Type*> components);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.GameObject CreateUIElementRoot(System.String name, UnityEngine.Vector2 size, params System.Type[] components)
    template<class ...TParams>
    static UnityEngine::GameObject* CreateUIElementRoot(::Il2CppString* name, UnityEngine::Vector2 size, TParams&&... components) {
      return CreateUIElementRoot(name, size, {components...});
    }
    // static private UnityEngine.GameObject CreateUIObject(System.String name, UnityEngine.GameObject parent, params System.Type[] components)
    // Offset: 0x147D17C
    static UnityEngine::GameObject* CreateUIObject(::Il2CppString* name, UnityEngine::GameObject* parent, ::Array<System::Type*>* components);
    // Creating initializer_list -> params proxy for: UnityEngine.GameObject CreateUIObject(System.String name, UnityEngine.GameObject parent, params System.Type[] components)
    static UnityEngine::GameObject* CreateUIObject(::Il2CppString* name, UnityEngine::GameObject* parent, std::initializer_list<System::Type*> components);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.GameObject CreateUIObject(System.String name, UnityEngine.GameObject parent, params System.Type[] components)
    template<class ...TParams>
    static UnityEngine::GameObject* CreateUIObject(::Il2CppString* name, UnityEngine::GameObject* parent, TParams&&... components) {
      return CreateUIObject(name, parent, {components...});
    }
    // static private System.Void SetDefaultTextValues(UnityEngine.UI.Text lbl)
    // Offset: 0x147D3D0
    static void SetDefaultTextValues(UnityEngine::UI::Text* lbl);
    // static private System.Void SetDefaultColorTransitionValues(UnityEngine.UI.Selectable slider)
    // Offset: 0x147D464
    static void SetDefaultColorTransitionValues(UnityEngine::UI::Selectable* slider);
    // static private System.Void SetParentAndAlign(UnityEngine.GameObject child, UnityEngine.GameObject parent)
    // Offset: 0x147D2C4
    static void SetParentAndAlign(UnityEngine::GameObject* child, UnityEngine::GameObject* parent);
    // static private System.Void SetLayerRecursively(UnityEngine.GameObject go, System.Int32 layer)
    // Offset: 0x147D4E4
    static void SetLayerRecursively(UnityEngine::GameObject* go, int layer);
    // static public UnityEngine.GameObject CreatePanel(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147D5E0
    static UnityEngine::GameObject* CreatePanel(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateButton(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147D808
    static UnityEngine::GameObject* CreateButton(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateText(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147DB40
    static UnityEngine::GameObject* CreateText(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateImage(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147DCB0
    static UnityEngine::GameObject* CreateImage(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateRawImage(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147DDD4
    static UnityEngine::GameObject* CreateRawImage(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateSlider(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147DEF8
    static UnityEngine::GameObject* CreateSlider(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateScrollbar(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147E654
    static UnityEngine::GameObject* CreateScrollbar(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateToggle(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147EA8C
    static UnityEngine::GameObject* CreateToggle(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateInputField(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147F078
    static UnityEngine::GameObject* CreateInputField(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateDropdown(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x147F5C0
    static UnityEngine::GameObject* CreateDropdown(UnityEngine::UI::DefaultControls::Resources resources);
    // static public UnityEngine.GameObject CreateScrollView(UnityEngine.UI.DefaultControls/UnityEngine.UI.Resources resources)
    // Offset: 0x1480968
    static UnityEngine::GameObject* CreateScrollView(UnityEngine::UI::DefaultControls::Resources resources);
  }; // UnityEngine.UI.DefaultControls
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls*, "UnityEngine.UI", "DefaultControls");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::get_factory
// Il2CppName: get_factory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::DefaultControls::IFactoryControls* (*)()>(&UnityEngine::UI::DefaultControls::get_factory)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "get_factory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UI::DefaultControls::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateUIElementRoot
// Il2CppName: CreateUIElementRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(::Il2CppString*, UnityEngine::Vector2, ::Array<System::Type*>*)>(&UnityEngine::UI::DefaultControls::CreateUIElementRoot)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* components = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateUIElementRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, size, components});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateUIObject
// Il2CppName: CreateUIObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(::Il2CppString*, UnityEngine::GameObject*, ::Array<System::Type*>*)>(&UnityEngine::UI::DefaultControls::CreateUIObject)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* components = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateUIObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, parent, components});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::SetDefaultTextValues
// Il2CppName: SetDefaultTextValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Text*)>(&UnityEngine::UI::DefaultControls::SetDefaultTextValues)> {
  static const MethodInfo* get() {
    static auto* lbl = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Text")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "SetDefaultTextValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lbl});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::SetDefaultColorTransitionValues
// Il2CppName: SetDefaultColorTransitionValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::UI::Selectable*)>(&UnityEngine::UI::DefaultControls::SetDefaultColorTransitionValues)> {
  static const MethodInfo* get() {
    static auto* slider = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Selectable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "SetDefaultColorTransitionValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{slider});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::SetParentAndAlign
// Il2CppName: SetParentAndAlign
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject*, UnityEngine::GameObject*)>(&UnityEngine::UI::DefaultControls::SetParentAndAlign)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "SetParentAndAlign", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child, parent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::SetLayerRecursively
// Il2CppName: SetLayerRecursively
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject*, int)>(&UnityEngine::UI::DefaultControls::SetLayerRecursively)> {
  static const MethodInfo* get() {
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "SetLayerRecursively", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{go, layer});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreatePanel
// Il2CppName: CreatePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreatePanel)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreatePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateButton
// Il2CppName: CreateButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateButton)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateText
// Il2CppName: CreateText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateText)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateImage
// Il2CppName: CreateImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateImage)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateRawImage
// Il2CppName: CreateRawImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateRawImage)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateRawImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateSlider
// Il2CppName: CreateSlider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateSlider)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateSlider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateScrollbar
// Il2CppName: CreateScrollbar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateScrollbar)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateScrollbar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateToggle
// Il2CppName: CreateToggle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateToggle)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateToggle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateInputField
// Il2CppName: CreateInputField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateInputField)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateInputField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateDropdown
// Il2CppName: CreateDropdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateDropdown)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateDropdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::DefaultControls::CreateScrollView
// Il2CppName: CreateScrollView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::GameObject* (*)(UnityEngine::UI::DefaultControls::Resources)>(&UnityEngine::UI::DefaultControls::CreateScrollView)> {
  static const MethodInfo* get() {
    static auto* resources = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "DefaultControls/Resources")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::DefaultControls*), "CreateScrollView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resources});
  }
};
