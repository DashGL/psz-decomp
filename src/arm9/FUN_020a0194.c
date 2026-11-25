// FUN_020a0194 @ 0x020a0194 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a0194 @ 0x020a0194 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set halfword +60 based on global condition when selector zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0194.txt.
 */
extern int FUN_02033704(void); void FUN_020a0194(char *self,int selector) { if(selector==0) { if(FUN_02033704()==0) *(unsigned short *)(self+96)=3640; else *(unsigned short *)(self+96)=0; } }
