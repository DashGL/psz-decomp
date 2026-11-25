// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-runtime-returns.md
// flags: -noThumb
// Actual ARM forwarding ABI: preserves incoming r0, supplies resource context and callback.
extern unsigned int FUN_0206605c(unsigned int,void *,void *);
extern unsigned char DAT_020661a4[];
unsigned int FUN_02066170(unsigned int a){return FUN_0206605c(a,(void *)0x027fffe0,DAT_020661a4);}
