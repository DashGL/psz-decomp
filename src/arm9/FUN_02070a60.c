// FUN_02070a60 @ 0x02070a60 (0x1c) — C++ MI thunk -> FUN_02039578 (delta -32)
//cpp
// symbol: _ZThn32_N10C_02070a6012FUN_02039578Ev
struct A_02070a60 { int pad[7]; virtual void a(); };
struct B_02070a60 { virtual void FUN_02039578(); };
struct C_02070a60 : A_02070a60, B_02070a60 { virtual void FUN_02039578(); };
void C_02070a60::FUN_02039578() {}
