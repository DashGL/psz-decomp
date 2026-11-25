// FUN_020b2f10 @ 0x020b2f10 (0x1c) — C++ MI thunk -> FUN_020b2d90 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020b2f1012FUN_020b2d90Ev
struct A_020b2f10 { int pad[11]; virtual void a(); };
struct B_020b2f10 { virtual void FUN_020b2d90(); };
struct C_020b2f10 : A_020b2f10, B_020b2f10 { virtual void FUN_020b2d90(); };
void C_020b2f10::FUN_020b2d90() {}
