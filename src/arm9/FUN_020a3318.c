// FUN_020a3318 @ 0x020a3318 (0x1c) — C++ MI sret thunk -> FUN_020a30ec (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a331812FUN_020a30ecEv
struct Ret_020a3318 { int a, b; };
struct A_020a3318 { int pad[11]; virtual void a(); };
struct B_020a3318 { virtual Ret_020a3318 FUN_020a30ec(); };
struct C_020a3318 : A_020a3318, B_020a3318 { virtual Ret_020a3318 FUN_020a30ec(); };
Ret_020a3318 C_020a3318::FUN_020a30ec() { Ret_020a3318 r = {0, 0}; return r; }
