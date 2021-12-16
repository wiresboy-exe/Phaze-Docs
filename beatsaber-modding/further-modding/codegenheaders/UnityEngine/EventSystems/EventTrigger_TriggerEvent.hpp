// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.EventTrigger
#include "UnityEngine/EventSystems/EventTrigger.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.TriggerEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class EventTrigger::TriggerEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::EventSystems::BaseEventData*> {
    public:
    // Creating value type constructor for type: TriggerEvent
    TriggerEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1470A44
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventTrigger::TriggerEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::EventTrigger::TriggerEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventTrigger::TriggerEvent*, creationType>()));
    }
  }; // UnityEngine.EventSystems.EventTrigger/UnityEngine.EventSystems.TriggerEvent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::EventTrigger::TriggerEvent*, "UnityEngine.EventSystems", "EventTrigger/TriggerEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::EventTrigger::TriggerEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!