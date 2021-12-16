// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteControllerBase
  class NoteControllerBase;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INoteControllerDidInitEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class INoteControllerDidInitEvent {
    public:
    // Creating value type constructor for type: INoteControllerDidInitEvent
    INoteControllerDidInitEvent() noexcept {}
    // public System.Void HandleNoteControllerDidInit(NoteControllerBase noteController)
    // Offset: 0xFFFFFFFF
    void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase* noteController);
  }; // INoteControllerDidInitEvent
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteControllerDidInitEvent*, "", "INoteControllerDidInitEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INoteControllerDidInitEvent::HandleNoteControllerDidInit
// Il2CppName: HandleNoteControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INoteControllerDidInitEvent::*)(GlobalNamespace::NoteControllerBase*)>(&GlobalNamespace::INoteControllerDidInitEvent::HandleNoteControllerDidInit)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INoteControllerDidInitEvent*), "HandleNoteControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController});
  }
};