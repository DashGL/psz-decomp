// FUN_020a42cc @ 0x020a42cc (0x1c) — C++ MI thunk -> FUN_020a4168 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a42cc12FUN_020a4168Ev
struct A_020a42cc { int pad[11]; virtual void a(); };
struct B_020a42cc { virtual void FUN_020a4168(); };
struct C_020a42cc : A_020a42cc, B_020a42cc { virtual void FUN_020a4168(); };
void C_020a42cc::FUN_020a4168() {}
