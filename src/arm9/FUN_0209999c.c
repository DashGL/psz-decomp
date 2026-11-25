// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_0209999c @ 0x0209999c
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set category bytes and optionally copy resource payload.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209999c.txt.
 */
extern signed char data_020f466a[];
extern signed char data_020f466b[];
extern signed char data_020f466c[];
extern void FUN_020c44e4(void *,void *);int FUN_0209999c(char *s,char *out,int category){if(category>=0 && category<5){out[32]=data_020f466a[category*4];out[33]=data_020f466b[category*4];out[34]=data_020f466c[category*4];if(*(char **)(s+68))FUN_020c44e4(out,*(char **)(s+68)+16*category);return 1;}return 0;}
