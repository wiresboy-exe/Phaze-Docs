// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.KeySizes
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA2938
  class KeySizes : public ::Il2CppObject {
    public:
    // private System.Int32 m_minSize
    // Size: 0x4
    // Offset: 0x10
    int m_minSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_maxSize
    // Size: 0x4
    // Offset: 0x14
    int m_maxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_skipSize
    // Size: 0x4
    // Offset: 0x18
    int m_skipSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: KeySizes
    KeySizes(int m_minSize_ = {}, int m_maxSize_ = {}, int m_skipSize_ = {}) noexcept : m_minSize{m_minSize_}, m_maxSize{m_maxSize_}, m_skipSize{m_skipSize_} {}
    // Get instance field reference: private System.Int32 m_minSize
    int& dyn_m_minSize();
    // Get instance field reference: private System.Int32 m_maxSize
    int& dyn_m_maxSize();
    // Get instance field reference: private System.Int32 m_skipSize
    int& dyn_m_skipSize();
    // public System.Int32 get_MinSize()
    // Offset: 0x1995E5C
    int get_MinSize();
    // public System.Int32 get_MaxSize()
    // Offset: 0x1995E64
    int get_MaxSize();
    // public System.Int32 get_SkipSize()
    // Offset: 0x1995E6C
    int get_SkipSize();
    // public System.Void .ctor(System.Int32 minSize, System.Int32 maxSize, System.Int32 skipSize)
    // Offset: 0x198B3B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeySizes* New_ctor(int minSize, int maxSize, int skipSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::KeySizes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeySizes*, creationType>(minSize, maxSize, skipSize)));
    }
    // System.Boolean IsLegal(System.Int32 keySize)
    // Offset: 0x1995E74
    bool IsLegal(int keySize);
    // static System.Boolean IsLegalKeySize(System.Security.Cryptography.KeySizes[] legalKeys, System.Int32 size)
    // Offset: 0x1995EC0
    static bool IsLegalKeySize(::Array<System::Security::Cryptography::KeySizes*>* legalKeys, int size);
  }; // System.Security.Cryptography.KeySizes
  #pragma pack(pop)
  static check_size<sizeof(KeySizes), 24 + sizeof(int)> __System_Security_Cryptography_KeySizesSizeCheck;
  static_assert(sizeof(KeySizes) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::KeySizes*, "System.Security.Cryptography", "KeySizes");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::KeySizes::get_MinSize
// Il2CppName: get_MinSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::KeySizes::*)()>(&System::Security::Cryptography::KeySizes::get_MinSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeySizes*), "get_MinSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeySizes::get_MaxSize
// Il2CppName: get_MaxSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::KeySizes::*)()>(&System::Security::Cryptography::KeySizes::get_MaxSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeySizes*), "get_MaxSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeySizes::get_SkipSize
// Il2CppName: get_SkipSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::KeySizes::*)()>(&System::Security::Cryptography::KeySizes::get_SkipSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeySizes*), "get_SkipSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeySizes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::KeySizes::IsLegal
// Il2CppName: IsLegal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::KeySizes::*)(int)>(&System::Security::Cryptography::KeySizes::IsLegal)> {
  static const MethodInfo* get() {
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeySizes*), "IsLegal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keySize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::KeySizes::IsLegalKeySize
// Il2CppName: IsLegalKeySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Array<System::Security::Cryptography::KeySizes*>*, int)>(&System::Security::Cryptography::KeySizes::IsLegalKeySize)> {
  static const MethodInfo* get() {
    static auto* legalKeys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "KeySizes"), 1)->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::KeySizes*), "IsLegalKeySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{legalKeys, size});
  }
};