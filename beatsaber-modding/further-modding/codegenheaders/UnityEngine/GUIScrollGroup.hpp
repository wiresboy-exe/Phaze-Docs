// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GUILayoutGroup
#include "UnityEngine/GUILayoutGroup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUIScrollGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class GUIScrollGroup : public UnityEngine::GUILayoutGroup {
    public:
    // public System.Single calcMinWidth
    // Size: 0x4
    // Offset: 0x90
    float calcMinWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single calcMaxWidth
    // Size: 0x4
    // Offset: 0x94
    float calcMaxWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single calcMinHeight
    // Size: 0x4
    // Offset: 0x98
    float calcMinHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single calcMaxHeight
    // Size: 0x4
    // Offset: 0x9C
    float calcMaxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single clientWidth
    // Size: 0x4
    // Offset: 0xA0
    float clientWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single clientHeight
    // Size: 0x4
    // Offset: 0xA4
    float clientHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean allowHorizontalScroll
    // Size: 0x1
    // Offset: 0xA8
    bool allowHorizontalScroll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean allowVerticalScroll
    // Size: 0x1
    // Offset: 0xA9
    bool allowVerticalScroll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean needsHorizontalScrollbar
    // Size: 0x1
    // Offset: 0xAA
    bool needsHorizontalScrollbar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean needsVerticalScrollbar
    // Size: 0x1
    // Offset: 0xAB
    bool needsVerticalScrollbar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: needsVerticalScrollbar and: horizontalScrollbar
    char __padding9[0x4] = {};
    // public UnityEngine.GUIStyle horizontalScrollbar
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::GUIStyle* horizontalScrollbar;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // public UnityEngine.GUIStyle verticalScrollbar
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::GUIStyle* verticalScrollbar;
    // Field size check
    static_assert(sizeof(UnityEngine::GUIStyle*) == 0x8);
    // Creating value type constructor for type: GUIScrollGroup
    GUIScrollGroup(float calcMinWidth_ = {}, float calcMaxWidth_ = {}, float calcMinHeight_ = {}, float calcMaxHeight_ = {}, float clientWidth_ = {}, float clientHeight_ = {}, bool allowHorizontalScroll_ = {}, bool allowVerticalScroll_ = {}, bool needsHorizontalScrollbar_ = {}, bool needsVerticalScrollbar_ = {}, UnityEngine::GUIStyle* horizontalScrollbar_ = {}, UnityEngine::GUIStyle* verticalScrollbar_ = {}) noexcept : calcMinWidth{calcMinWidth_}, calcMaxWidth{calcMaxWidth_}, calcMinHeight{calcMinHeight_}, calcMaxHeight{calcMaxHeight_}, clientWidth{clientWidth_}, clientHeight{clientHeight_}, allowHorizontalScroll{allowHorizontalScroll_}, allowVerticalScroll{allowVerticalScroll_}, needsHorizontalScrollbar{needsHorizontalScrollbar_}, needsVerticalScrollbar{needsVerticalScrollbar_}, horizontalScrollbar{horizontalScrollbar_}, verticalScrollbar{verticalScrollbar_} {}
    // Get instance field reference: public System.Single calcMinWidth
    float& dyn_calcMinWidth();
    // Get instance field reference: public System.Single calcMaxWidth
    float& dyn_calcMaxWidth();
    // Get instance field reference: public System.Single calcMinHeight
    float& dyn_calcMinHeight();
    // Get instance field reference: public System.Single calcMaxHeight
    float& dyn_calcMaxHeight();
    // Get instance field reference: public System.Single clientWidth
    float& dyn_clientWidth();
    // Get instance field reference: public System.Single clientHeight
    float& dyn_clientHeight();
    // Get instance field reference: public System.Boolean allowHorizontalScroll
    bool& dyn_allowHorizontalScroll();
    // Get instance field reference: public System.Boolean allowVerticalScroll
    bool& dyn_allowVerticalScroll();
    // Get instance field reference: public System.Boolean needsHorizontalScrollbar
    bool& dyn_needsHorizontalScrollbar();
    // Get instance field reference: public System.Boolean needsVerticalScrollbar
    bool& dyn_needsVerticalScrollbar();
    // Get instance field reference: public UnityEngine.GUIStyle horizontalScrollbar
    UnityEngine::GUIStyle*& dyn_horizontalScrollbar();
    // Get instance field reference: public UnityEngine.GUIStyle verticalScrollbar
    UnityEngine::GUIStyle*& dyn_verticalScrollbar();
    // public System.Void .ctor()
    // Offset: 0x1B337FC
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUIScrollGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUIScrollGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUIScrollGroup*, creationType>()));
    }
    // public override System.Void CalcWidth()
    // Offset: 0x1B33808
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::CalcWidth()
    void CalcWidth();
    // public override System.Void SetHorizontal(System.Single x, System.Single width)
    // Offset: 0x1B33898
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::SetHorizontal(System.Single x, System.Single width)
    void SetHorizontal(float x, float width);
    // public override System.Void CalcHeight()
    // Offset: 0x1B339C8
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::CalcHeight()
    void CalcHeight();
    // public override System.Void SetVertical(System.Single y, System.Single height)
    // Offset: 0x1B33AD0
    // Implemented from: UnityEngine.GUILayoutGroup
    // Base method: System.Void GUILayoutGroup::SetVertical(System.Single y, System.Single height)
    void SetVertical(float y, float height);
  }; // UnityEngine.GUIScrollGroup
  #pragma pack(pop)
  static check_size<sizeof(GUIScrollGroup), 184 + sizeof(UnityEngine::GUIStyle*)> __UnityEngine_GUIScrollGroupSizeCheck;
  static_assert(sizeof(GUIScrollGroup) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIScrollGroup*, "UnityEngine", "GUIScrollGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUIScrollGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUIScrollGroup::CalcWidth
// Il2CppName: CalcWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIScrollGroup::*)()>(&UnityEngine::GUIScrollGroup::CalcWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIScrollGroup*), "CalcWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIScrollGroup::SetHorizontal
// Il2CppName: SetHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIScrollGroup::*)(float, float)>(&UnityEngine::GUIScrollGroup::SetHorizontal)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIScrollGroup*), "SetHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, width});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIScrollGroup::CalcHeight
// Il2CppName: CalcHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIScrollGroup::*)()>(&UnityEngine::GUIScrollGroup::CalcHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIScrollGroup*), "CalcHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUIScrollGroup::SetVertical
// Il2CppName: SetVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUIScrollGroup::*)(float, float)>(&UnityEngine::GUIScrollGroup::SetVertical)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUIScrollGroup*), "SetVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y, height});
  }
};
