// FUN_020a3b18 @ 0x020a3b18 (0x1c) — C++ MI sret thunk -> FUN_020a3ad0 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a3b1812FUN_020a3ad0Ev
struct Ret_020a3b18 { int a, b; };
struct A_020a3b18 { int pad[11]; virtual void a(); };
struct B_020a3b18 { virtual Ret_020a3b18 FUN_020a3ad0(); };
struct C_020a3b18 : A_020a3b18, B_020a3b18 { virtual Ret_020a3b18 FUN_020a3ad0(); };
Ret_020a3b18 C_020a3b18::FUN_020a3ad0() { Ret_020a3b18 r = {0, 0}; return r; }
