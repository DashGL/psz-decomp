// FUN_02070a7c @ 0x02070a7c (0x1c) — C++ MI thunk -> FUN_02039640 (delta -240)
//cpp
// symbol: _ZThn240_N10C_02070a7c12FUN_02039640Ev
struct A_02070a7c { int pad[59]; virtual void a(); };
struct B_02070a7c { virtual void FUN_02039640(); };
struct C_02070a7c : A_02070a7c, B_02070a7c { virtual void FUN_02039640(); };
void C_02070a7c::FUN_02039640() {}
