// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngineInternal.Input.NativeInputEventBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  struct NativeInputEventBuffer/*, public System::ValueType*/ {
    public:
    // public System.Void* eventBuffer
    // Size: 0x8
    // Offset: 0x0
    void* eventBuffer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    // public System.Int32 eventCount
    // Size: 0x4
    // Offset: 0x8
    int eventCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sizeInBytes
    // Size: 0x4
    // Offset: 0xC
    int sizeInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 capacityInBytes
    // Size: 0x4
    // Offset: 0x10
    int capacityInBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NativeInputEventBuffer
    constexpr NativeInputEventBuffer(void* eventBuffer_ = {}, int eventCount_ = {}, int sizeInBytes_ = {}, int capacityInBytes_ = {}) noexcept : eventBuffer{eventBuffer_}, eventCount{eventCount_}, sizeInBytes{sizeInBytes_}, capacityInBytes{capacityInBytes_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Void* eventBuffer
    void*& dyn_eventBuffer();
    // Get instance field reference: public System.Int32 eventCount
    int& dyn_eventCount();
    // Get instance field reference: public System.Int32 sizeInBytes
    int& dyn_sizeInBytes();
    // Get instance field reference: public System.Int32 capacityInBytes
    int& dyn_capacityInBytes();
  }; // UnityEngineInternal.Input.NativeInputEventBuffer
  #pragma pack(pop)
  static check_size<sizeof(NativeInputEventBuffer), 16 + sizeof(int)> __UnityEngineInternal_Input_NativeInputEventBufferSizeCheck;
  static_assert(sizeof(NativeInputEventBuffer) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeInputEventBuffer, "UnityEngineInternal.Input", "NativeInputEventBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
