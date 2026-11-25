// FUN_020a32c4 @ 0x020a32c4 (0x1c) — C++ MI thunk -> FUN_020a2c38 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a32c412FUN_020a2c38Ev
struct A_020a32c4 { int pad[11]; virtual void a(); };
struct B_020a32c4 { virtual void FUN_020a2c38(); };
struct C_020a32c4 : A_020a32c4, B_020a32c4 { virtual void FUN_020a2c38(); };
void C_020a32c4::FUN_020a2c38() {}
