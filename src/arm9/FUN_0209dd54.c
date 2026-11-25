// FUN_0209dd54 @ 0x0209dd54 (0x1c) — C++ MI sret thunk -> FUN_0209dbb8 (delta -48)
//cpp
// symbol: _ZThn48_N10C_0209dd5412FUN_0209dbb8Ev
struct Ret_0209dd54 { int a, b; };
struct A_0209dd54 { int pad[11]; virtual void a(); };
struct B_0209dd54 { virtual Ret_0209dd54 FUN_0209dbb8(); };
struct C_0209dd54 : A_0209dd54, B_0209dd54 { virtual Ret_0209dd54 FUN_0209dbb8(); };
Ret_0209dd54 C_0209dd54::FUN_0209dbb8() { Ret_0209dd54 r = {0, 0}; return r; }
