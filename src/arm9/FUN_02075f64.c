// FUN_02075f64 @ 0x02075f64 (0x1c) — C++ MI thunk -> FUN_02075910 (delta -240)
//cpp
// symbol: _ZThn240_N10C_02075f6412FUN_02075910Ev
struct A_02075f64 { int pad[59]; virtual void a(); };
struct B_02075f64 { virtual void FUN_02075910(); };
struct C_02075f64 : A_02075f64, B_02075f64 { virtual void FUN_02075910(); };
void C_02075f64::FUN_02075910() {}
