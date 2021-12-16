// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.IesParameters
#include "Org/BouncyCastle/Crypto/Parameters/IesParameters.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class IesWithCipherParameters : public Org::BouncyCastle::Crypto::Parameters::IesParameters {
    public:
    // private System.Int32 cipherKeySize
    // Size: 0x4
    // Offset: 0x24
    int cipherKeySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: IesWithCipherParameters
    IesWithCipherParameters(int cipherKeySize_ = {}) noexcept : cipherKeySize{cipherKeySize_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return cipherKeySize;
    }
    // Get instance field reference: private System.Int32 cipherKeySize
    int& dyn_cipherKeySize();
    // public System.Int32 get_CipherKeySize()
    // Offset: 0x127A8CC
    int get_CipherKeySize();
  }; // Org.BouncyCastle.Crypto.Parameters.IesWithCipherParameters
  #pragma pack(pop)
  static check_size<sizeof(IesWithCipherParameters), 36 + sizeof(int)> __Org_BouncyCastle_Crypto_Parameters_IesWithCipherParametersSizeCheck;
  static_assert(sizeof(IesWithCipherParameters) == 0x28);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "IesWithCipherParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize
// Il2CppName: get_CipherKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters::get_CipherKeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::IesWithCipherParameters*), "get_CipherKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
