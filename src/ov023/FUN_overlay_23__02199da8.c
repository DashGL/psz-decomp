// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
//cpp
// flags: -O4,s
// Scope evidence: ROM copies an eight-byte member pointer, tests its function
// word, arithmetic-shifts the receiver adjustment and tests its virtual bit.
// Concrete table records and original/native source proof are in the session record.
class Scope_overlay_23__02199da8 {};
typedef void (Scope_overlay_23__02199da8::*Action)(const signed char *);
extern "C" Action DAT_0219d8ac[];
extern "C" void FUN_overlay_23__02199da8(Scope_overlay_23__02199da8 *self,const signed char *packet) {
 int kind=packet[8]; Action action;
 if(kind<0 || kind>=2)return;
 action=DAT_0219d8ac[kind];
 if(!action)return;
 (self->*action)(packet);
}
