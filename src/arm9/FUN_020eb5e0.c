// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-static-initializers.md
// flags: -O4,s
extern unsigned char DAT_0211a51c[],DAT_0211a510[];
extern void FUN_02084b80(void *);extern void FUN_02084b94(void *);
extern void *FUN_0200c594(void *,void (*)(void *),void *);
void *FUN_020eb5e0(void){FUN_02084b80(DAT_0211a51c);return FUN_0200c594(DAT_0211a51c,FUN_02084b94,DAT_0211a510);}
