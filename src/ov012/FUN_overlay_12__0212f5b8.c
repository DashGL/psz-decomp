// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// FUN_overlay_12__0212f5b8 @ 0x0212f5b8, verified extent 0x60.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02138784[];
extern unsigned char DAT_021387ec[];
extern unsigned char DAT_0213e598[];
extern unsigned char DAT_0213e5b0[];
// FUN_overlay_12__0212f5b8 @ 0x0212f5b8 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG/pools and concrete ABI reviewed. */
extern void FUN_overlay_12__0212c9b8(void),FUN_overlay_12__02131b10(int),FUN_overlay_12__0212c694(void *),FUN_overlay_12__0212c6b4(void *);extern void *FUN_020c1fc8(void);extern int FUN_020c2438(void *,void *,void *,int);void FUN_overlay_12__0212f5b8(char *s){FUN_overlay_12__0212c9b8();FUN_overlay_12__02131b10(0);FUN_overlay_12__02131b10(1);FUN_overlay_12__02131b10(4);*(int *)(s+244)=FUN_020c2438(FUN_020c1fc8(),(void *)((unsigned int)DAT_0213e598 + 0u),(void *)((unsigned int)DAT_0213e5b0 + 0u),2);FUN_overlay_12__0212c694((void *)((unsigned int)DAT_021387ec + 0u));FUN_overlay_12__0212c6b4((void *)((unsigned int)DAT_02138784 + 0u));*(int *)(s+248)=1;*(int *)(s+252)=1;*(int *)(s+68)=0;}
