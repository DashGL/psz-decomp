// FUN_02093a68 @ 0x02093a68 (0x1c) — C++ MI sret thunk -> FUN_02093a00 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02093a6812FUN_02093a00Ev
struct Ret_02093a68 { int a, b; };
struct A_02093a68 { int pad[11]; virtual void a(); };
struct B_02093a68 { virtual Ret_02093a68 FUN_02093a00(); };
struct C_02093a68 : A_02093a68, B_02093a68 { virtual Ret_02093a68 FUN_02093a00(); };
Ret_02093a68 C_02093a68::FUN_02093a00() { Ret_02093a68 r = {0, 0}; return r; }
