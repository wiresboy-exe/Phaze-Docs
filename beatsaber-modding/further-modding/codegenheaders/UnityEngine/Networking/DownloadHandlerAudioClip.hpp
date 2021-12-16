// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
// Including type: UnityEngine.AudioType
#include "UnityEngine/AudioType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerAudioClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E11938
  class DownloadHandlerAudioClip : public UnityEngine::Networking::DownloadHandler {
    public:
    // Creating value type constructor for type: DownloadHandlerAudioClip
    DownloadHandlerAudioClip() noexcept {}
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x241CFB4
    UnityEngine::AudioClip* get_audioClip();
    // public System.Void set_streamAudio(System.Boolean value)
    // Offset: 0x241CFF4
    void set_streamAudio(bool value);
    // public System.Void .ctor(System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x241CED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerAudioClip* New_ctor(::Il2CppString* url, UnityEngine::AudioType audioType) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::DownloadHandlerAudioClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerAudioClip*, creationType>(url, audioType)));
    }
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerAudioClip obj, System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x241CE20
    static System::IntPtr Create(UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::Il2CppString* url, UnityEngine::AudioType audioType);
    // private System.Void InternalCreateAudioClip(System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x241CE78
    void InternalCreateAudioClip(::Il2CppString* url, UnityEngine::AudioType audioType);
    // static public UnityEngine.AudioClip GetContent(UnityEngine.Networking.UnityWebRequest www)
    // Offset: 0x241D044
    static UnityEngine::AudioClip* GetContent(UnityEngine::Networking::UnityWebRequest* www);
    // protected override System.Byte[] GetData()
    // Offset: 0x241CF40
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Byte[] DownloadHandler::GetData()
    ::Array<uint8_t>* GetData();
    // protected override System.String GetText()
    // Offset: 0x241CF48
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.String DownloadHandler::GetText()
    ::Il2CppString* GetText();
  }; // UnityEngine.Networking.DownloadHandlerAudioClip
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerAudioClip*, "UnityEngine.Networking", "DownloadHandlerAudioClip");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip
// Il2CppName: get_audioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "get_audioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio
// Il2CppName: set_streamAudio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerAudioClip::*)(bool)>(&UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "set_streamAudio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (*)(UnityEngine::Networking::DownloadHandlerAudioClip*, ::Il2CppString*, UnityEngine::AudioType)>(&UnityEngine::Networking::DownloadHandlerAudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "DownloadHandlerAudioClip")->byval_arg;
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* audioType = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, url, audioType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::InternalCreateAudioClip
// Il2CppName: InternalCreateAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerAudioClip::*)(::Il2CppString*, UnityEngine::AudioType)>(&UnityEngine::Networking::DownloadHandlerAudioClip::InternalCreateAudioClip)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* audioType = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "InternalCreateAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, audioType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::GetContent
// Il2CppName: GetContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AudioClip* (*)(UnityEngine::Networking::UnityWebRequest*)>(&UnityEngine::Networking::DownloadHandlerAudioClip::GetContent)> {
  static const MethodInfo* get() {
    static auto* www = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "GetContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{www});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&UnityEngine::Networking::DownloadHandlerAudioClip::GetData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&UnityEngine::Networking::DownloadHandlerAudioClip::GetText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};