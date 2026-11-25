// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa0c8[];
extern unsigned char DAT_020fa0f0[];
// FUN_0207678c @ 0x0207678c (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy components then free owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207678c.txt.
 */
extern void FUN_02076a18(void *),FUN_020306fc(void *),FUN_02076f90(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_0207678c(char *self){*(unsigned int *)self=((unsigned int)DAT_020fa0c8 + 0u);*(unsigned int *)(self+48)=((unsigned int)DAT_020fa0f0 + 0u);FUN_02076a18(self);FUN_020306fc(self+108);FUN_020306fc(self+100);FUN_020306fc(self+92);FUN_020306fc(self+84);FUN_02076f90(self+48);FUN_020303bc(self);FUN_020ba8ac(self);return self;}
