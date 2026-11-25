// FUN_020a0378 @ 0x020a0378 (0x1c) — C++ MI thunk -> FUN_020a0100 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a037812FUN_020a0100Ev
struct A_020a0378 { int pad[11]; virtual void a(); };
struct B_020a0378 { virtual void FUN_020a0100(); };
struct C_020a0378 : A_020a0378, B_020a0378 { virtual void FUN_020a0100(); };
void C_020a0378::FUN_020a0100() {}
