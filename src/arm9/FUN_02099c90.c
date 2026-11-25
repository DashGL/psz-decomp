// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_02099c90 @ 0x02099c90 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize bounded descriptor and replace packed field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099c90.txt.
 */
extern char G_020F4660[]; extern char G_020F4661[];
extern int FUN_020a7800(void *,int,int);int FUN_02099c90(char *self,unsigned int *desc,int kind){if(kind>=0 && kind<5){int result=FUN_020a7800(desc,((unsigned char *)G_020F4660)[2*kind],((unsigned char *)G_020F4661)[2*kind]);desc[1]=(desc[1]&0xfffff80f)|(*(unsigned int *)(self+36)<<4);return result;}return 0;}
