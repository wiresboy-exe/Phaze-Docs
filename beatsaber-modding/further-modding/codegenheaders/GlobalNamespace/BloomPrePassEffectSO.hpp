// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TextureEffectSO
#include "GlobalNamespace/TextureEffectSO.hpp"
// Including type: IBloomPrePassParams
#include "GlobalNamespace/IBloomPrePassParams.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ToneMapping
  struct ToneMapping;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassEffectSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassEffectSO : public GlobalNamespace::TextureEffectSO/*, public GlobalNamespace::IBloomPrePassParams*/ {
    public:
    // private System.Int32 _textureWidth
    // Size: 0x4
    // Offset: 0x18
    int textureWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _textureHeight
    // Size: 0x4
    // Offset: 0x1C
    int textureHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector2 _fov
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 fov;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Single _linesWidth
    // Size: 0x4
    // Offset: 0x28
    float linesWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BloomPrePassEffectSO
    BloomPrePassEffectSO(int textureWidth_ = {}, int textureHeight_ = {}, UnityEngine::Vector2 fov_ = {}, float linesWidth_ = {}) noexcept : textureWidth{textureWidth_}, textureHeight{textureHeight_}, fov{fov_}, linesWidth{linesWidth_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IBloomPrePassParams
    operator GlobalNamespace::IBloomPrePassParams() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBloomPrePassParams*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _textureWidth
    int& dyn__textureWidth();
    // Get instance field reference: private System.Int32 _textureHeight
    int& dyn__textureHeight();
    // Get instance field reference: private UnityEngine.Vector2 _fov
    UnityEngine::Vector2& dyn__fov();
    // Get instance field reference: private System.Single _linesWidth
    float& dyn__linesWidth();
    // public TextureEffectSO get_textureEffect()
    // Offset: 0x1E13CE0
    GlobalNamespace::TextureEffectSO* get_textureEffect();
    // public System.Int32 get_textureWidth()
    // Offset: 0x1E13CE4
    int get_textureWidth();
    // public System.Int32 get_textureHeight()
    // Offset: 0x1E13CEC
    int get_textureHeight();
    // public UnityEngine.Vector2 get_fov()
    // Offset: 0x1E13CF4
    UnityEngine::Vector2 get_fov();
    // public System.Single get_linesWidth()
    // Offset: 0x1E13CFC
    float get_linesWidth();
    // public ToneMapping get_toneMapping()
    // Offset: 0x1E13D04
    GlobalNamespace::ToneMapping get_toneMapping();
    // protected System.Void .ctor()
    // Offset: 0x1E13D0C
    // Implemented from: TextureEffectSO
    // Base method: System.Void TextureEffectSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassEffectSO*, creationType>()));
    }
  }; // BloomPrePassEffectSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassEffectSO), 40 + sizeof(float)> __GlobalNamespace_BloomPrePassEffectSOSizeCheck;
  static_assert(sizeof(BloomPrePassEffectSO) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassEffectSO*, "", "BloomPrePassEffectSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectSO::get_textureEffect
// Il2CppName: get_textureEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::TextureEffectSO* (GlobalNamespace::BloomPrePassEffectSO::*)()>(&GlobalNamespace::BloomPrePassEffectSO::get_textureEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectSO*), "get_textureEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectSO::get_textureWidth
// Il2CppName: get_textureWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BloomPrePassEffectSO::*)()>(&GlobalNamespace::BloomPrePassEffectSO::get_textureWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectSO*), "get_textureWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectSO::get_textureHeight
// Il2CppName: get_textureHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BloomPrePassEffectSO::*)()>(&GlobalNamespace::BloomPrePassEffectSO::get_textureHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectSO*), "get_textureHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectSO::get_fov
// Il2CppName: get_fov
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector2 (GlobalNamespace::BloomPrePassEffectSO::*)()>(&GlobalNamespace::BloomPrePassEffectSO::get_fov)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectSO*), "get_fov", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectSO::get_linesWidth
// Il2CppName: get_linesWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::BloomPrePassEffectSO::*)()>(&GlobalNamespace::BloomPrePassEffectSO::get_linesWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectSO*), "get_linesWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectSO::get_toneMapping
// Il2CppName: get_toneMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ToneMapping (GlobalNamespace::BloomPrePassEffectSO::*)()>(&GlobalNamespace::BloomPrePassEffectSO::get_toneMapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassEffectSO*), "get_toneMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassEffectSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!