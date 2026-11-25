// FUN_020a53ec @ 0x020a53ec (0x1c) — C++ MI thunk -> FUN_020a4ac4 (delta -32)
//cpp
// symbol: _ZThn32_N10C_020a53ec12FUN_020a4ac4Ev
struct A_020a53ec { int pad[7]; virtual void a(); };
struct B_020a53ec { virtual void FUN_020a4ac4(); };
struct C_020a53ec : A_020a53ec, B_020a53ec { virtual void FUN_020a4ac4(); };
void C_020a53ec::FUN_020a4ac4() {}
