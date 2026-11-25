// FUN_0209d75c @ 0x0209d75c (0x1c) — C++ MI sret thunk -> FUN_0209d6d0 (delta -48)
//cpp
// symbol: _ZThn48_N10C_0209d75c12FUN_0209d6d0Ev
struct Ret_0209d75c { int a, b; };
struct A_0209d75c { int pad[11]; virtual void a(); };
struct B_0209d75c { virtual Ret_0209d75c FUN_0209d6d0(); };
struct C_0209d75c : A_0209d75c, B_0209d75c { virtual Ret_0209d75c FUN_0209d6d0(); };
Ret_0209d75c C_0209d75c::FUN_0209d6d0() { Ret_0209d75c r = {0, 0}; return r; }
