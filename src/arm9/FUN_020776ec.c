// FUN_020776ec @ 0x020776ec (0x1c) — C++ MI thunk -> FUN_020774a0 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020776ec12FUN_020774a0Ev
struct A_020776ec { int pad[11]; virtual void a(); };
struct B_020776ec { virtual void FUN_020774a0(); };
struct C_020776ec : A_020776ec, B_020776ec { virtual void FUN_020774a0(); };
void C_020776ec::FUN_020774a0() {}
