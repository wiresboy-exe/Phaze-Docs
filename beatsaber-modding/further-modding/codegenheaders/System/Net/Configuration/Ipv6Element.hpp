// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.Ipv6Element
  // [TokenAttribute] Offset: FFFFFFFF
  class Ipv6Element : public System::Configuration::ConfigurationElement {
    public:
    // Creating value type constructor for type: Ipv6Element
    Ipv6Element() noexcept {}
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x16D5D60
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // public System.Void .ctor()
    // Offset: 0x16D5D20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ipv6Element* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Configuration::Ipv6Element::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ipv6Element*, creationType>()));
    }
  }; // System.Net.Configuration.Ipv6Element
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::Ipv6Element*, "System.Net.Configuration", "Ipv6Element");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::Ipv6Element::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::Ipv6Element::*)()>(&System::Net::Configuration::Ipv6Element::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::Ipv6Element*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::Ipv6Element::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
