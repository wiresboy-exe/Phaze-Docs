// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BitMaskSparse
#include "GlobalNamespace/BitMaskSparse.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BitMaskSparse/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BitMaskSparse::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly BitMaskSparse/<>c <>9
    static GlobalNamespace::BitMaskSparse::$$c* _get_$$9();
    // Set static field: static public readonly BitMaskSparse/<>c <>9
    static void _set_$$9(GlobalNamespace::BitMaskSparse::$$c* value);
    // Get static field: static public System.Func`2<System.UInt32,System.String> <>9__8_0
    static System::Func_2<uint, ::Il2CppString*>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<System.UInt32,System.String> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<uint, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x23736A4
    static void _cctor();
    // System.String <ToString>b__8_0(System.UInt32 i)
    // Offset: 0x2373710
    ::Il2CppString* $ToString$b__8_0(uint i);
    // public System.Void .ctor()
    // Offset: 0x2373708
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BitMaskSparse::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BitMaskSparse::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BitMaskSparse::$$c*, creationType>()));
    }
  }; // BitMaskSparse/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMaskSparse::$$c*, "", "BitMaskSparse/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BitMaskSparse::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::$$c::$ToString$b__8_0
// Il2CppName: <ToString>b__8_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::BitMaskSparse::$$c::*)(uint)>(&GlobalNamespace::BitMaskSparse::$$c::$ToString$b__8_0)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BitMaskSparse::$$c*), "<ToString>b__8_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BitMaskSparse::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!