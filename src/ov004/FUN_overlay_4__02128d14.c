// FUN_overlay_4__02128d14 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
//cpp
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
class Scope_02128d14 {public: int pad[4]; int state;};
typedef void (Scope_02128d14::*Action)(void);
extern "C" Action data_0212e1c0[];
extern "C" void FUN_overlay_4__02128d14(Scope_02128d14 *self){if(data_0212e1c0[self->state]) (self->*data_0212e1c0[self->state])();}
