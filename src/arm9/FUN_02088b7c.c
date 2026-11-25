// FUN_02088b7c @ 0x02088b7c (0x1c) — C++ MI thunk -> FUN_02088aa8 (delta -48)
//cpp
// symbol: _ZThn48_N10C_02088b7c12FUN_02088aa8Ev
struct A_02088b7c { int pad[11]; virtual void a(); };
struct B_02088b7c { virtual void FUN_02088aa8(); };
struct C_02088b7c : A_02088b7c, B_02088b7c { virtual void FUN_02088aa8(); };
void C_02088b7c::FUN_02088aa8() {}
