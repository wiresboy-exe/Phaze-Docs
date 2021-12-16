// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.GroupPresenceLeaveIntent
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupPresenceLeaveIntent : public ::Il2CppObject {
    public:
    // public readonly System.String DestinationApiName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* DestinationApiName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String LobbySessionId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* LobbySessionId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String MatchSessionId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* MatchSessionId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GroupPresenceLeaveIntent
    GroupPresenceLeaveIntent(::Il2CppString* DestinationApiName_ = {}, ::Il2CppString* LobbySessionId_ = {}, ::Il2CppString* MatchSessionId_ = {}) noexcept : DestinationApiName{DestinationApiName_}, LobbySessionId{LobbySessionId_}, MatchSessionId{MatchSessionId_} {}
    // Get instance field reference: public readonly System.String DestinationApiName
    ::Il2CppString*& dyn_DestinationApiName();
    // Get instance field reference: public readonly System.String LobbySessionId
    ::Il2CppString*& dyn_LobbySessionId();
    // Get instance field reference: public readonly System.String MatchSessionId
    ::Il2CppString*& dyn_MatchSessionId();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x152EF78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupPresenceLeaveIntent* New_ctor(System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::GroupPresenceLeaveIntent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupPresenceLeaveIntent*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.GroupPresenceLeaveIntent
  #pragma pack(pop)
  static check_size<sizeof(GroupPresenceLeaveIntent), 32 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_GroupPresenceLeaveIntentSizeCheck;
  static_assert(sizeof(GroupPresenceLeaveIntent) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::GroupPresenceLeaveIntent*, "Oculus.Platform.Models", "GroupPresenceLeaveIntent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::GroupPresenceLeaveIntent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!