// FUN_02092b0c @ 0x02092b0c (0x1c) — C++ MI thunk -> FUN_02092a78 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02092b0c12FUN_02092a78Ev
struct A_02092b0c { int pad[11]; virtual void a(); };
struct B_02092b0c { virtual void FUN_02092a78(); };
struct C_02092b0c : A_02092b0c, B_02092b0c { virtual void FUN_02092a78(); };
void C_02092b0c::FUN_02092a78() {}
