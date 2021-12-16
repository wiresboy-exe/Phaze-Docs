// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SM4Engine
  // [TokenAttribute] Offset: FFFFFFFF
  class SM4Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.UInt32[] rk
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* rk;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // Creating value type constructor for type: SM4Engine
    SM4Engine(::Array<uint>* rk_ = {}) noexcept : rk{rk_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Creating conversion operator: operator ::Array<uint>*
    constexpr operator ::Array<uint>*() const noexcept {
      return rk;
    }
    // Get static field: static private readonly System.Byte[] Sbox
    static ::Array<uint8_t>* _get_Sbox();
    // Set static field: static private readonly System.Byte[] Sbox
    static void _set_Sbox(::Array<uint8_t>* value);
    // Get static field: static private readonly System.UInt32[] CK
    static ::Array<uint>* _get_CK();
    // Set static field: static private readonly System.UInt32[] CK
    static void _set_CK(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] FK
    static ::Array<uint>* _get_FK();
    // Set static field: static private readonly System.UInt32[] FK
    static void _set_FK(::Array<uint>* value);
    // Get instance field reference: private System.UInt32[] rk
    ::Array<uint>*& dyn_rk();
    // public System.String get_AlgorithmName()
    // Offset: 0x1EC3AA8
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1EC3AF0
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x1EC3DB4
    static void _cctor();
    // static private System.UInt32 tau(System.UInt32 A)
    // Offset: 0x1EC3088
    static uint tau(uint A);
    // static private System.UInt32 L_ap(System.UInt32 B)
    // Offset: 0x1EC3168
    static uint L_ap(uint B);
    // private System.UInt32 T_ap(System.UInt32 Z)
    // Offset: 0x1EC31AC
    uint T_ap(uint Z);
    // private System.Void ExpandKey(System.Boolean forEncryption, System.Byte[] key)
    // Offset: 0x1EC3240
    void ExpandKey(bool forEncryption, ::Array<uint8_t>* key);
    // static private System.UInt32 L(System.UInt32 B)
    // Offset: 0x1EC3814
    static uint L(uint B);
    // static private System.UInt32 T(System.UInt32 Z)
    // Offset: 0x1EC3890
    static uint T(uint Z);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1EC38F8
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1EC3AF8
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1EC3B00
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1EC3DB0
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1EC3EA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SM4Engine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::SM4Engine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SM4Engine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.SM4Engine
  #pragma pack(pop)
  static check_size<sizeof(SM4Engine), 16 + sizeof(::Array<uint>*)> __Org_BouncyCastle_Crypto_Engines_SM4EngineSizeCheck;
  static_assert(sizeof(SM4Engine) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SM4Engine*, "Org.BouncyCastle.Crypto.Engines", "SM4Engine");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::tau
// Il2CppName: tau
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::tau)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "tau", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::L_ap
// Il2CppName: L_ap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::L_ap)> {
  static const MethodInfo* get() {
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "L_ap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{B});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::T_ap
// Il2CppName: T_ap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)(uint)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::T_ap)> {
  static const MethodInfo* get() {
    static auto* Z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "T_ap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::ExpandKey
// Il2CppName: ExpandKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)(bool, ::Array<uint8_t>*)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::ExpandKey)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* key = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "ExpandKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, key});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::L
// Il2CppName: L
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::L)> {
  static const MethodInfo* get() {
    static auto* B = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "L", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{B});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::T
// Il2CppName: T
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::T)> {
  static const MethodInfo* get() {
    static auto* Z = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "T", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{Z});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)(::Array<uint8_t>*, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::SM4Engine::*)()>(&Org::BouncyCastle::Crypto::Engines::SM4Engine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::SM4Engine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::SM4Engine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!