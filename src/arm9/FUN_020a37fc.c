// FUN_020a37fc @ 0x020a37fc (0x1c) — C++ MI thunk -> FUN_020a34c8 (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a37fc12FUN_020a34c8Ev
struct A_020a37fc { int pad[11]; virtual void a(); };
struct B_020a37fc { virtual void FUN_020a34c8(); };
struct C_020a37fc : A_020a37fc, B_020a37fc { virtual void FUN_020a34c8(); };
void C_020a37fc::FUN_020a34c8() {}
