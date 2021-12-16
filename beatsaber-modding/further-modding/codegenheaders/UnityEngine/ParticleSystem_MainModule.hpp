// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.MainModule
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::MainModule/*, public System::ValueType*/ {
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ParticleSystem* m_ParticleSystem;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // Creating value type constructor for type: MainModule
    constexpr MainModule(UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator UnityEngine::ParticleSystem*
    constexpr operator UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // Get instance field reference: UnityEngine.ParticleSystem m_ParticleSystem
    UnityEngine::ParticleSystem*& dyn_m_ParticleSystem();
    // public System.Single get_duration()
    // Offset: 0x2412574
    float get_duration();
    // public System.Boolean get_loop()
    // Offset: 0x24125F4
    bool get_loop();
    // public UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve get_startLifetime()
    // Offset: 0x2412674
    UnityEngine::ParticleSystem::MinMaxCurve get_startLifetime();
    // public System.Void set_startLifetime(UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve value)
    // Offset: 0x2412730
    void set_startLifetime(UnityEngine::ParticleSystem::MinMaxCurve value);
    // public UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve get_startSpeed()
    // Offset: 0x24127D0
    UnityEngine::ParticleSystem::MinMaxCurve get_startSpeed();
    // public System.Void set_startSpeed(UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve value)
    // Offset: 0x241288C
    void set_startSpeed(UnityEngine::ParticleSystem::MinMaxCurve value);
    // public System.Single get_startSpeedMultiplier()
    // Offset: 0x241292C
    float get_startSpeedMultiplier();
    // public System.Void set_startSpeedMultiplier(System.Single value)
    // Offset: 0x24129AC
    void set_startSpeedMultiplier(float value);
    // public UnityEngine.ParticleSystem/UnityEngine.MinMaxGradient get_startColor()
    // Offset: 0x2412A4C
    UnityEngine::ParticleSystem::MinMaxGradient get_startColor();
    // public System.Void set_startColor(UnityEngine.ParticleSystem/UnityEngine.MinMaxGradient value)
    // Offset: 0x2412B20
    void set_startColor(UnityEngine::ParticleSystem::MinMaxGradient value);
    // public System.Int32 get_maxParticles()
    // Offset: 0x2412BC0
    int get_maxParticles();
    // public System.Void set_maxParticles(System.Int32 value)
    // Offset: 0x2412C40
    void set_maxParticles(int value);
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0x24123C8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  MainModule(UnityEngine::ParticleSystem* particleSystem)
    // static private System.Single get_duration_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self)
    // Offset: 0x24125B4
    static float get_duration_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self);
    // static private System.Boolean get_loop_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self)
    // Offset: 0x2412634
    static bool get_loop_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self);
    // static private System.Void get_startLifetime_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, out UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve ret)
    // Offset: 0x24126E0
    static void get_startLifetime_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, ByRef<UnityEngine::ParticleSystem::MinMaxCurve> ret);
    // static private System.Void set_startLifetime_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, ref UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve value)
    // Offset: 0x2412780
    static void set_startLifetime_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, ByRef<UnityEngine::ParticleSystem::MinMaxCurve> value);
    // static private System.Void get_startSpeed_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, out UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve ret)
    // Offset: 0x241283C
    static void get_startSpeed_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, ByRef<UnityEngine::ParticleSystem::MinMaxCurve> ret);
    // static private System.Void set_startSpeed_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, ref UnityEngine.ParticleSystem/UnityEngine.MinMaxCurve value)
    // Offset: 0x24128DC
    static void set_startSpeed_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, ByRef<UnityEngine::ParticleSystem::MinMaxCurve> value);
    // static private System.Single get_startSpeedMultiplier_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self)
    // Offset: 0x241296C
    static float get_startSpeedMultiplier_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self);
    // static private System.Void set_startSpeedMultiplier_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, System.Single value)
    // Offset: 0x24129FC
    static void set_startSpeedMultiplier_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, float value);
    // static private System.Void get_startColor_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, out UnityEngine.ParticleSystem/UnityEngine.MinMaxGradient ret)
    // Offset: 0x2412AD0
    static void get_startColor_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, ByRef<UnityEngine::ParticleSystem::MinMaxGradient> ret);
    // static private System.Void set_startColor_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, ref UnityEngine.ParticleSystem/UnityEngine.MinMaxGradient value)
    // Offset: 0x2412B70
    static void set_startColor_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, ByRef<UnityEngine::ParticleSystem::MinMaxGradient> value);
    // static private System.Int32 get_maxParticles_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self)
    // Offset: 0x2412C00
    static int get_maxParticles_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self);
    // static private System.Void set_maxParticles_Injected(ref UnityEngine.ParticleSystem/UnityEngine.MainModule _unity_self, System.Int32 value)
    // Offset: 0x2412C90
    static void set_maxParticles_Injected(ByRef<UnityEngine::ParticleSystem::MainModule> _unity_self, int value);
  }; // UnityEngine.ParticleSystem/UnityEngine.MainModule
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::MainModule), 0 + sizeof(UnityEngine::ParticleSystem*)> __UnityEngine_ParticleSystem_MainModuleSizeCheck;
  static_assert(sizeof(ParticleSystem::MainModule) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::MainModule, "UnityEngine", "ParticleSystem/MainModule");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_loop
// Il2CppName: get_loop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_loop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_loop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startLifetime
// Il2CppName: get_startLifetime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem::MinMaxCurve (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_startLifetime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startLifetime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startLifetime
// Il2CppName: set_startLifetime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(UnityEngine::ParticleSystem::MinMaxCurve)>(&UnityEngine::ParticleSystem::MainModule::set_startLifetime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startLifetime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startSpeed
// Il2CppName: get_startSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem::MinMaxCurve (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_startSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startSpeed
// Il2CppName: set_startSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(UnityEngine::ParticleSystem::MinMaxCurve)>(&UnityEngine::ParticleSystem::MainModule::set_startSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startSpeedMultiplier
// Il2CppName: get_startSpeedMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_startSpeedMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startSpeedMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startSpeedMultiplier
// Il2CppName: set_startSpeedMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(float)>(&UnityEngine::ParticleSystem::MainModule::set_startSpeedMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startSpeedMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startColor
// Il2CppName: get_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ParticleSystem::MinMaxGradient (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_startColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startColor
// Il2CppName: set_startColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(UnityEngine::ParticleSystem::MinMaxGradient)>(&UnityEngine::ParticleSystem::MainModule::set_startColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_maxParticles
// Il2CppName: get_maxParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ParticleSystem::MainModule::*)()>(&UnityEngine::ParticleSystem::MainModule::get_maxParticles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_maxParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_maxParticles
// Il2CppName: set_maxParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::MainModule::*)(int)>(&UnityEngine::ParticleSystem::MainModule::set_maxParticles)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_maxParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::MainModule
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_duration_Injected
// Il2CppName: get_duration_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<UnityEngine::ParticleSystem::MainModule>)>(&UnityEngine::ParticleSystem::MainModule::get_duration_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_duration_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_loop_Injected
// Il2CppName: get_loop_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<UnityEngine::ParticleSystem::MainModule>)>(&UnityEngine::ParticleSystem::MainModule::get_loop_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_loop_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startLifetime_Injected
// Il2CppName: get_startLifetime_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, ByRef<UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::MainModule::get_startLifetime_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startLifetime_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startLifetime_Injected
// Il2CppName: set_startLifetime_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, ByRef<UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::MainModule::set_startLifetime_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startLifetime_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startSpeed_Injected
// Il2CppName: get_startSpeed_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, ByRef<UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::MainModule::get_startSpeed_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startSpeed_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startSpeed_Injected
// Il2CppName: set_startSpeed_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, ByRef<UnityEngine::ParticleSystem::MinMaxCurve>)>(&UnityEngine::ParticleSystem::MainModule::set_startSpeed_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxCurve")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startSpeed_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startSpeedMultiplier_Injected
// Il2CppName: get_startSpeedMultiplier_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(ByRef<UnityEngine::ParticleSystem::MainModule>)>(&UnityEngine::ParticleSystem::MainModule::get_startSpeedMultiplier_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startSpeedMultiplier_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startSpeedMultiplier_Injected
// Il2CppName: set_startSpeedMultiplier_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, float)>(&UnityEngine::ParticleSystem::MainModule::set_startSpeedMultiplier_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startSpeedMultiplier_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_startColor_Injected
// Il2CppName: get_startColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, ByRef<UnityEngine::ParticleSystem::MinMaxGradient>)>(&UnityEngine::ParticleSystem::MainModule::get_startColor_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_startColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_startColor_Injected
// Il2CppName: set_startColor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, ByRef<UnityEngine::ParticleSystem::MinMaxGradient>)>(&UnityEngine::ParticleSystem::MainModule::set_startColor_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MinMaxGradient")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_startColor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::get_maxParticles_Injected
// Il2CppName: get_maxParticles_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<UnityEngine::ParticleSystem::MainModule>)>(&UnityEngine::ParticleSystem::MainModule::get_maxParticles_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "get_maxParticles_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::MainModule::set_maxParticles_Injected
// Il2CppName: set_maxParticles_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::ParticleSystem::MainModule>, int)>(&UnityEngine::ParticleSystem::MainModule::set_maxParticles_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/MainModule")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem::MainModule), "set_maxParticles_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, value});
  }
};
