// FUN_020a0340 @ 0x020a0340 (0x1c) — C++ MI thunk -> FUN_020a00b4 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a034012FUN_020a00b4Ev
struct A_020a0340 { int pad[11]; virtual void a(); };
struct B_020a0340 { virtual void FUN_020a00b4(); };
struct C_020a0340 : A_020a0340, B_020a0340 { virtual void FUN_020a00b4(); };
void C_020a0340::FUN_020a00b4() {}
