// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: EditAvatarViewController/AvatarEditPart
#include "GlobalNamespace/EditAvatarViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Completed forward declares
// Type namespace: Menu.ViewControllers
namespace Menu::ViewControllers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Menu.ViewControllers.EditAvatarHistorySnapshot
  // [TokenAttribute] Offset: FFFFFFFF
  class EditAvatarHistorySnapshot : public ::Il2CppObject {
    public:
    // private readonly EditAvatarViewController/AvatarEditPart <avatarEditPart>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EditAvatarViewController::AvatarEditPart) == 0x4);
    // Padding between fields: avatarEditPart and: avatarData
    char __padding0[0x4] = {};
    // private readonly AvatarData <avatarData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarData* avatarData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarData*) == 0x8);
    // Creating value type constructor for type: EditAvatarHistorySnapshot
    EditAvatarHistorySnapshot(GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart_ = {}, GlobalNamespace::AvatarData* avatarData_ = {}) noexcept : avatarEditPart{avatarEditPart_}, avatarData{avatarData_} {}
    // Get instance field reference: private readonly EditAvatarViewController/AvatarEditPart <avatarEditPart>k__BackingField
    GlobalNamespace::EditAvatarViewController::AvatarEditPart& dyn_$avatarEditPart$k__BackingField();
    // Get instance field reference: private readonly AvatarData <avatarData>k__BackingField
    GlobalNamespace::AvatarData*& dyn_$avatarData$k__BackingField();
    // public EditAvatarViewController/AvatarEditPart get_avatarEditPart()
    // Offset: 0x11A7A7C
    GlobalNamespace::EditAvatarViewController::AvatarEditPart get_avatarEditPart();
    // public AvatarData get_avatarData()
    // Offset: 0x11A7A84
    GlobalNamespace::AvatarData* get_avatarData();
    // public System.Void .ctor(AvatarData avatarData, EditAvatarViewController/AvatarEditPart avatarEditPart)
    // Offset: 0x11A7A8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EditAvatarHistorySnapshot* New_ctor(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::EditAvatarViewController::AvatarEditPart avatarEditPart) {
      static auto ___internal__logger = ::Logger::get().WithContext("Menu::ViewControllers::EditAvatarHistorySnapshot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EditAvatarHistorySnapshot*, creationType>(avatarData, avatarEditPart)));
    }
  }; // Menu.ViewControllers.EditAvatarHistorySnapshot
  #pragma pack(pop)
  static check_size<sizeof(EditAvatarHistorySnapshot), 24 + sizeof(GlobalNamespace::AvatarData*)> __Menu_ViewControllers_EditAvatarHistorySnapshotSizeCheck;
  static_assert(sizeof(EditAvatarHistorySnapshot) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Menu::ViewControllers::EditAvatarHistorySnapshot*, "Menu.ViewControllers", "EditAvatarHistorySnapshot");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarEditPart
// Il2CppName: get_avatarEditPart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EditAvatarViewController::AvatarEditPart (Menu::ViewControllers::EditAvatarHistorySnapshot::*)()>(&Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarEditPart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Menu::ViewControllers::EditAvatarHistorySnapshot*), "get_avatarEditPart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarData
// Il2CppName: get_avatarData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::AvatarData* (Menu::ViewControllers::EditAvatarHistorySnapshot::*)()>(&Menu::ViewControllers::EditAvatarHistorySnapshot::get_avatarData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Menu::ViewControllers::EditAvatarHistorySnapshot*), "get_avatarData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Menu::ViewControllers::EditAvatarHistorySnapshot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!