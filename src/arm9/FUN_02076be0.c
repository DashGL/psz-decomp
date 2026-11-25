// FUN_02076be0 @ 0x02076be0 (0x1c) — C++ MI thunk -> FUN_02076740 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02076be012FUN_02076740Ev
struct A_02076be0 { int pad[11]; virtual void a(); };
struct B_02076be0 { virtual void FUN_02076740(); };
struct C_02076be0 : A_02076be0, B_02076be0 { virtual void FUN_02076740(); };
void C_02076be0::FUN_02076740() {}
