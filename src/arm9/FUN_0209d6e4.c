// FUN_0209d6e4 @ 0x0209d6e4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209d6e4 @ 0x0209d6e4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * If receiver signed tag zero, set bit zero of manager entry.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209d6e4.txt.
 */
extern unsigned char *FUN_02030a98(void *,void *); void FUN_0209d6e4(signed char *self) { if(self[8]==0) { unsigned char *p=FUN_02030a98(*(void **)0x02108c54,self+4); *p|=1; } }
