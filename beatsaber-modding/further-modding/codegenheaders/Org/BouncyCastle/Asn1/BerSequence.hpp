// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.DerSequence
#include "Org/BouncyCastle/Asn1/DerSequence.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerSequence
  // [TokenAttribute] Offset: FFFFFFFF
  class BerSequence : public Org::BouncyCastle::Asn1::DerSequence {
    public:
    // Creating value type constructor for type: BerSequence
    BerSequence() noexcept {}
    // Get static field: static public readonly Org.BouncyCastle.Asn1.BerSequence Empty
    static Org::BouncyCastle::Asn1::BerSequence* _get_Empty();
    // Set static field: static public readonly Org.BouncyCastle.Asn1.BerSequence Empty
    static void _set_Empty(Org::BouncyCastle::Asn1::BerSequence* value);
    // static public Org.BouncyCastle.Asn1.BerSequence FromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Offset: 0x17337F8
    static Org::BouncyCastle::Asn1::BerSequence* FromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector);
    // public System.Void .ctor()
    // Offset: 0x1735A94
    // Implemented from: Org.BouncyCastle.Asn1.DerSequence
    // Base method: System.Void DerSequence::.ctor()
    // Base method: System.Void Asn1Sequence::.ctor()
    // Base method: System.Void Asn1Object::.ctor()
    // Base method: System.Void Asn1Encodable::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSequence* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSequence*, creationType>()));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Offset: 0x1731F70
    // Implemented from: Org.BouncyCastle.Asn1.DerSequence
    // Base method: System.Void DerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    // Base method: System.Void Asn1Sequence::.ctor(Org.BouncyCastle.Asn1.Asn1Encodable element)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSequence* New_ctor(Org::BouncyCastle::Asn1::Asn1Encodable* element) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSequence*, creationType>(element)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Offset: 0x1735A20
    // Implemented from: Org.BouncyCastle.Asn1.DerSequence
    // Base method: System.Void DerSequence::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    // Base method: System.Void Asn1Sequence::.ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector elementVector)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerSequence* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerSequence::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerSequence*, creationType>(elementVector)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1736124
    // Implemented from: Org.BouncyCastle.Asn1.DerSequence
    // Base method: System.Void DerSequence::.cctor()
    static void _cctor();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1735B00
    // Implemented from: Org.BouncyCastle.Asn1.DerSequence
    // Base method: System.Void DerSequence::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.BerSequence
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerSequence*, "Org.BouncyCastle.Asn1", "BerSequence");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSequence::FromVector
// Il2CppName: FromVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::BerSequence* (*)(Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(&Org::BouncyCastle::Asn1::BerSequence::FromVector)> {
  static const MethodInfo* get() {
    static auto* elementVector = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1EncodableVector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerSequence*), "FromVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{elementVector});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSequence::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSequence::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Asn1::BerSequence::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerSequence*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::BerSequence::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::BerSequence::*)(Org::BouncyCastle::Asn1::DerOutputStream*)>(&Org::BouncyCastle::Asn1::BerSequence::Encode)> {
  static const MethodInfo* get() {
    static auto* derOut = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerOutputStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::BerSequence*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{derOut});
  }
};