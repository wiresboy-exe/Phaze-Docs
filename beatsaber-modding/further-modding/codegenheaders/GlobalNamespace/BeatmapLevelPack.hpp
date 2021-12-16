// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelPack
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelPack : public ::Il2CppObject/*, public GlobalNamespace::IBeatmapLevelPack*/ {
    public:
    // private System.String _levelPackID
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelPackID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _packName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* packName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _shortPackName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* shortPackName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private IBeatmapLevelCollection _beatmapLevelCollection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelCollection*) == 0x8);
    // Creating value type constructor for type: BeatmapLevelPack
    BeatmapLevelPack(::Il2CppString* levelPackID_ = {}, ::Il2CppString* packName_ = {}, ::Il2CppString* shortPackName_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection_ = {}) noexcept : levelPackID{levelPackID_}, packName{packName_}, shortPackName{shortPackName_}, coverImage{coverImage_}, beatmapLevelCollection{beatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelPack
    operator GlobalNamespace::IBeatmapLevelPack() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelPack*>(this);
    }
    // Get instance field reference: private System.String _levelPackID
    ::Il2CppString*& dyn__levelPackID();
    // Get instance field reference: private System.String _packName
    ::Il2CppString*& dyn__packName();
    // Get instance field reference: private System.String _shortPackName
    ::Il2CppString*& dyn__shortPackName();
    // Get instance field reference: private UnityEngine.Sprite _coverImage
    UnityEngine::Sprite*& dyn__coverImage();
    // Get instance field reference: private IBeatmapLevelCollection _beatmapLevelCollection
    GlobalNamespace::IBeatmapLevelCollection*& dyn__beatmapLevelCollection();
    // public System.String get_packID()
    // Offset: 0x10C92A0
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0x10C92A8
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0x10C92B0
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0x10C92B8
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x10C92C0
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x10C92C8
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor(System.String levelPackID, System.String packName, System.String shortPackName, UnityEngine.Sprite coverImage, IBeatmapLevelCollection levelCollection)
    // Offset: 0x10C92D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelPack* New_ctor(::Il2CppString* levelPackID, ::Il2CppString* packName, ::Il2CppString* shortPackName, UnityEngine::Sprite* coverImage, GlobalNamespace::IBeatmapLevelCollection* levelCollection) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelPack*, creationType>(levelPackID, packName, shortPackName, coverImage, levelCollection)));
    }
    // static public BeatmapLevelPack CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(IBeatmapLevelPack beatmapLevelPack, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x10C9324
    static GlobalNamespace::BeatmapLevelPack* CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
  }; // BeatmapLevelPack
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelPack), 48 + sizeof(GlobalNamespace::IBeatmapLevelCollection*)> __GlobalNamespace_BeatmapLevelPackSizeCheck;
  static_assert(sizeof(BeatmapLevelPack) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPack*, "", "BeatmapLevelPack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::get_packID
// Il2CppName: get_packID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelPack::*)()>(&GlobalNamespace::BeatmapLevelPack::get_packID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPack*), "get_packID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::get_packName
// Il2CppName: get_packName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelPack::*)()>(&GlobalNamespace::BeatmapLevelPack::get_packName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPack*), "get_packName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::get_shortPackName
// Il2CppName: get_shortPackName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelPack::*)()>(&GlobalNamespace::BeatmapLevelPack::get_shortPackName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPack*), "get_shortPackName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::get_collectionName
// Il2CppName: get_collectionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BeatmapLevelPack::*)()>(&GlobalNamespace::BeatmapLevelPack::get_collectionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPack*), "get_collectionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::get_coverImage
// Il2CppName: get_coverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::BeatmapLevelPack::*)()>(&GlobalNamespace::BeatmapLevelPack::get_coverImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPack*), "get_coverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::get_beatmapLevelCollection
// Il2CppName: get_beatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelCollection* (GlobalNamespace::BeatmapLevelPack::*)()>(&GlobalNamespace::BeatmapLevelPack::get_beatmapLevelCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPack*), "get_beatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelPack::CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering
// Il2CppName: CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelPack* (*)(GlobalNamespace::IBeatmapLevelPack*, GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapLevelPack::CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelPack = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelPack")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelPack*), "CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelPack, beatmapCharacteristic});
  }
};