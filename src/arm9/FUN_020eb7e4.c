// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-static-initializers.md
// flags: -O4,s
extern unsigned char DAT_0211a640[],DAT_0211a634[];
extern void FUN_020a0ac8(void *);extern void FUN_020a0cc8(void *);
extern void *FUN_0200c594(void *,void (*)(void *),void *);
void *FUN_020eb7e4(void){FUN_020a0ac8(DAT_0211a640);return FUN_0200c594(DAT_0211a640,FUN_020a0cc8,DAT_0211a634);}
