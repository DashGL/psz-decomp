// FUN_02076d64 @ 0x02076d64 (0x1c) — C++ MI thunk -> FUN_02076cf8 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02076d6412FUN_02076cf8Ev
struct A_02076d64 { int pad[11]; virtual void a(); };
struct B_02076d64 { virtual void FUN_02076cf8(); };
struct C_02076d64 : A_02076d64, B_02076d64 { virtual void FUN_02076cf8(); };
void C_02076d64::FUN_02076cf8() {}
