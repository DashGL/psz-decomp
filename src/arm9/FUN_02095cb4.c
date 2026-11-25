// FUN_02095cb4 @ 0x02095cb4 (0x1c) — C++ MI thunk -> FUN_020b97e4 (delta -32)
//cpp
// symbol: _ZThn32_N10C_02095cb412FUN_020b97e4Ev
struct A_02095cb4 { int pad[7]; virtual void a(); };
struct B_02095cb4 { virtual void FUN_020b97e4(); };
struct C_02095cb4 : A_02095cb4, B_02095cb4 { virtual void FUN_020b97e4(); };
void C_02095cb4::FUN_020b97e4() {}
