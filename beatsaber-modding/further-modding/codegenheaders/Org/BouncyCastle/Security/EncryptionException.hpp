// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.EncryptionException
  // [TokenAttribute] Offset: FFFFFFFF
  class EncryptionException : public System::IO::IOException {
    public:
    // Creating value type constructor for type: EncryptionException
    EncryptionException() noexcept {}
    // public System.Void .ctor(System.String message)
    // Offset: 0x13B8E48
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptionException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::EncryptionException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptionException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Security.EncryptionException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::EncryptionException*, "Org.BouncyCastle.Security", "EncryptionException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::EncryptionException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
