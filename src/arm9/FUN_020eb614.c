// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-static-initializers.md
// flags: -O4,s
extern unsigned char DAT_0211a578[],DAT_0211a57c[];
extern void FUN_0208deb4(void *);extern void FUN_0208dec0(void *);
extern void *FUN_0200c594(void *,void (*)(void *),void *);
void *FUN_020eb614(void){FUN_0208deb4(DAT_0211a578);return FUN_0200c594(DAT_0211a578,FUN_0208dec0,DAT_0211a57c);}
