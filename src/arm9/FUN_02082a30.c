// FUN_02082a30 @ 0x02082a30 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_02082a30 @ 0x02082a30 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear array pointer +4ec; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082a30.txt.
 */
void *FUN_02082a30(char *self) { *(void **)(self+0x4ec)=0; return self; }
