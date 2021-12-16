// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SignatureDescription
#include "System/Security/Cryptography/SignatureDescription.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SignatureDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class RSAPKCS1SignatureDescription : public System::Security::Cryptography::SignatureDescription {
    public:
    // private System.String _hashAlgorithm
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* hashAlgorithm;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RSAPKCS1SignatureDescription
    RSAPKCS1SignatureDescription(::Il2CppString* hashAlgorithm_ = {}) noexcept : hashAlgorithm{hashAlgorithm_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return hashAlgorithm;
    }
    // Get instance field reference: private System.String _hashAlgorithm
    ::Il2CppString*& dyn__hashAlgorithm();
    // protected System.Void .ctor(System.String hashAlgorithm, System.String digestAlgorithm)
    // Offset: 0x1B3F5A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureDescription* New_ctor(::Il2CppString* hashAlgorithm, ::Il2CppString* digestAlgorithm) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RSAPKCS1SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureDescription*, creationType>(hashAlgorithm, digestAlgorithm)));
    }
  }; // System.Security.Cryptography.RSAPKCS1SignatureDescription
  #pragma pack(pop)
  static check_size<sizeof(RSAPKCS1SignatureDescription), 48 + sizeof(::Il2CppString*)> __System_Security_Cryptography_RSAPKCS1SignatureDescriptionSizeCheck;
  static_assert(sizeof(RSAPKCS1SignatureDescription) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SignatureDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
