// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier
#include "Org/BouncyCastle/Math/EC/Multiplier/WTauNafMultiplier.hpp"
// Including type: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
#include "Org/BouncyCastle/Math/EC/Multiplier/IPreCompCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mPoint
  class AbstractF2mPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: PreCompInfo
  class PreCompInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier/Org.BouncyCastle.Math.EC.Multiplier.WTauNafCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class WTauNafMultiplier::WTauNafCallback : public ::Il2CppObject/*, public Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*/ {
    public:
    // private readonly Org.BouncyCastle.Math.EC.AbstractF2mPoint m_p
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::AbstractF2mPoint* m_p;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::AbstractF2mPoint*) == 0x8);
    // private readonly System.SByte m_a
    // Size: 0x1
    // Offset: 0x18
    int8_t m_a;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    // Creating value type constructor for type: WTauNafCallback
    WTauNafCallback(Org::BouncyCastle::Math::EC::AbstractF2mPoint* m_p_ = {}, int8_t m_a_ = {}) noexcept : m_p{m_p_}, m_a{m_a_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback
    operator Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.AbstractF2mPoint m_p
    Org::BouncyCastle::Math::EC::AbstractF2mPoint*& dyn_m_p();
    // Get instance field reference: private readonly System.SByte m_a
    int8_t& dyn_m_a();
    // System.Void .ctor(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, System.SByte a)
    // Offset: 0x1DCC478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WTauNafMultiplier::WTauNafCallback* New_ctor(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WTauNafMultiplier::WTauNafCallback*, creationType>(p, a)));
    }
    // public Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo Precompute(Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo existing)
    // Offset: 0x1DCC518
    Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);
  }; // Org.BouncyCastle.Math.EC.Multiplier.WTauNafMultiplier/Org.BouncyCastle.Math.EC.Multiplier.WTauNafCallback
  #pragma pack(pop)
  static check_size<sizeof(WTauNafMultiplier::WTauNafCallback), 24 + sizeof(int8_t)> __Org_BouncyCastle_Math_EC_Multiplier_WTauNafMultiplier_WTauNafCallbackSizeCheck;
  static_assert(sizeof(WTauNafMultiplier::WTauNafCallback) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback*, "Org.BouncyCastle.Math.EC.Multiplier", "WTauNafMultiplier/WTauNafCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback::Precompute
// Il2CppName: Precompute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* (Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback::*)(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*)>(&Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback::Precompute)> {
  static const MethodInfo* get() {
    static auto* existing = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::Multiplier::WTauNafMultiplier::WTauNafCallback*), "Precompute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{existing});
  }
};
