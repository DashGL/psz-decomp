// FUN_02076db8 @ 0x02076db8 (0x1c) — C++ MI thunk -> FUN_02076d20 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02076db812FUN_02076d20Ev
struct A_02076db8 { int pad[11]; virtual void a(); };
struct B_02076db8 { virtual void FUN_02076d20(); };
struct C_02076db8 : A_02076db8, B_02076db8 { virtual void FUN_02076d20(); };
void C_02076db8::FUN_02076d20() {}
