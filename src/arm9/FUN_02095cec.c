// FUN_02095cec @ 0x02095cec (0x1c) — C++ MI thunk -> FUN_020957f0 (delta -32)
//cpp
// symbol: _ZThn32_N10C_02095cec12FUN_020957f0Ev
struct A_02095cec { int pad[7]; virtual void a(); };
struct B_02095cec { virtual void FUN_020957f0(); };
struct C_02095cec : A_02095cec, B_02095cec { virtual void FUN_020957f0(); };
void C_02095cec::FUN_020957f0() {}
