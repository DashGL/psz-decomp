// FUN_020a14a0 @ 0x020a14a0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a14a0 @ 0x020a14a0 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Raise indexed halfword statistic for unsigned-valid signed selector.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a14a0.txt.
 */
extern void *FUN_02086e3c(void); extern signed char *FUN_020870c4(void *); void FUN_020a14a0(char *self,int value) { unsigned int index=FUN_020870c4(FUN_02086e3c())[32]; if(index<3) { unsigned short *p=(unsigned short *)(self+188); if(p[index]<value) p[index]=value; } }
