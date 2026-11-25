// FUN_overlay_4__0212c6bc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
//cpp
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
class Scope_0212c6bc {public: int pad[3]; int state;};
typedef void (Scope_0212c6bc::*Action)(void);
extern "C" Action data_0212e5a4[];
extern "C" void FUN_overlay_4__0212c6bc(Scope_0212c6bc *self){if(self->state<0||self->state>=7)return;if(data_0212e5a4[self->state]) (self->*data_0212e5a4[self->state])();}
