// FUN_020a7564 @ 0x020a7564 (0x1c) — C++ MI thunk -> FUN_020a642c (delta -32)
//cpp
// symbol: _ZThn32_N10C_020a756412FUN_020a642cEv
struct A_020a7564 { int pad[7]; virtual void a(); };
struct B_020a7564 { virtual void FUN_020a642c(); };
struct C_020a7564 : A_020a7564, B_020a7564 { virtual void FUN_020a642c(); };
void C_020a7564::FUN_020a642c() {}
