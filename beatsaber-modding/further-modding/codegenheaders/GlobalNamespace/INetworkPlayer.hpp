// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
  // Forward declaring type: BeatmapLevelSelectionMask
  struct BeatmapLevelSelectionMask;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: INetworkPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class INetworkPlayer {
    public:
    // Creating value type constructor for type: INetworkPlayer
    INetworkPlayer() noexcept {}
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
    // public System.Boolean get_isMe()
    // Offset: 0xFFFFFFFF
    bool get_isMe();
    // public System.Int32 get_currentPartySize()
    // Offset: 0xFFFFFFFF
    int get_currentPartySize();
    // public System.Boolean get_isMyPartyOwner()
    // Offset: 0xFFFFFFFF
    bool get_isMyPartyOwner();
    // public IConnectedPlayer get_connectedPlayer()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnectedPlayer* get_connectedPlayer();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public BeatmapLevelSelectionMask get_selectionMask()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();
    // public System.Boolean get_canJoin()
    // Offset: 0xFFFFFFFF
    bool get_canJoin();
    // public System.Boolean get_requiresPassword()
    // Offset: 0xFFFFFFFF
    bool get_requiresPassword();
    // public System.Boolean get_isWaitingOnJoin()
    // Offset: 0xFFFFFFFF
    bool get_isWaitingOnJoin();
    // public System.Boolean get_canInvite()
    // Offset: 0xFFFFFFFF
    bool get_canInvite();
    // public System.Boolean get_isWaitingOnInvite()
    // Offset: 0xFFFFFFFF
    bool get_isWaitingOnInvite();
    // public System.Boolean get_canKick()
    // Offset: 0xFFFFFFFF
    bool get_canKick();
    // public System.Boolean get_canLeave()
    // Offset: 0xFFFFFFFF
    bool get_canLeave();
    // public System.Boolean get_canBlock()
    // Offset: 0xFFFFFFFF
    bool get_canBlock();
    // public System.Boolean get_canUnblock()
    // Offset: 0xFFFFFFFF
    bool get_canUnblock();
    // public System.Void Join()
    // Offset: 0xFFFFFFFF
    void Join();
    // public System.Void Join(System.String password)
    // Offset: 0xFFFFFFFF
    void Join(::Il2CppString* password);
    // public System.Void Invite()
    // Offset: 0xFFFFFFFF
    void Invite();
    // public System.Void Kick()
    // Offset: 0xFFFFFFFF
    void Kick();
    // public System.Void Leave()
    // Offset: 0xFFFFFFFF
    void Leave();
    // public System.Void Block()
    // Offset: 0xFFFFFFFF
    void Block();
    // public System.Void Unblock()
    // Offset: 0xFFFFFFFF
    void Unblock();
    // public System.Void SendJoinResponse(System.Boolean accept)
    // Offset: 0xFFFFFFFF
    void SendJoinResponse(bool accept);
    // public System.Void SendInviteResponse(System.Boolean accept)
    // Offset: 0xFFFFFFFF
    void SendInviteResponse(bool accept);
  }; // INetworkPlayer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INetworkPlayer*, "", "INetworkPlayer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_isMe
// Il2CppName: get_isMe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_isMe)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_isMe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_currentPartySize
// Il2CppName: get_currentPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_currentPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_currentPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_isMyPartyOwner
// Il2CppName: get_isMyPartyOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_isMyPartyOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_isMyPartyOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_connectedPlayer
// Il2CppName: get_connectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer* (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_connectedPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_connectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_configuration
// Il2CppName: get_configuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GameplayServerConfiguration (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_configuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_configuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_selectionMask
// Il2CppName: get_selectionMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapLevelSelectionMask (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_selectionMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_selectionMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_canJoin
// Il2CppName: get_canJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_canJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_canJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_requiresPassword
// Il2CppName: get_requiresPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_requiresPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_requiresPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_isWaitingOnJoin
// Il2CppName: get_isWaitingOnJoin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_isWaitingOnJoin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_isWaitingOnJoin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_canInvite
// Il2CppName: get_canInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_canInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_canInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_isWaitingOnInvite
// Il2CppName: get_isWaitingOnInvite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_isWaitingOnInvite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_isWaitingOnInvite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_canKick
// Il2CppName: get_canKick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_canKick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_canKick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_canLeave
// Il2CppName: get_canLeave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_canLeave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_canLeave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_canBlock
// Il2CppName: get_canBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_canBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_canBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::get_canUnblock
// Il2CppName: get_canUnblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::get_canUnblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "get_canUnblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::Join)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::Join
// Il2CppName: Join
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)(::Il2CppString*)>(&GlobalNamespace::INetworkPlayer::Join)> {
  static const MethodInfo* get() {
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "Join", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::Invite
// Il2CppName: Invite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::Invite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "Invite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::Kick
// Il2CppName: Kick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::Kick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "Kick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::Leave
// Il2CppName: Leave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::Leave)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "Leave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::Block
// Il2CppName: Block
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::Block)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "Block", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::Unblock
// Il2CppName: Unblock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)()>(&GlobalNamespace::INetworkPlayer::Unblock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "Unblock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::SendJoinResponse
// Il2CppName: SendJoinResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)(bool)>(&GlobalNamespace::INetworkPlayer::SendJoinResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "SendJoinResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::INetworkPlayer::SendInviteResponse
// Il2CppName: SendInviteResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::INetworkPlayer::*)(bool)>(&GlobalNamespace::INetworkPlayer::SendInviteResponse)> {
  static const MethodInfo* get() {
    static auto* accept = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::INetworkPlayer*), "SendInviteResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accept});
  }
};