// FUN_020a386c @ 0x020a386c (0x1c) — C++ MI thunk -> FUN_020a37c8 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a386c12FUN_020a37c8Ev
struct A_020a386c { int pad[11]; virtual void a(); };
struct B_020a386c { virtual void FUN_020a37c8(); };
struct C_020a386c : A_020a386c, B_020a386c { virtual void FUN_020a37c8(); };
void C_020a386c::FUN_020a37c8() {}
