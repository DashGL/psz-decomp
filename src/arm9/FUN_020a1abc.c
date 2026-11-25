// FUN_020a1abc @ 0x020a1abc (0x1c) — C++ MI thunk -> FUN_020a19c0 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a1abc12FUN_020a19c0Ev
struct A_020a1abc { int pad[11]; virtual void a(); };
struct B_020a1abc { virtual void FUN_020a19c0(); };
struct C_020a1abc : A_020a1abc, B_020a1abc { virtual void FUN_020a19c0(); };
void C_020a1abc::FUN_020a19c0() {}
