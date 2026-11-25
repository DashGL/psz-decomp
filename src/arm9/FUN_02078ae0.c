// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa284[];
extern unsigned char DAT_0211a3b8[];
extern unsigned char DAT_0211a51c[];
// FUN_02078ae0 @ 0x02078ae0 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Accept requested global mode when readiness conditions allow.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078ae0.txt.
 */
extern int FUN_02084c2c(void *),FUN_02085438(void),FUN_02084ce8(void *);void FUN_02078ae0(int mode){int accept=0;if(mode==2){if(*(int *)((unsigned int)DAT_020fa284 + 4u)==-1)accept=1;}else if(mode==0 && FUN_02084c2c((void *)((unsigned int)DAT_0211a51c + 0u)))accept=1;else if(FUN_02085438()>0 && !FUN_02084ce8((void *)((unsigned int)DAT_0211a51c + 0u)))accept=1;if(accept){*(int *)((unsigned int)DAT_020fa284 + 4u)=mode;*(int *)((unsigned int)DAT_0211a3b8 + 4u)=*(signed char *)((unsigned int)DAT_0211a3b8 + 24u);}}
