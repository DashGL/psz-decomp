// FUN_02095d24 @ 0x02095d24 (0x1c) — C++ MI thunk -> FUN_02095834 (delta -32)
//cpp
// symbol: _ZThn32_N10C_02095d2412FUN_02095834Ev
struct A_02095d24 { int pad[7]; virtual void a(); };
struct B_02095d24 { virtual void FUN_02095834(); };
struct C_02095d24 : A_02095d24, B_02095d24 { virtual void FUN_02095834(); };
void C_02095d24::FUN_02095834() {}
