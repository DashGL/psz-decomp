// FUN_02093a30 @ 0x02093a30 (0x1c) — C++ MI thunk -> FUN_02092d54 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02093a3012FUN_02092d54Ev
struct A_02093a30 { int pad[11]; virtual void a(); };
struct B_02093a30 { virtual void FUN_02092d54(); };
struct C_02093a30 : A_02093a30, B_02093a30 { virtual void FUN_02092d54(); };
void C_02093a30::FUN_02092d54() {}
