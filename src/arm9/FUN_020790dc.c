// FUN_020790dc @ 0x020790dc (0x1c) — C++ MI thunk -> FUN_02078ef0 (delta -32)
//cpp
// symbol: _ZThn32_N10C_020790dc12FUN_02078ef0Ev
struct A_020790dc { int pad[7]; virtual void a(); };
struct B_020790dc { virtual void FUN_02078ef0(); };
struct C_020790dc : A_020790dc, B_020790dc { virtual void FUN_02078ef0(); };
void C_020790dc::FUN_02078ef0() {}
