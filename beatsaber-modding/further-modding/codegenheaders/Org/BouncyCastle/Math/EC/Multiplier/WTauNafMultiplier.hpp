// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/AbstractECMultiplier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mPoint
  class AbstractF2mPoint;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Forward declaring type: ZTauElement
  class ZTauElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
  // [TokenAttribute] Offset: FFFFFFFF
  class WTauNafMultiplier : public Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback
    class WTauNafCallback;
    // Creating value type constructor for type: WTauNafMultiplier
    WTauNafMultiplier() noexcept {}
    // Get static field: static readonly System.String PRECOMP_NAME
    static ::Il2CppString* _get_PRECOMP_NAME();
    // Set static field: static readonly System.String PRECOMP_NAME
    static void _set_PRECOMP_NAME(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x1DCC4B4
    static void _cctor();
    // private Org.BouncyCastle.Math.EC.AbstractF2mPoint MultiplyWTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, Org.BouncyCastle.Math.EC.Abc.ZTauElement lambda, System.SByte a, System.SByte mu)
    // Offset: 0x1DCBEDC
    Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t a, int8_t mu);
    // static private Org.BouncyCastle.Math.EC.AbstractF2mPoint MultiplyFromWTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, System.SByte[] u)
    // Offset: 0x1DCC038
    static Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromWTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Array<int8_t>* u);
    // public System.Void .ctor()
    // Offset: 0x1DCC510
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: System.Void AbstractECMultiplier::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WTauNafMultiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WTauNafMultiplier*, creationType>()));
    }
    // protected override Org.BouncyCastle.Math.EC.ECPoint MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint point, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1DCBD00
    // Implemented from: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECMultiplier::MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint point, Org.BouncyCastle.Math.BigInteger k)
    Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint* point, Org::BouncyCastle::Math::BigInteger* k);
  }; // Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf
// Il2CppName: MultiplyWTnaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::AbstractF2mPoint* (Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(Org::BouncyCastle::Math::EC::AbstractF2mPoint*, Org::BouncyCastle::Math::EC::Abc::ZTauElement*, int8_t, int8_t)>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyWTnaf)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "AbstractF2mPoint")->byval_arg;
    static auto* lambda = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Abc", "ZTauElement")->byval_arg;
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* mu = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*), "MultiplyWTnaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, lambda, a, mu});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf
// Il2CppName: MultiplyFromWTnaf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::AbstractF2mPoint* (*)(Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<int8_t>*)>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyFromWTnaf)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "AbstractF2mPoint")->byval_arg;
    static auto* u = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "SByte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*), "MultiplyFromWTnaf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, u});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive
// Il2CppName: MultiplyPositive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::MultiplyPositive)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier*), "MultiplyPositive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point, k});
  }
};
