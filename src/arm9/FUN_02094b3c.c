// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fb090[];
extern unsigned char DAT_020fb0ac[];
extern unsigned char DAT_020fb180[];
extern unsigned char DAT_020fb1b0[];
// FUN_02094b3c @ 0x02094b3c (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor tables and destroy owned components and base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094b3c.txt.
 */
extern void FUN_02094eb8(void *),FUN_02094a64(void *),FUN_0208ded0(void *),FUN_0203970c(void *);void *FUN_02094b3c(char *self){*(unsigned int *)self=((unsigned int)DAT_020fb090 + 0u);*(unsigned int *)(self+32)=((unsigned int)DAT_020fb0ac + 0u);*(unsigned int *)(self+240)=((unsigned int)DAT_020fb180 + 0u);*(unsigned int *)(self+588)=((unsigned int)DAT_020fb1b0 + 0u);FUN_02094eb8(self);FUN_02094a64(self+596);FUN_0208ded0(self+588);FUN_0203970c(self);return self;}
