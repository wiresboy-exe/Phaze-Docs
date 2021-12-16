// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Polyglot.LocalizedTextComponent`1
#include "Polyglot/LocalizedTextComponent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
  // Forward declaring type: TextAlignmentOptions
  struct TextAlignmentOptions;
}
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Skipping declaration: LanguageDirection because it is already included!
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // WARNING Size may be invalid!
  // Autogenerated type: Polyglot.LocalizedTextMeshPro
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: E1E808
  // [RequireComponent] Offset: E1E808
  class LocalizedTextMeshPro : public Polyglot::LocalizedTextComponent_1<TMPro::TextMeshPro*> {
    public:
    // Creating value type constructor for type: LocalizedTextMeshPro
    LocalizedTextMeshPro() noexcept {}
    // protected System.Void SetText(TMPro.TextMeshPro text, System.String value)
    // Offset: 0x237E1C4
    void SetText(TMPro::TextMeshPro* text, ::Il2CppString* value);
    // protected System.Void UpdateAlignment(TMPro.TextMeshPro text, Polyglot.LanguageDirection direction)
    // Offset: 0x237E1E4
    void UpdateAlignment(TMPro::TextMeshPro* text, Polyglot::LanguageDirection direction);
    // private System.Boolean IsOppositeDirection(TMPro.TextAlignmentOptions alignment, Polyglot.LanguageDirection direction)
    // Offset: 0x237E2BC
    bool IsOppositeDirection(TMPro::TextAlignmentOptions alignment, Polyglot::LanguageDirection direction);
    // private System.Boolean IsAlignmentRight(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x237E314
    bool IsAlignmentRight(TMPro::TextAlignmentOptions alignment);
    // private System.Boolean IsAlignmentLeft(TMPro.TextAlignmentOptions alignment)
    // Offset: 0x237E33C
    bool IsAlignmentLeft(TMPro::TextAlignmentOptions alignment);
    // public System.Void .ctor()
    // Offset: 0x237E364
    // Implemented from: Polyglot.LocalizedTextComponent`1
    // Base method: System.Void LocalizedTextComponent_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextMeshPro* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextMeshPro::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextMeshPro*, creationType>()));
    }
  }; // Polyglot.LocalizedTextMeshPro
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizedTextMeshPro*, "Polyglot", "LocalizedTextMeshPro");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::SetText
// Il2CppName: SetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextMeshPro*, ::Il2CppString*)>(&Polyglot::LocalizedTextMeshPro::SetText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "SetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, value});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::UpdateAlignment
// Il2CppName: UpdateAlignment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextMeshPro*, Polyglot::LanguageDirection)>(&Polyglot::LocalizedTextMeshPro::UpdateAlignment)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshPro")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "UpdateAlignment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, direction});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::IsOppositeDirection
// Il2CppName: IsOppositeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextAlignmentOptions, Polyglot::LanguageDirection)>(&Polyglot::LocalizedTextMeshPro::IsOppositeDirection)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("TMPro", "TextAlignmentOptions")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("Polyglot", "LanguageDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "IsOppositeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment, direction});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::IsAlignmentRight
// Il2CppName: IsAlignmentRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextAlignmentOptions)>(&Polyglot::LocalizedTextMeshPro::IsAlignmentRight)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("TMPro", "TextAlignmentOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "IsAlignmentRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::IsAlignmentLeft
// Il2CppName: IsAlignmentLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Polyglot::LocalizedTextMeshPro::*)(TMPro::TextAlignmentOptions)>(&Polyglot::LocalizedTextMeshPro::IsAlignmentLeft)> {
  static const MethodInfo* get() {
    static auto* alignment = &::il2cpp_utils::GetClassFromName("TMPro", "TextAlignmentOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Polyglot::LocalizedTextMeshPro*), "IsAlignmentLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alignment});
  }
};
// Writing MetadataGetter for method: Polyglot::LocalizedTextMeshPro::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!