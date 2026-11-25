// FUN_02076d9c @ 0x02076d9c (0x1c) — C++ MI thunk -> FUN_02076d48 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02076d9c12FUN_02076d48Ev
struct A_02076d9c { int pad[11]; virtual void a(); };
struct B_02076d9c { virtual void FUN_02076d48(); };
struct C_02076d9c : A_02076d9c, B_02076d9c { virtual void FUN_02076d48(); };
void C_02076d9c::FUN_02076d48() {}
