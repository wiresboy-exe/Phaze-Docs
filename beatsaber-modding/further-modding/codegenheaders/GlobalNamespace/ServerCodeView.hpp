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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: ServerCodeView
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerCodeView : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _serverCodeText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* serverCodeText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x28
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.String _serverCode
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* serverCode;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _codeIsShown
    // Size: 0x1
    // Offset: 0x38
    bool codeIsShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ServerCodeView
    ServerCodeView(TMPro::TextMeshProUGUI* serverCodeText_ = {}, UnityEngine::UI::Button* button_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, ::Il2CppString* serverCode_ = {}, bool codeIsShown_ = {}) noexcept : serverCodeText{serverCodeText_}, button{button_}, buttonBinder{buttonBinder_}, serverCode{serverCode_}, codeIsShown{codeIsShown_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _serverCodeText
    TMPro::TextMeshProUGUI*& dyn__serverCodeText();
    // Get instance field reference: private UnityEngine.UI.Button _button
    UnityEngine::UI::Button*& dyn__button();
    // Get instance field reference: private readonly HMUI.ButtonBinder _buttonBinder
    HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private System.String _serverCode
    ::Il2CppString*& dyn__serverCode();
    // Get instance field reference: private System.Boolean _codeIsShown
    bool& dyn__codeIsShown();
    // public System.Void SetCode(System.String serverCode)
    // Offset: 0x1092B44
    void SetCode(::Il2CppString* serverCode);
    // protected System.Void OnEnable()
    // Offset: 0x1092BE4
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1092C74
    void OnDisable();
    // private System.Void HandleShowServerCodeButtonPressed()
    // Offset: 0x1092C90
    void HandleShowServerCodeButtonPressed();
    // private System.Void RefreshText(System.Boolean showCode)
    // Offset: 0x1092B50
    void RefreshText(bool showCode);
    // public System.Void .ctor()
    // Offset: 0x1092CA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCodeView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ServerCodeView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCodeView*, creationType>()));
    }
  }; // ServerCodeView
  #pragma pack(pop)
  static check_size<sizeof(ServerCodeView), 56 + sizeof(bool)> __GlobalNamespace_ServerCodeViewSizeCheck;
  static_assert(sizeof(ServerCodeView) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerCodeView*, "", "ServerCodeView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeView::SetCode
// Il2CppName: SetCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeView::*)(::Il2CppString*)>(&GlobalNamespace::ServerCodeView::SetCode)> {
  static const MethodInfo* get() {
    static auto* serverCode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeView*), "SetCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverCode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeView::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeView::*)()>(&GlobalNamespace::ServerCodeView::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeView*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeView::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeView::*)()>(&GlobalNamespace::ServerCodeView::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeView*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeView::HandleShowServerCodeButtonPressed
// Il2CppName: HandleShowServerCodeButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeView::*)()>(&GlobalNamespace::ServerCodeView::HandleShowServerCodeButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeView*), "HandleShowServerCodeButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeView::RefreshText
// Il2CppName: RefreshText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ServerCodeView::*)(bool)>(&GlobalNamespace::ServerCodeView::RefreshText)> {
  static const MethodInfo* get() {
    static auto* showCode = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ServerCodeView*), "RefreshText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{showCode});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ServerCodeView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!