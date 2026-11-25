// FUN_02095cd0 @ 0x02095cd0 (0x1c) — C++ MI thunk -> FUN_02095810 (delta -32)
//cpp
// symbol: _ZThn32_N10C_02095cd012FUN_02095810Ev
struct A_02095cd0 { int pad[7]; virtual void a(); };
struct B_02095cd0 { virtual void FUN_02095810(); };
struct C_02095cd0 : A_02095cd0, B_02095cd0 { virtual void FUN_02095810(); };
void C_02095cd0::FUN_02095810() {}
