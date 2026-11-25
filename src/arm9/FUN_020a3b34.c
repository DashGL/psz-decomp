// FUN_020a3b34 @ 0x020a3b34 (0x1c) — C++ MI thunk -> FUN_020a3a30 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a3b3412FUN_020a3a30Ev
struct A_020a3b34 { int pad[11]; virtual void a(); };
struct B_020a3b34 { virtual void FUN_020a3a30(); };
struct C_020a3b34 : A_020a3b34, B_020a3b34 { virtual void FUN_020a3a30(); };
void C_020a3b34::FUN_020a3a30() {}
