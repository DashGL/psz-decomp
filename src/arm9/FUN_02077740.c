// FUN_02077740 @ 0x02077740 (0x1c) — C++ MI thunk -> FUN_020775cc (delta -48)
//cpp
// symbol: _ZThn48_N10C_0207774012FUN_020775ccEv
struct A_02077740 { int pad[11]; virtual void a(); };
struct B_02077740 { virtual void FUN_020775cc(); };
struct C_02077740 : A_02077740, B_02077740 { virtual void FUN_020775cc(); };
void C_02077740::FUN_020775cc() {}
