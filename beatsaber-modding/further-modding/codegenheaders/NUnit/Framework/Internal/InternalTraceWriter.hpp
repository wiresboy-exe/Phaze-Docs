// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.InternalTraceWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class InternalTraceWriter : public System::IO::TextWriter {
    public:
    // private System.IO.TextWriter writer
    // Size: 0x8
    // Offset: 0x28
    System::IO::TextWriter* writer;
    // Field size check
    static_assert(sizeof(System::IO::TextWriter*) == 0x8);
    // Creating value type constructor for type: InternalTraceWriter
    InternalTraceWriter(System::IO::TextWriter* writer_ = {}) noexcept : writer{writer_} {}
    // Get instance field reference: private System.IO.TextWriter writer
    System::IO::TextWriter*& dyn_writer();
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x2294B4C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
  }; // NUnit.Framework.Internal.InternalTraceWriter
  #pragma pack(pop)
  static check_size<sizeof(InternalTraceWriter), 40 + sizeof(System::IO::TextWriter*)> __NUnit_Framework_Internal_InternalTraceWriterSizeCheck;
  static_assert(sizeof(InternalTraceWriter) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::InternalTraceWriter*, "NUnit.Framework.Internal", "InternalTraceWriter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::InternalTraceWriter::get_Encoding
// Il2CppName: get_Encoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (NUnit::Framework::Internal::InternalTraceWriter::*)()>(&NUnit::Framework::Internal::InternalTraceWriter::get_Encoding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::InternalTraceWriter*), "get_Encoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};