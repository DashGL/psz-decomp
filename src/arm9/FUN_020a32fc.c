// FUN_020a32fc @ 0x020a32fc (0x1c) — C++ MI thunk -> FUN_020a30fc (delta -48)
//cpp
// symbol: _ZThn48_N10C_020a32fc12FUN_020a30fcEv
struct A_020a32fc { int pad[11]; virtual void a(); };
struct B_020a32fc { virtual void FUN_020a30fc(); };
struct C_020a32fc : A_020a32fc, B_020a32fc { virtual void FUN_020a30fc(); };
void C_020a32fc::FUN_020a30fc() {}
