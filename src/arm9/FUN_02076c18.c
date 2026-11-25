// FUN_02076c18 @ 0x02076c18 (0x1c) — C++ MI thunk -> FUN_02076990 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02076c1812FUN_02076990Ev
struct A_02076c18 { int pad[11]; virtual void a(); };
struct B_02076c18 { virtual void FUN_02076990(); };
struct C_02076c18 : A_02076c18, B_02076c18 { virtual void FUN_02076990(); };
void C_02076c18::FUN_02076990() {}
