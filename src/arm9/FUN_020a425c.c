// FUN_020a425c @ 0x020a425c (0x1c) — C++ MI thunk -> FUN_020a3e60 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a425c12FUN_020a3e60Ev
struct A_020a425c { int pad[11]; virtual void a(); };
struct B_020a425c { virtual void FUN_020a3e60(); };
struct C_020a425c : A_020a425c, B_020a425c { virtual void FUN_020a3e60(); };
void C_020a425c::FUN_020a3e60() {}
