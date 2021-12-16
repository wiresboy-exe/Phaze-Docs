// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/ECMultiplier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
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
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractECMultiplier : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*/ {
    public:
    // Creating value type constructor for type: AbstractECMultiplier
    AbstractECMultiplier() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier
    operator Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*>(this);
    }
    // public Org.BouncyCastle.Math.EC.ECPoint Multiply(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x1DC8634
    Org::BouncyCastle::Math::EC::ECPoint* Multiply(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
    // protected Org.BouncyCastle.Math.EC.ECPoint MultiplyPositive(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
    // protected Org.BouncyCastle.Math.EC.ECPoint CheckResult(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x1DC8714
    Org::BouncyCastle::Math::EC::ECPoint* CheckResult(Org::BouncyCastle::Math::EC::ECPoint* p);
    // protected System.Void .ctor()
    // Offset: 0x1DC8720
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractECMultiplier* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractECMultiplier*, creationType>()));
    }
  }; // Org.BouncyCastle.Math.EC.Multiplier.AbstractECMultiplier
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "AbstractECMultiplier");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::Multiply
// Il2CppName: Multiply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::Multiply)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*), "Multiply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::MultiplyPositive
// Il2CppName: MultiplyPositive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint*, Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::MultiplyPositive)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    static auto* k = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*), "MultiplyPositive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, k});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::CheckResult
// Il2CppName: CheckResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint*)>(&Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::CheckResult)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC", "ECPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier*), "CheckResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
