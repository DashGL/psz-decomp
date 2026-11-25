// FUN_02093a84 @ 0x02093a84 (0x1c) — C++ MI thunk -> FUN_02093908 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02093a8412FUN_02093908Ev
struct A_02093a84 { int pad[11]; virtual void a(); };
struct B_02093a84 { virtual void FUN_02093908(); };
struct C_02093a84 : A_02093a84, B_02093a84 { virtual void FUN_02093908(); };
void C_02093a84::FUN_02093908() {}
