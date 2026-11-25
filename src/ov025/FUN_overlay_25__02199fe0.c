// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
//cpp
// flags: -O4,s
// Scope evidence: ROM copies an eight-byte member pointer, tests its function
// word, arithmetic-shifts the receiver adjustment and tests its virtual bit.
// Concrete table records and original/native source proof are in the session record.
class Scope_overlay_25__02199fe0 {};
typedef void (Scope_overlay_25__02199fe0::*Action)(const signed char *);
extern "C" Action DAT_0219ae88[];
extern "C" void FUN_overlay_25__02199fe0(Scope_overlay_25__02199fe0 *self,const signed char *packet) {
 int kind=packet[8]; Action action;
 if(kind<0 || kind>=1)return;
 action=DAT_0219ae88[kind];
 if(!action)return;
 (self->*action)(packet);
}
