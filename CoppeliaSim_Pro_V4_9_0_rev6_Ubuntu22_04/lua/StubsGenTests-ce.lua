local codeEditorInfos=[[
int i, float f, float d, string s, bool b, int[] ti, map z = StubsGenTests.basic(int i, float f, float d, string s, bool b, int[1..2] ti, map z)
int i, float f, float d, string s, bool b, int[] ti, map z = StubsGenTests.nullable(int i, float f, float d, string s, bool b, int[1..2] ti, map z)
int i, int in, int id, int idn = StubsGenTests.test_struct2(map a)
int i, float f, float d, string s, bool b = StubsGenTests.struct_table(int i, string s, map[1..2] tz)
map z = StubsGenTests.struct_default(map z={10,20,30,40})
grid a = StubsGenTests.test_grid(grid a)
StubsGenTests.test_grid2(grid mtx, grid mtx3x3, grid t4x2xN, grid mtx2)
StubsGenTests.testLuaNullable(int a, string b)
string r = StubsGenTests.testLuaDefault(int a, string b="x")
StubsGenTests.enum1.a
StubsGenTests.enum1.b
StubsGenTests.enum1.the_answer
]]

registerCodeEditorInfos("StubsGenTests",codeEditorInfos)
