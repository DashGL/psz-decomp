// FUN_02076bfc @ 0x02076bfc (0x1c) — C++ MI sret thunk -> FUN_020767dc (delta -48)
//cpp
// symbol: _ZThn48_N10C_02076bfc12FUN_020767dcEv
struct Ret_02076bfc { int a, b; };
struct A_02076bfc { int pad[11]; virtual void a(); };
struct B_02076bfc { virtual Ret_02076bfc FUN_020767dc(); };
struct C_02076bfc : A_02076bfc, B_02076bfc { virtual Ret_02076bfc FUN_020767dc(); };
Ret_02076bfc C_02076bfc::FUN_020767dc() { Ret_02076bfc r = {0, 0}; return r; }
