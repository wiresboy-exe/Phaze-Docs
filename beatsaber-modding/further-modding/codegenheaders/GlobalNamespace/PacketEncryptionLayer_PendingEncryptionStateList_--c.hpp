// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PacketEncryptionLayer/PendingEncryptionStateList
#include "GlobalNamespace/PacketEncryptionLayer_PendingEncryptionStateList.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
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
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PacketEncryptionLayer::PendingEncryptionStateList::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly PacketEncryptionLayer/PendingEncryptionStateList/<>c <>9
    static GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c* _get_$$9();
    // Set static field: static public readonly PacketEncryptionLayer/PendingEncryptionStateList/<>c <>9
    static void _set_$$9(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,EncryptionUtility/IEncryptionState>,EncryptionUtility/IEncryptionState> <>9__4_1
    static System::Func_2<System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>, GlobalNamespace::EncryptionUtility::IEncryptionState*>* _get_$$9__4_1();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,EncryptionUtility/IEncryptionState>,EncryptionUtility/IEncryptionState> <>9__4_1
    static void _set_$$9__4_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>, GlobalNamespace::EncryptionUtility::IEncryptionState*>* value);
    // static private System.Void .cctor()
    // Offset: 0x16F82C4
    static void _cctor();
    // EncryptionUtility/IEncryptionState <GetSortedEncryptionStates>b__4_1(System.Collections.Generic.KeyValuePair`2<System.Int32,EncryptionUtility/IEncryptionState> kvp)
    // Offset: 0x16F8330
    GlobalNamespace::EncryptionUtility::IEncryptionState* $GetSortedEncryptionStates$b__4_1(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*> kvp);
    // public System.Void .ctor()
    // Offset: 0x16F8328
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList::$$c*, creationType>()));
    }
  }; // PacketEncryptionLayer/PendingEncryptionStateList/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c::$GetSortedEncryptionStates$b__4_1
// Il2CppName: <GetSortedEncryptionStates>b__4_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EncryptionUtility::IEncryptionState* (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c::*)(System::Collections::Generic::KeyValuePair_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c::$GetSortedEncryptionStates$b__4_1)> {
  static const MethodInfo* get() {
    static auto* kvp = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c*), "<GetSortedEncryptionStates>b__4_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{kvp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!