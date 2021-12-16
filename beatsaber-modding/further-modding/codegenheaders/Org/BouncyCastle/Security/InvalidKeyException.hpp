// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Security.KeyException
#include "Org/BouncyCastle/Security/KeyException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.InvalidKeyException
  // [TokenAttribute] Offset: FFFFFFFF
  class InvalidKeyException : public Org::BouncyCastle::Security::KeyException {
    public:
    // Creating value type constructor for type: InvalidKeyException
    InvalidKeyException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13BCB60
    // Implemented from: Org.BouncyCastle.Security.KeyException
    // Base method: System.Void KeyException::.ctor()
    // Base method: System.Void GeneralSecurityException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x13BCB68
    // Implemented from: Org.BouncyCastle.Security.KeyException
    // Base method: System.Void KeyException::.ctor(System.String message)
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidKeyException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::InvalidKeyException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidKeyException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Security.InvalidKeyException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::InvalidKeyException*, "Org.BouncyCastle.Security", "InvalidKeyException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::InvalidKeyException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
