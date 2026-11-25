// FUN_020a5408 @ 0x020a5408 (0x1c) — C++ MI thunk -> FUN_020a4a78 (delta -32)
//cpp
// symbol: _ZThn32_N10C_020a540812FUN_020a4a78Ev
struct A_020a5408 { int pad[7]; virtual void a(); };
struct B_020a5408 { virtual void FUN_020a4a78(); };
struct C_020a5408 : A_020a5408, B_020a5408 { virtual void FUN_020a4a78(); };
void C_020a5408::FUN_020a4a78() {}
