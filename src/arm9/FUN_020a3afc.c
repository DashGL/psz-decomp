// FUN_020a3afc @ 0x020a3afc (0x1c) — C++ MI thunk -> FUN_020a3924 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a3afc12FUN_020a3924Ev
struct A_020a3afc { int pad[11]; virtual void a(); };
struct B_020a3afc { virtual void FUN_020a3924(); };
struct C_020a3afc : A_020a3afc, B_020a3afc { virtual void FUN_020a3924(); };
void C_020a3afc::FUN_020a3924() {}
