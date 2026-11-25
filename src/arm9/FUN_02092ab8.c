// FUN_02092ab8 @ 0x02092ab8 (0x1c) — C++ MI thunk -> FUN_02092a74 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02092ab812FUN_02092a74Ev
struct A_02092ab8 { int pad[11]; virtual void a(); };
struct B_02092ab8 { virtual void FUN_02092a74(); };
struct C_02092ab8 : A_02092ab8, B_02092ab8 { virtual void FUN_02092a74(); };
void C_02092ab8::FUN_02092a74() {}
