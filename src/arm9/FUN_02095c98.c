// FUN_02095c98 @ 0x02095c98 (0x1c) — C++ MI thunk -> FUN_02094b8c (delta -32)
//cpp
// symbol: _ZThn32_N10C_02095c9812FUN_02094b8cEv
struct A_02095c98 { int pad[7]; virtual void a(); };
struct B_02095c98 { virtual void FUN_02094b8c(); };
struct C_02095c98 : A_02095c98, B_02095c98 { virtual void FUN_02094b8c(); };
void C_02095c98::FUN_02094b8c() {}
