// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// FUN_02051314 @ 0x02051314, true extent 0x44 including literal pool.
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// Native member-pointer ABI proof: notes/sessions/matching-low-2026-11-12.md
// ROM copies the eight-byte callback descriptor to its stack, null-tests
// the function word, adjusts this by signed word1>>1, and uses word1 bit0
// to select a virtual slot. A state row holds three such descriptors.
// State1/2 exit callbacks are receiver-only 0206db94/0206de4c; other
// observed exit rows are null. Return values are not consumed.
//cpp
// flags: -O4,s
struct Receiver_02051314 { char padding[92]; unsigned int state; };
typedef void (Receiver_02051314::*Callback_02051314)();
struct Entry_02051314 { Callback_02051314 enter, update, exit; };
extern Entry_02051314 DAT_020f9798[];
extern "C" void FUN_02051314(Receiver_02051314 *self) { Callback_02051314 entry=DAT_020f9798[self->state].exit; if(entry) (self->*entry)(); self->state=0; }
