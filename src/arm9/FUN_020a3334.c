// FUN_020a3334 @ 0x020a3334 (0x1c) — C++ MI thunk -> FUN_020a3060 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a333412FUN_020a3060Ev
struct A_020a3334 { int pad[11]; virtual void a(); };
struct B_020a3334 { virtual void FUN_020a3060(); };
struct C_020a3334 : A_020a3334, B_020a3334 { virtual void FUN_020a3060(); };
void C_020a3334::FUN_020a3060() {}
