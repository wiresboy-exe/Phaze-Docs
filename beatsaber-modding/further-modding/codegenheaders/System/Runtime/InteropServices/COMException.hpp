// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.InteropServices.ExternalException
#include "System/Runtime/InteropServices/ExternalException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.COMException
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA445C
  class COMException : public System::Runtime::InteropServices::ExternalException {
    public:
    // Creating value type constructor for type: COMException
    COMException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x148FC60
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static COMException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::COMException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<COMException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x148FD1C
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static COMException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::COMException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<COMException*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x148FD2C
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.String ExternalException::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.InteropServices.COMException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::COMException*, "System.Runtime.InteropServices", "COMException");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::COMException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::COMException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::COMException::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::InteropServices::COMException::*)()>(&System::Runtime::InteropServices::COMException::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::COMException*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
