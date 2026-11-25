// FUN_02079c48 @ 0x02079c48 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_02079c48 @ 0x02079c48 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check active player mask against descriptor mask.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02079c48.txt.
 */
extern unsigned int FUN_020855bc(int); int FUN_02079c48(char *self) { unsigned int mask=0; unsigned int current=**(unsigned char **)(self+52); int i; for(i=0;i<4;i++) if(FUN_020855bc(i)-1<=1) mask|=1u<<i; return mask==(mask&current); }
