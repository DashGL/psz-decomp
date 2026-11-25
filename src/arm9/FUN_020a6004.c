// FUN_020a6004 @ 0x020a6004 (0x1c) — C++ MI thunk -> FUN_020a57d4 (delta -32)
//cpp
// symbol: _ZThn32_N10C_020a600412FUN_020a57d4Ev
struct A_020a6004 { int pad[7]; virtual void a(); };
struct B_020a6004 { virtual void FUN_020a57d4(); };
struct C_020a6004 : A_020a6004, B_020a6004 { virtual void FUN_020a57d4(); };
void C_020a6004::FUN_020a57d4() {}
