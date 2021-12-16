// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.PbeParametersGenerator
#include "Org/BouncyCastle/Crypto/PbeParametersGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.OpenSslPbeParametersGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  class OpenSslPbeParametersGenerator : public Org::BouncyCastle::Crypto::PbeParametersGenerator {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // Creating value type constructor for type: OpenSslPbeParametersGenerator
    OpenSslPbeParametersGenerator(Org::BouncyCastle::Crypto::IDigest* digest_ = {}) noexcept : digest{digest_} {}
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::IDigest*
    constexpr operator Org::BouncyCastle::Crypto::IDigest*() const noexcept {
      return digest;
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IDigest digest
    Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // public System.Void Init(System.Byte[] password, System.Byte[] salt)
    // Offset: 0x19114F8
    void Init(::Array<uint8_t>* password, ::Array<uint8_t>* salt);
    // private System.Byte[] GenerateDerivedKey(System.Int32 bytesNeeded)
    // Offset: 0x1911504
    ::Array<uint8_t>* GenerateDerivedKey(int bytesNeeded);
    // public System.Void .ctor()
    // Offset: 0x1911484
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: System.Void PbeParametersGenerator::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenSslPbeParametersGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenSslPbeParametersGenerator*, creationType>()));
    }
    // public override System.Void Init(System.Byte[] password, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0x19114EC
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: System.Void PbeParametersGenerator::Init(System.Byte[] password, System.Byte[] salt, System.Int32 iterationCount)
    void Init(::Array<uint8_t>* password, ::Array<uint8_t>* salt, int iterationCount);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    // Offset: 0x19118BC
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    // Offset: 0x1911964
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedParameters(System.String algorithm, System.Int32 keySize, System.Int32 ivSize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::Il2CppString* algorithm, int keySize, int ivSize);
    // public override Org.BouncyCastle.Crypto.ICipherParameters GenerateDerivedMacParameters(System.Int32 keySize)
    // Offset: 0x1911A64
    // Implemented from: Org.BouncyCastle.Crypto.PbeParametersGenerator
    // Base method: Org.BouncyCastle.Crypto.ICipherParameters PbeParametersGenerator::GenerateDerivedMacParameters(System.Int32 keySize)
    Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int keySize);
  }; // Org.BouncyCastle.Crypto.Generators.OpenSslPbeParametersGenerator
  #pragma pack(pop)
  static check_size<sizeof(OpenSslPbeParametersGenerator), 40 + sizeof(Org::BouncyCastle::Crypto::IDigest*)> __Org_BouncyCastle_Crypto_Generators_OpenSslPbeParametersGeneratorSizeCheck;
  static_assert(sizeof(OpenSslPbeParametersGenerator) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*, "Org.BouncyCastle.Crypto.Generators", "OpenSslPbeParametersGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::Array<uint8_t>*, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init)> {
  static const MethodInfo* get() {
    static auto* password = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, salt});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedKey
// Il2CppName: GenerateDerivedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(int)>(&Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedKey)> {
  static const MethodInfo* get() {
    static auto* bytesNeeded = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*), "GenerateDerivedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesNeeded});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::Array<uint8_t>*, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::Init)> {
  static const MethodInfo* get() {
    static auto* password = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iterationCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, salt, iterationCount});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::Il2CppString*, int)>(&Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters
// Il2CppName: GenerateDerivedParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(::Il2CppString*, int, int)>(&Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedParameters)> {
  static const MethodInfo* get() {
    static auto* algorithm = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ivSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*), "GenerateDerivedParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithm, keySize, ivSize});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedMacParameters
// Il2CppName: GenerateDerivedMacParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::*)(int)>(&Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator::GenerateDerivedMacParameters)> {
  static const MethodInfo* get() {
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::OpenSslPbeParametersGenerator*), "GenerateDerivedMacParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keySize});
  }
};
