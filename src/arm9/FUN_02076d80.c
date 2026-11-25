// FUN_02076d80 @ 0x02076d80 (0x1c) — C++ MI thunk -> FUN_02076ce4 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02076d8012FUN_02076ce4Ev
struct A_02076d80 { int pad[11]; virtual void a(); };
struct B_02076d80 { virtual void FUN_02076ce4(); };
struct C_02076d80 : A_02076d80, B_02076d80 { virtual void FUN_02076ce4(); };
void C_02076d80::FUN_02076ce4() {}
