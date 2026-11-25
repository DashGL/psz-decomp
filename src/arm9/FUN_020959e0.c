// FUN_020959e0 @ 0x020959e0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020959e0 @ 0x020959e0 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy descriptor to one of four slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020959e0.txt.
 */
extern void FUN_02039534(void *,void *); void FUN_020959e0(char *self,void *source,unsigned int index) { if(index<4) FUN_02039534(self+720+16*index,source); }
