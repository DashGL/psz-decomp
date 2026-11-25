// FUN_020a5fe8 @ 0x020a5fe8 (0x1c) — C++ MI thunk -> FUN_020a58a4 (delta -32)
//cpp
// symbol: _ZThn32_N10C_020a5fe812FUN_020a58a4Ev
struct A_020a5fe8 { int pad[7]; virtual void a(); };
struct B_020a5fe8 { virtual void FUN_020a58a4(); };
struct C_020a5fe8 : A_020a5fe8, B_020a5fe8 { virtual void FUN_020a58a4(); };
void C_020a5fe8::FUN_020a58a4() {}
