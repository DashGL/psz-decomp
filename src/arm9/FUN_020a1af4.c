// FUN_020a1af4 @ 0x020a1af4 (0x1c) — C++ MI thunk -> FUN_020a1a54 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a1af412FUN_020a1a54Ev
struct A_020a1af4 { int pad[11]; virtual void a(); };
struct B_020a1af4 { virtual void FUN_020a1a54(); };
struct C_020a1af4 : A_020a1af4, B_020a1af4 { virtual void FUN_020a1a54(); };
void C_020a1af4::FUN_020a1a54() {}
