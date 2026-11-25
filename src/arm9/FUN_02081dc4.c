// FUN_02081dc4 @ 0x02081dc4 (0x1c) — C++ MI thunk -> FUN_02081018 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02081dc412FUN_02081018Ev
struct A_02081dc4 { int pad[11]; virtual void a(); };
struct B_02081dc4 { virtual void FUN_02081018(); };
struct C_02081dc4 : A_02081dc4, B_02081dc4 { virtual void FUN_02081018(); };
void C_02081dc4::FUN_02081018() {}
