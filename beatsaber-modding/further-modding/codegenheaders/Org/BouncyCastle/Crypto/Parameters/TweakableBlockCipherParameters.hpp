// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: KeyParameter
  class KeyParameter;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class TweakableBlockCipherParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private readonly System.Byte[] tweak
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* tweak;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Parameters.KeyParameter key
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* key;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*) == 0x8);
    // Creating value type constructor for type: TweakableBlockCipherParameters
    TweakableBlockCipherParameters(::Array<uint8_t>* tweak_ = {}, Org::BouncyCastle::Crypto::Parameters::KeyParameter* key_ = {}) noexcept : tweak{tweak_}, key{key_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field reference: private readonly System.Byte[] tweak
    ::Array<uint8_t>*& dyn_tweak();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.KeyParameter key
    Org::BouncyCastle::Crypto::Parameters::KeyParameter*& dyn_key();
    // public Org.BouncyCastle.Crypto.Parameters.KeyParameter get_Key()
    // Offset: 0x127BBE4
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key();
    // public System.Byte[] get_Tweak()
    // Offset: 0x127BBEC
    ::Array<uint8_t>* get_Tweak();
  }; // Org.BouncyCastle.Crypto.Parameters.TweakableBlockCipherParameters
  #pragma pack(pop)
  static check_size<sizeof(TweakableBlockCipherParameters), 24 + sizeof(Org::BouncyCastle::Crypto::Parameters::KeyParameter*)> __Org_BouncyCastle_Crypto_Parameters_TweakableBlockCipherParametersSizeCheck;
  static_assert(sizeof(TweakableBlockCipherParameters) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*, "Org.BouncyCastle.Crypto.Parameters", "TweakableBlockCipherParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key
// Il2CppName: get_Key
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Parameters::KeyParameter* (Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Key)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*), "get_Key", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak
// Il2CppName: get_Tweak
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters::get_Tweak)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::TweakableBlockCipherParameters*), "get_Tweak", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
