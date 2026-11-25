// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-static-initializers.md
// flags: -O4,s
extern unsigned char DAT_0211a9c4[],DAT_0211a9b8[];
extern void FUN_020afeac(void *);extern void FUN_020afebc(void *);
extern void *FUN_0200c594(void *,void (*)(void *),void *);
void *FUN_020eb838(void){FUN_020afeac(DAT_0211a9c4);return FUN_0200c594(DAT_0211a9c4,FUN_020afebc,DAT_0211a9b8);}
