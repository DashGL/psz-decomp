// FUN_02092ad4 @ 0x02092ad4 (0x1c) — C++ MI sret thunk -> FUN_02092a64 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02092ad412FUN_02092a64Ev
struct Ret_02092ad4 { int a, b; };
struct A_02092ad4 { int pad[11]; virtual void a(); };
struct B_02092ad4 { virtual Ret_02092ad4 FUN_02092a64(); };
struct C_02092ad4 : A_02092ad4, B_02092ad4 { virtual Ret_02092ad4 FUN_02092a64(); };
Ret_02092ad4 C_02092ad4::FUN_02092a64() { Ret_02092ad4 r = {0, 0}; return r; }
