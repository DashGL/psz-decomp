// FUN_02077724 @ 0x02077724 (0x1c) — C++ MI thunk -> FUN_02077680 (delta -48)
//cpp
// symbol: _ZThn48_N10C_0207772412FUN_02077680Ev
struct A_02077724 { int pad[11]; virtual void a(); };
struct B_02077724 { virtual void FUN_02077680(); };
struct C_02077724 : A_02077724, B_02077724 { virtual void FUN_02077680(); };
void C_02077724::FUN_02077680() {}
