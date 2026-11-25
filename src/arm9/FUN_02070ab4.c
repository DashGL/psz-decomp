// FUN_02070ab4 @ 0x02070ab4 (0x1c) — C++ MI thunk -> FUN_02070a28 (delta -240)
//cpp
// symbol: _ZThn240_N10C_02070ab412FUN_02070a28Ev
struct A_02070ab4 { int pad[59]; virtual void a(); };
struct B_02070ab4 { virtual void FUN_02070a28(); };
struct C_02070ab4 : A_02070ab4, B_02070ab4 { virtual void FUN_02070a28(); };
void C_02070ab4::FUN_02070a28() {}
