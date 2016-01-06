// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
#define FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_

#include "flatbuffers/flatbuffers.h"

#include "namespace_test1_generated.h"

namespace NamespaceA {
namespace NamespaceB {
struct TableInNestedNS;
struct StructInNestedNS;
}  // namespace NamespaceB
}  // namespace NamespaceA

namespace NamespaceA {

struct TableInFirstNS;

struct TableInFirstNS FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_FOO_TABLE = 4,
    VT_FOO_ENUM = 6,
    VT_FOO_STRUCT = 8
  };
  const NamespaceA::NamespaceB::TableInNestedNS *foo_table() const { return GetPointer<const NamespaceA::NamespaceB::TableInNestedNS *>(VT_FOO_TABLE); }
  NamespaceA::NamespaceB::TableInNestedNS *mutable_foo_table() { return GetPointer<NamespaceA::NamespaceB::TableInNestedNS *>(VT_FOO_TABLE); }
  NamespaceA::NamespaceB::EnumInNestedNS foo_enum() const { return static_cast<NamespaceA::NamespaceB::EnumInNestedNS>(GetField<int8_t>(VT_FOO_ENUM, 0)); }
  bool mutate_foo_enum(NamespaceA::NamespaceB::EnumInNestedNS _foo_enum) { return SetField(VT_FOO_ENUM, static_cast<int8_t>(_foo_enum)); }
  const NamespaceA::NamespaceB::StructInNestedNS *foo_struct() const { return GetStruct<const NamespaceA::NamespaceB::StructInNestedNS *>(VT_FOO_STRUCT); }
  NamespaceA::NamespaceB::StructInNestedNS *mutable_foo_struct() { return GetStruct<NamespaceA::NamespaceB::StructInNestedNS *>(VT_FOO_STRUCT); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_FOO_TABLE) &&
           verifier.VerifyTable(foo_table()) &&
           VerifyField<int8_t>(verifier, VT_FOO_ENUM) &&
           VerifyField<NamespaceA::NamespaceB::StructInNestedNS>(verifier, VT_FOO_STRUCT) &&
           verifier.EndTable();
  }
};

struct TableInFirstNSBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_foo_table(flatbuffers::Offset<NamespaceA::NamespaceB::TableInNestedNS> foo_table) { fbb_.AddOffset(TableInFirstNS::VT_FOO_TABLE, foo_table); }
  void add_foo_enum(NamespaceA::NamespaceB::EnumInNestedNS foo_enum) { fbb_.AddElement<int8_t>(TableInFirstNS::VT_FOO_ENUM, static_cast<int8_t>(foo_enum), 0); }
  void add_foo_struct(const NamespaceA::NamespaceB::StructInNestedNS *foo_struct) { fbb_.AddStruct(TableInFirstNS::VT_FOO_STRUCT, foo_struct); }
  TableInFirstNSBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  TableInFirstNSBuilder &operator=(const TableInFirstNSBuilder &);
  flatbuffers::Offset<TableInFirstNS> Finish() {
    auto o = flatbuffers::Offset<TableInFirstNS>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<TableInFirstNS> CreateTableInFirstNS(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<NamespaceA::NamespaceB::TableInNestedNS> foo_table = 0,
   NamespaceA::NamespaceB::EnumInNestedNS foo_enum = NamespaceA::NamespaceB::EnumInNestedNS_A,
   const NamespaceA::NamespaceB::StructInNestedNS *foo_struct = 0) {
  TableInFirstNSBuilder builder_(_fbb);
  builder_.add_foo_struct(foo_struct);
  builder_.add_foo_table(foo_table);
  builder_.add_foo_enum(foo_enum);
  return builder_.Finish();
}

}  // namespace NamespaceA

#endif  // FLATBUFFERS_GENERATED_NAMESPACETEST2_NAMESPACEA_H_
