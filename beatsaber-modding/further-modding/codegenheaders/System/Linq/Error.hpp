// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Error
  // [TokenAttribute] Offset: FFFFFFFF
  class Error : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Error
    Error() noexcept {}
    // static System.Exception ArgumentNull(System.String s)
    // Offset: 0x23BC538
    static System::Exception* ArgumentNull(::Il2CppString* s);
    // static System.Exception ArgumentOutOfRange(System.String s)
    // Offset: 0x23BC17C
    static System::Exception* ArgumentOutOfRange(::Il2CppString* s);
    // static System.Exception MoreThanOneElement()
    // Offset: 0x23BD04C
    static System::Exception* MoreThanOneElement();
    // static System.Exception MoreThanOneMatch()
    // Offset: 0x23BD0B4
    static System::Exception* MoreThanOneMatch();
    // static System.Exception NoElements()
    // Offset: 0x23BC864
    static System::Exception* NoElements();
    // static System.Exception NoMatch()
    // Offset: 0x23BD11C
    static System::Exception* NoMatch();
    // static System.Exception NotSupported()
    // Offset: 0x23BD184
    static System::Exception* NotSupported();
  }; // System.Linq.Error
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Error*, "System.Linq", "Error");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Error::ArgumentNull
// Il2CppName: ArgumentNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppString*)>(&System::Linq::Error::ArgumentNull)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Error*), "ArgumentNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Linq::Error::ArgumentOutOfRange
// Il2CppName: ArgumentOutOfRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)(::Il2CppString*)>(&System::Linq::Error::ArgumentOutOfRange)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Error*), "ArgumentOutOfRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Linq::Error::MoreThanOneElement
// Il2CppName: MoreThanOneElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)()>(&System::Linq::Error::MoreThanOneElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Error*), "MoreThanOneElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Error::MoreThanOneMatch
// Il2CppName: MoreThanOneMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)()>(&System::Linq::Error::MoreThanOneMatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Error*), "MoreThanOneMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Error::NoElements
// Il2CppName: NoElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)()>(&System::Linq::Error::NoElements)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Error*), "NoElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Error::NoMatch
// Il2CppName: NoMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)()>(&System::Linq::Error::NoMatch)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Error*), "NoMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Error::NotSupported
// Il2CppName: NotSupported
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception* (*)()>(&System::Linq::Error::NotSupported)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Error*), "NotSupported", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};