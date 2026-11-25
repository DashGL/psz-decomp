// FUN_020a42b0 @ 0x020a42b0 (0x1c) — C++ MI sret thunk -> FUN_020a418c (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a42b012FUN_020a418cEv
struct Ret_020a42b0 { int a, b; };
struct A_020a42b0 { int pad[11]; virtual void a(); };
struct B_020a42b0 { virtual Ret_020a42b0 FUN_020a418c(); };
struct C_020a42b0 : A_020a42b0, B_020a42b0 { virtual Ret_020a42b0 FUN_020a418c(); };
Ret_020a42b0 C_020a42b0::FUN_020a418c() { Ret_020a42b0 r = {0, 0}; return r; }
