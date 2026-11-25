// FUN_020a0324 @ 0x020a0324 (0x1c) — C++ MI thunk -> FUN_020a00c8 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a032412FUN_020a00c8Ev
struct A_020a0324 { int pad[11]; virtual void a(); };
struct B_020a0324 { virtual void FUN_020a00c8(); };
struct C_020a0324 : A_020a0324, B_020a0324 { virtual void FUN_020a00c8(); };
void C_020a0324::FUN_020a00c8() {}
