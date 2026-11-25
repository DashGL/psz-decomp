// FUN_020772fc @ 0x020772fc (0x1c) — C++ MI thunk -> FUN_02077080 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020772fc12FUN_02077080Ev
struct A_020772fc { int pad[11]; virtual void a(); };
struct B_020772fc { virtual void FUN_02077080(); };
struct C_020772fc : A_020772fc, B_020772fc { virtual void FUN_02077080(); };
void C_020772fc::FUN_02077080() {}
