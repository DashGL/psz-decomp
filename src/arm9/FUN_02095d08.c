// FUN_02095d08 @ 0x02095d08 (0x1c) — C++ MI thunk -> FUN_0209576c (delta -32)
//cpp
// symbol: _ZThn32_N10C_02095d0812FUN_0209576cEv
struct A_02095d08 { int pad[7]; virtual void a(); };
struct B_02095d08 { virtual void FUN_0209576c(); };
struct C_02095d08 : A_02095d08, B_02095d08 { virtual void FUN_0209576c(); };
void C_02095d08::FUN_0209576c() {}
