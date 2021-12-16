// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Ntlm.NtlmAuthLevel
#include "Mono/Security/Protocol/Ntlm/NtlmAuthLevel.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.NtlmSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class NtlmSettings : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NtlmSettings
    NtlmSettings() noexcept {}
    // Get static field: static private Mono.Security.Protocol.Ntlm.NtlmAuthLevel defaultAuthLevel
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel _get_defaultAuthLevel();
    // Set static field: static private Mono.Security.Protocol.Ntlm.NtlmAuthLevel defaultAuthLevel
    static void _set_defaultAuthLevel(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);
    // static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel get_DefaultAuthLevel()
    // Offset: 0x1E08334
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel get_DefaultAuthLevel();
    // static private System.Void .cctor()
    // Offset: 0x1E0839C
    static void _cctor();
  }; // Mono.Security.Protocol.Ntlm.NtlmSettings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::NtlmSettings*, "Mono.Security.Protocol.Ntlm", "NtlmSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel
// Il2CppName: get_DefaultAuthLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Protocol::Ntlm::NtlmAuthLevel (*)()>(&Mono::Security::Protocol::Ntlm::NtlmSettings::get_DefaultAuthLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::NtlmSettings*), "get_DefaultAuthLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::NtlmSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Protocol::Ntlm::NtlmSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::NtlmSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};