// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AsymmetricAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA28D4
  class AsymmetricAlgorithm : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // protected System.Int32 KeySizeValue
    // Size: 0x4
    // Offset: 0x10
    int KeySizeValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: KeySizeValue and: LegalKeySizesValue
    char __padding0[0x4] = {};
    // protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Security::Cryptography::KeySizes*>* LegalKeySizesValue;
    // Field size check
    static_assert(sizeof(::Array<System::Security::Cryptography::KeySizes*>*) == 0x8);
    // Creating value type constructor for type: AsymmetricAlgorithm
    AsymmetricAlgorithm(int KeySizeValue_ = {}, ::Array<System::Security::Cryptography::KeySizes*>* LegalKeySizesValue_ = {}) noexcept : KeySizeValue{KeySizeValue_}, LegalKeySizesValue{LegalKeySizesValue_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get instance field reference: protected System.Int32 KeySizeValue
    int& dyn_KeySizeValue();
    // Get instance field reference: protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    ::Array<System::Security::Cryptography::KeySizes*>*& dyn_LegalKeySizesValue();
    // public System.Int32 get_KeySize()
    // Offset: 0x198B484
    int get_KeySize();
    // public System.Void set_KeySize(System.Int32 value)
    // Offset: 0x198B48C
    void set_KeySize(int value);
    // public System.Void Dispose()
    // Offset: 0x198B400
    void Dispose();
    // public System.Void Clear()
    // Offset: 0x198B404
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x198B480
    void Dispose(bool disposing);
    // public System.Void FromXmlString(System.String xmlString)
    // Offset: 0x198B5D8
    void FromXmlString(::Il2CppString* xmlString);
    // public System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x198B638
    ::Il2CppString* ToXmlString(bool includePrivateParameters);
    // protected System.Void .ctor()
    // Offset: 0x198B3F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsymmetricAlgorithm* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::AsymmetricAlgorithm::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsymmetricAlgorithm*, creationType>()));
    }
  }; // System.Security.Cryptography.AsymmetricAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(AsymmetricAlgorithm), 24 + sizeof(::Array<System::Security::Cryptography::KeySizes*>*)> __System_Security_Cryptography_AsymmetricAlgorithmSizeCheck;
  static_assert(sizeof(AsymmetricAlgorithm) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize
// Il2CppName: get_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::get_KeySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "get_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize
// Il2CppName: set_KeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(int)>(&System::Security::Cryptography::AsymmetricAlgorithm::set_KeySize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "set_KeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)()>(&System::Security::Cryptography::AsymmetricAlgorithm::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(&System::Security::Cryptography::AsymmetricAlgorithm::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString
// Il2CppName: FromXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AsymmetricAlgorithm::*)(::Il2CppString*)>(&System::Security::Cryptography::AsymmetricAlgorithm::FromXmlString)> {
  static const MethodInfo* get() {
    static auto* xmlString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "FromXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlString});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString
// Il2CppName: ToXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::AsymmetricAlgorithm::*)(bool)>(&System::Security::Cryptography::AsymmetricAlgorithm::ToXmlString)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::AsymmetricAlgorithm*), "ToXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::AsymmetricAlgorithm::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
