// FUN_02093a4c @ 0x02093a4c (0x1c) — C++ MI thunk -> FUN_02093a10 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02093a4c12FUN_02093a10Ev
struct A_02093a4c { int pad[11]; virtual void a(); };
struct B_02093a4c { virtual void FUN_02093a10(); };
struct C_02093a4c : A_02093a4c, B_02093a4c { virtual void FUN_02093a10(); };
void C_02093a4c::FUN_02093a10() {}
