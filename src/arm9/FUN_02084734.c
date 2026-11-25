// FUN_02084734 @ 0x02084734 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02084734 @ 0x02084734 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily resolve nonempty resource blob and return cached result.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084734.txt.
 */
extern void *FUN_020ba440(void *); void *FUN_02084734(void **self) { if(!self[1] && self[0] && *(signed char *)self[0]) self[1]=FUN_020ba440(self[0]); return self[1]; }
