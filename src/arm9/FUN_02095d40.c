// FUN_02095d40 @ 0x02095d40 (0x1c) — C++ MI thunk -> FUN_02094b3c (delta -32)
//cpp
// symbol: _ZThn32_N10C_02095d4012FUN_02094b3cEv
struct A_02095d40 { int pad[7]; virtual void a(); };
struct B_02095d40 { virtual void FUN_02094b3c(); };
struct C_02095d40 : A_02095d40, B_02095d40 { virtual void FUN_02094b3c(); };
void C_02095d40::FUN_02094b3c() {}
