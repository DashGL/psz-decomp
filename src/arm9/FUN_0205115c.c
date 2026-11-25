// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_0205115c @ 0x0205115c, full true extent 0x44 including pool.
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// Native member-pointer evidence: notes/sessions/matching-low-2026-11-12.md
// State update member-pointer ABI: table020f9798 row24 +8; concrete receiver-only
// callbacks0206dafc and0206de0c, then direct FUN_020511a0(self).
//cpp
// flags: -O4,s
struct Receiver_0205115c { char padding[92]; unsigned int state; };
typedef void (Receiver_0205115c::*Callback_0205115c)();
struct Entry_0205115c { Callback_0205115c enter, update, exit; };
extern Entry_0205115c DAT_020f9798[];
extern "C" void FUN_020511a0(void *);
extern "C" void FUN_0205115c(Receiver_0205115c *self) { Callback_0205115c entry=DAT_020f9798[self->state].update; if(entry) (self->*entry)(); FUN_020511a0(self); }
