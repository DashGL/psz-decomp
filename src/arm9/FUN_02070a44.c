// FUN_02070a44 @ 0x02070a44 (0x1c) — C++ MI thunk -> FUN_02039640 (delta -32)
//cpp
// symbol: _ZThn32_N10C_02070a4412FUN_02039640Ev
struct A_02070a44 { int pad[7]; virtual void a(); };
struct B_02070a44 { virtual void FUN_02039640(); };
struct C_02070a44 : A_02070a44, B_02070a44 { virtual void FUN_02039640(); };
void C_02070a44::FUN_02039640() {}
