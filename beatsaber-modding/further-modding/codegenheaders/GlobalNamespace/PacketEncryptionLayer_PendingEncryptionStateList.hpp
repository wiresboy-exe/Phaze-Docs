// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList
  // [TokenAttribute] Offset: FFFFFFFF
  class PacketEncryptionLayer::PendingEncryptionStateList : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c
    class $$c;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,EncryptionUtility/IEncryptionState> _pendingStatesByPort
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>* pendingStatesByPort;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*) == 0x8);
    // Creating value type constructor for type: PendingEncryptionStateList
    PendingEncryptionStateList(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>* pendingStatesByPort_ = {}) noexcept : pendingStatesByPort{pendingStatesByPort_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*
    constexpr operator System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*() const noexcept {
      return pendingStatesByPort;
    }
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.Int32,EncryptionUtility/IEncryptionState> _pendingStatesByPort
    System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*& dyn__pendingStatesByPort();
    // public System.Boolean get_isEmpty()
    // Offset: 0x16F6834
    bool get_isEmpty();
    // public System.Void Dispose()
    // Offset: 0x16F8128
    void Dispose();
    // public EncryptionUtility/IEncryptionState[] GetSortedEncryptionStates(System.Int32 port)
    // Offset: 0x16F71A0
    ::Array<GlobalNamespace::EncryptionUtility::IEncryptionState*>* GetSortedEncryptionStates(int port);
    // public System.Boolean TryGetEncryptionState(System.Int32 port, out EncryptionUtility/IEncryptionState encryptionState)
    // Offset: 0x16F6EF0
    bool TryGetEncryptionState(int port, ByRef<GlobalNamespace::EncryptionUtility::IEncryptionState*> encryptionState);
    // public System.Void Add(System.Int32 port, EncryptionUtility/IEncryptionState encryptionState)
    // Offset: 0x16F7F4C
    void Add(int port, GlobalNamespace::EncryptionUtility::IEncryptionState* encryptionState);
    // public System.Boolean Remove(System.Int32 port)
    // Offset: 0x16F67CC
    bool Remove(int port);
    // public System.Boolean Remove(System.Int32 port, EncryptionUtility/IEncryptionState encryptionState)
    // Offset: 0x16F757C
    bool Remove(int port, GlobalNamespace::EncryptionUtility::IEncryptionState* encryptionState);
    // public System.Void .ctor()
    // Offset: 0x16F7EDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList*, creationType>()));
    }
  }; // PacketEncryptionLayer/PendingEncryptionStateList
  #pragma pack(pop)
  static check_size<sizeof(PacketEncryptionLayer::PendingEncryptionStateList), 16 + sizeof(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::EncryptionUtility::IEncryptionState*>*)> __GlobalNamespace_PacketEncryptionLayer_PendingEncryptionStateListSizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::PendingEncryptionStateList) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*, "", "PacketEncryptionLayer/PendingEncryptionStateList");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::get_isEmpty
// Il2CppName: get_isEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::*)()>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::get_isEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::*)()>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::GetSortedEncryptionStates
// Il2CppName: GetSortedEncryptionStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::EncryptionUtility::IEncryptionState*>* (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::*)(int)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::GetSortedEncryptionStates)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*), "GetSortedEncryptionStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::TryGetEncryptionState
// Il2CppName: TryGetEncryptionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::*)(int, ByRef<GlobalNamespace::EncryptionUtility::IEncryptionState*>)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::TryGetEncryptionState)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encryptionState = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*), "TryGetEncryptionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port, encryptionState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::*)(int, GlobalNamespace::EncryptionUtility::IEncryptionState*)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Add)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encryptionState = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port, encryptionState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::*)(int)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Remove)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::*)(int, GlobalNamespace::EncryptionUtility::IEncryptionState*)>(&GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::Remove)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encryptionState = &::il2cpp_utils::GetClassFromName("", "EncryptionUtility/IEncryptionState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port, encryptionState});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!