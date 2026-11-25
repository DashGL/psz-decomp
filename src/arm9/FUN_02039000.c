// FUN_02039000 @ 0x02039000 (0x1c) — C++ MI thunk -> FUN_02038db8 (delta -32)
//cpp
// symbol: _ZThn32_N10C_0203900012FUN_02038db8Ev
struct A_02039000 { int pad[7]; virtual void a(); };
struct B_02039000 { virtual void FUN_02038db8(); };
struct C_02039000 : A_02039000, B_02039000 { virtual void FUN_02038db8(); };
void C_02039000::FUN_02038db8() {}
