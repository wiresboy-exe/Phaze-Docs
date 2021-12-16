// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Stack
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: DA537C
  // [DebuggerDisplayAttribute] Offset: DA537C
  // [ComVisibleAttribute] Offset: DA537C
  class Stack : public ::Il2CppObject/*, public System::ICloneable, public System::Collections::ICollection*/ {
    public:
    // Nested type: System::Collections::Stack::StackEnumerator
    class StackEnumerator;
    // Nested type: System::Collections::Stack::StackDebugView
    class StackDebugView;
    // private System.Object[] _array
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* array;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x18
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Stack
    Stack(::Array<::Il2CppObject*>* array_ = {}, int size_ = {}, int version_ = {}) noexcept : array{array_}, size{size_}, version{version_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Get instance field reference: private System.Object[] _array
    ::Array<::Il2CppObject*>*& dyn__array();
    // Get instance field reference: private System.Int32 _size
    int& dyn__size();
    // Get instance field reference: private System.Int32 _version
    int& dyn__version();
    // public System.Int32 get_Count()
    // Offset: 0x19BDA8C
    int get_Count();
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x19BD9B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack* New_ctor(int initialCapacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Stack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack*, creationType>(initialCapacity)));
    }
    // public System.Void Clear()
    // Offset: 0x19BDA94
    void Clear();
    // public System.Object Clone()
    // Offset: 0x19BDAD0
    ::Il2CppObject* Clone();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x19BDB70
    void CopyTo(System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x19BDE28
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Object Peek()
    // Offset: 0x19BDECC
    ::Il2CppObject* Peek();
    // public System.Object Pop()
    // Offset: 0x19BDF94
    ::Il2CppObject* Pop();
    // public System.Void Push(System.Object obj)
    // Offset: 0x19BE06C
    void Push(::Il2CppObject* obj);
    // public System.Void .ctor()
    // Offset: 0x19BD950
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Stack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stack*, creationType>()));
    }
  }; // System.Collections.Stack
  #pragma pack(pop)
  static check_size<sizeof(Stack), 28 + sizeof(int)> __System_Collections_StackSizeCheck;
  static_assert(sizeof(Stack) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Stack*, "System.Collections", "Stack");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Stack::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Stack::*)()>(&System::Collections::Stack::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Stack::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Stack::*)()>(&System::Collections::Stack::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Stack::*)()>(&System::Collections::Stack::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Stack::*)(System::Array*, int)>(&System::Collections::Stack::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (System::Collections::Stack::*)()>(&System::Collections::Stack::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::Peek
// Il2CppName: Peek
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Stack::*)()>(&System::Collections::Stack::Peek)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "Peek", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::Stack::*)()>(&System::Collections::Stack::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Stack::*)(::Il2CppObject*)>(&System::Collections::Stack::Push)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Stack*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Collections::Stack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!