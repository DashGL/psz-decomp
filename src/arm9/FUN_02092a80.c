// FUN_02092a80 @ 0x02092a80 (0x1c) — C++ MI thunk -> FUN_020928a4 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02092a8012FUN_020928a4Ev
struct A_02092a80 { int pad[11]; virtual void a(); };
struct B_02092a80 { virtual void FUN_020928a4(); };
struct C_02092a80 : A_02092a80, B_02092a80 { virtual void FUN_020928a4(); };
void C_02092a80::FUN_020928a4() {}
