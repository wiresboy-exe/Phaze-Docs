// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNetDebug
#include "GlobalNamespace/BGNetDebug.hpp"
// Including type: LiteNetLib.INetLogger
#include "LiteNetLib/INetLogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNetDebug/NetLogger
  // [TokenAttribute] Offset: FFFFFFFF
  class BGNetDebug::NetLogger : public ::Il2CppObject/*, public LiteNetLib::INetLogger*/ {
    public:
    // Creating value type constructor for type: NetLogger
    NetLogger() noexcept {}
    // Creating interface conversion operator: operator LiteNetLib::INetLogger
    operator LiteNetLib::INetLogger() noexcept {
      return *reinterpret_cast<LiteNetLib::INetLogger*>(this);
    }
    // public System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    // Offset: 0x1335258
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void WriteNet(LiteNetLib.NetLogLevel level, System.String str, params System.Object[] args)
    template<class ...TParams>
    void WriteNet(LiteNetLib::NetLogLevel level, ::Il2CppString* str, TParams&&... args) {
      WriteNet(level, str, {args...});
    }
    // public System.Void .ctor()
    // Offset: 0x1334F88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BGNetDebug::NetLogger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BGNetDebug::NetLogger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BGNetDebug::NetLogger*, creationType>()));
    }
  }; // BGNetDebug/NetLogger
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BGNetDebug::NetLogger*, "", "BGNetDebug/NetLogger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BGNetDebug::NetLogger::WriteNet
// Il2CppName: WriteNet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BGNetDebug::NetLogger::*)(LiteNetLib::NetLogLevel, ::Il2CppString*, ::Array<::Il2CppObject*>*)>(&GlobalNamespace::BGNetDebug::NetLogger::WriteNet)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetLogLevel")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BGNetDebug::NetLogger*), "WriteNet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level, str, args});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BGNetDebug::NetLogger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!