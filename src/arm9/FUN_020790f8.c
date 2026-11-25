// FUN_020790f8 @ 0x020790f8 (0x1c) — C++ MI thunk -> FUN_02078e9c (delta -32)
//cpp
// symbol: _ZThn32_N10C_020790f812FUN_02078e9cEv
struct A_020790f8 { int pad[7]; virtual void a(); };
struct B_020790f8 { virtual void FUN_02078e9c(); };
struct C_020790f8 : A_020790f8, B_020790f8 { virtual void FUN_02078e9c(); };
void C_020790f8::FUN_02078e9c() {}
