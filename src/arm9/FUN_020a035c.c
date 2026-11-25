// FUN_020a035c @ 0x020a035c (0x1c) — C++ MI thunk -> FUN_020a0304 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a035c12FUN_020a0304Ev
struct A_020a035c { int pad[11]; virtual void a(); };
struct B_020a035c { virtual void FUN_020a0304(); };
struct C_020a035c : A_020a035c, B_020a035c { virtual void FUN_020a0304(); };
void C_020a035c::FUN_020a0304() {}
