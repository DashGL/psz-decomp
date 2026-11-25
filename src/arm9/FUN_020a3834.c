// FUN_020a3834 @ 0x020a3834 (0x1c) — C++ MI sret thunk -> FUN_020a37cc (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a383412FUN_020a37ccEv
struct Ret_020a3834 { int a, b; };
struct A_020a3834 { int pad[11]; virtual void a(); };
struct B_020a3834 { virtual Ret_020a3834 FUN_020a37cc(); };
struct C_020a3834 : A_020a3834, B_020a3834 { virtual Ret_020a3834 FUN_020a37cc(); };
Ret_020a3834 C_020a3834::FUN_020a37cc() { Ret_020a3834 r = {0, 0}; return r; }
