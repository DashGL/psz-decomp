// FUN_02087698 @ 0x02087698 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02087698 @ 0x02087698 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional global object at +8 through virtual slot +4, clear slot; nested null checks preserved.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02087698.txt.
 */
void FUN_02087698(void) { void **state=(void **)0x0211a534; void *object=state[2]; if(object) { if(object) { if(object) { void (**table)(void *)=*(void (***)(void *))object; table[1](object); } state[2]=0; } } }
