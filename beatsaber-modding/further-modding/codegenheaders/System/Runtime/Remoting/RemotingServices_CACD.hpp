// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.RemotingServices
#include "System/Runtime/Remoting/RemotingServices.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.RemotingServices/System.Runtime.Remoting.CACD
  // [TokenAttribute] Offset: FFFFFFFF
  class RemotingServices::CACD : public ::Il2CppObject {
    public:
    // public System.Object d
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* d;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object c
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* c;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: CACD
    CACD(::Il2CppObject* d_ = {}, ::Il2CppObject* c_ = {}) noexcept : d{d_}, c{c_} {}
    // Get instance field reference: public System.Object d
    ::Il2CppObject*& dyn_d();
    // Get instance field reference: public System.Object c
    ::Il2CppObject*& dyn_c();
    // public System.Void .ctor()
    // Offset: 0x1614A98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemotingServices::CACD* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::RemotingServices::CACD::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemotingServices::CACD*, creationType>()));
    }
  }; // System.Runtime.Remoting.RemotingServices/System.Runtime.Remoting.CACD
  #pragma pack(pop)
  static check_size<sizeof(RemotingServices::CACD), 24 + sizeof(::Il2CppObject*)> __System_Runtime_Remoting_RemotingServices_CACDSizeCheck;
  static_assert(sizeof(RemotingServices::CACD) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::RemotingServices::CACD*, "System.Runtime.Remoting", "RemotingServices/CACD");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::RemotingServices::CACD::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!