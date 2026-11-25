// FUN_02070aec @ 0x02070aec (0x1c) — C++ MI thunk -> FUN_0203a9e0 (delta -240)
//cpp
// symbol: _ZThn240_N10C_02070aec12FUN_0203a9e0Ev
struct A_02070aec { int pad[59]; virtual void a(); };
struct B_02070aec { virtual void FUN_0203a9e0(); };
struct C_02070aec : A_02070aec, B_02070aec { virtual void FUN_0203a9e0(); };
void C_02070aec::FUN_0203a9e0() {}
