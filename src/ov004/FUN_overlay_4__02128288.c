// FUN_overlay_4__02128288 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
//cpp
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
class Scope_02128288 {public: int pad[2]; int state;};
typedef void (Scope_02128288::*Action)(void);
extern "C" Action data_0212e02c[];
extern "C" void FUN_overlay_4__02128288(Scope_02128288 *self){if(data_0212e02c[self->state]) (self->*data_0212e02c[self->state])();}
