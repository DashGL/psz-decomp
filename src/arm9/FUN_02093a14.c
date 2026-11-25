// FUN_02093a14 @ 0x02093a14 (0x1c) — C++ MI thunk -> FUN_02092e00 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02093a1412FUN_02092e00Ev
struct A_02093a14 { int pad[11]; virtual void a(); };
struct B_02093a14 { virtual void FUN_02092e00(); };
struct C_02093a14 : A_02093a14, B_02093a14 { virtual void FUN_02092e00(); };
void C_02093a14::FUN_02092e00() {}
