// FUN_020a7548 @ 0x020a7548 (0x1c) — C++ MI thunk -> FUN_020a64f8 (delta -32)
//cpp
// symbol: _ZThn32_N10C_020a754812FUN_020a64f8Ev
struct A_020a7548 { int pad[7]; virtual void a(); };
struct B_020a7548 { virtual void FUN_020a64f8(); };
struct C_020a7548 : A_020a7548, B_020a7548 { virtual void FUN_020a64f8(); };
void C_020a7548::FUN_020a64f8() {}
