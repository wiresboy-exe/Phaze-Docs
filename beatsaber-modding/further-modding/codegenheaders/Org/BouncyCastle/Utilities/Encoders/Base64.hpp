// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities.Encoders
namespace Org::BouncyCastle::Utilities::Encoders {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Encoders.Base64
  // [TokenAttribute] Offset: FFFFFFFF
  class Base64 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Base64
    Base64() noexcept {}
    // static public System.Byte[] Decode(System.String data)
    // Offset: 0x1FEAC24
    static ::Array<uint8_t>* Decode(::Il2CppString* data);
  }; // Org.BouncyCastle.Utilities.Encoders.Base64
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Encoders::Base64*, "Org.BouncyCastle.Utilities.Encoders", "Base64");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Utilities::Encoders::Base64::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (*)(::Il2CppString*)>(&Org::BouncyCastle::Utilities::Encoders::Base64::Decode)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Utilities::Encoders::Base64*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
