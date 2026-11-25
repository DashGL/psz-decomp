// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fb090[];
extern unsigned char DAT_020fb0ac[];
extern unsigned char DAT_020fb180[];
extern unsigned char DAT_020fb1b0[];
// FUN_02094b8c @ 0x02094b8c (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor tables and destroy embedded resources.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094b8c.txt.
 */
extern void FUN_02094eb8(void *),FUN_02094a64(void *),FUN_0208ded0(void *),FUN_0203970c(void *),FUN_020ba940(void *);void *FUN_02094b8c(char *s){*(unsigned int *)s=((unsigned int)DAT_020fb090 + 0u);*(unsigned int *)(s+32)=((unsigned int)DAT_020fb0ac + 0u);*(unsigned int *)(s+240)=((unsigned int)DAT_020fb180 + 0u);*(unsigned int *)(s+588)=((unsigned int)DAT_020fb1b0 + 0u);FUN_02094eb8(s);FUN_02094a64(s+596);FUN_0208ded0(s+588);FUN_0203970c(s);FUN_020ba940(s);return s;}
