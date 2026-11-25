// FUN_020a0010 @ 0x020a0010 (0x1c) — C++ MI thunk -> FUN_0209ff00 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a001012FUN_0209ff00Ev
struct A_020a0010 { int pad[11]; virtual void a(); };
struct B_020a0010 { virtual void FUN_0209ff00(); };
struct C_020a0010 : A_020a0010, B_020a0010 { virtual void FUN_0209ff00(); };
void C_020a0010::FUN_0209ff00() {}
