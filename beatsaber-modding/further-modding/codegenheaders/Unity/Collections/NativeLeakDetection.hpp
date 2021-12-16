// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.NativeLeakDetection
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeLeakDetection : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NativeLeakDetection
    NativeLeakDetection() noexcept {}
    // Get static field: static private System.Int32 s_NativeLeakDetectionMode
    static int _get_s_NativeLeakDetectionMode();
    // Set static field: static private System.Int32 s_NativeLeakDetectionMode
    static void _set_s_NativeLeakDetectionMode(int value);
    // static private System.Void Initialize()
    // Offset: 0x1C448D4
    static void Initialize();
  }; // Unity.Collections.NativeLeakDetection
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::NativeLeakDetection*, "Unity.Collections", "NativeLeakDetection");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::NativeLeakDetection::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::NativeLeakDetection::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::NativeLeakDetection*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
