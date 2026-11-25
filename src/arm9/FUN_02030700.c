// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_02030700 @ 0x02030700, full true extent 0x38 including pool.
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// Native member-pointer evidence: notes/sessions/matching-low-2026-11-12.md
// Two concrete member-pointer entries at020ec1a4:020307b0 and02030758,
// both receiver-only int-return predicates; signed selector at receiver+4.
//cpp
// flags: -O4,s
struct Receiver_02030700 { short *ids; signed char kind, fallback; };
typedef int (Receiver_02030700::*Callback_02030700)();
extern Callback_02030700 DAT_020ec1a4[];
extern "C" int FUN_02030700(Receiver_02030700 *self) { Callback_02030700 entry=DAT_020ec1a4[self->kind]; return (self->*entry)(); }
