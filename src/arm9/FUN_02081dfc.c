// FUN_02081dfc @ 0x02081dfc (0x1c) — C++ MI sret thunk -> FUN_02081070 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02081dfc12FUN_02081070Ev
struct Ret_02081dfc { int a, b; };
struct A_02081dfc { int pad[11]; virtual void a(); };
struct B_02081dfc { virtual Ret_02081dfc FUN_02081070(); };
struct C_02081dfc : A_02081dfc, B_02081dfc { virtual Ret_02081dfc FUN_02081070(); };
Ret_02081dfc C_02081dfc::FUN_02081070() { Ret_02081dfc r = {0, 0}; return r; }
