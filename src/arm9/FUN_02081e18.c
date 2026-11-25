// FUN_02081e18 @ 0x02081e18 (0x1c) — C++ MI thunk -> FUN_02081c3c (delta -48)
//cpp
// symbol: _ZThn48_N10C_02081e1812FUN_02081c3cEv
struct A_02081e18 { int pad[11]; virtual void a(); };
struct B_02081e18 { virtual void FUN_02081c3c(); };
struct C_02081e18 : A_02081e18, B_02081e18 { virtual void FUN_02081c3c(); };
void C_02081e18::FUN_02081c3c() {}
