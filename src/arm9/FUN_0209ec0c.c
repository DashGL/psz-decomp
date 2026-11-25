// FUN_0209ec0c @ 0x0209ec0c (0x1c) — C++ MI sret thunk -> FUN_0209eae0 (delta -48)
//cpp
// symbol: _ZThn48_N10C_0209ec0c12FUN_0209eae0Ev
struct Ret_0209ec0c { int a, b; };
struct A_0209ec0c { int pad[11]; virtual void a(); };
struct B_0209ec0c { virtual Ret_0209ec0c FUN_0209eae0(); };
struct C_0209ec0c : A_0209ec0c, B_0209ec0c { virtual Ret_0209ec0c FUN_0209eae0(); };
Ret_0209ec0c C_0209ec0c::FUN_0209eae0() { Ret_0209ec0c r = {0, 0}; return r; }
