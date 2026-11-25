// FUN_0209be58 @ 0x0209be58 (0x1c) — C++ MI sret thunk -> FUN_0209b830 (delta -48)
//cpp
// symbol: _ZThn48_N10C_0209be5812FUN_0209b830Ev
struct Ret_0209be58 { int a, b; };
struct A_0209be58 { int pad[11]; virtual void a(); };
struct B_0209be58 { virtual Ret_0209be58 FUN_0209b830(); };
struct C_0209be58 : A_0209be58, B_0209be58 { virtual Ret_0209be58 FUN_0209b830(); };
Ret_0209be58 C_0209be58::FUN_0209b830() { Ret_0209be58 r = {0, 0}; return r; }
