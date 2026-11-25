// FUN_02074d9c @ 0x02074d9c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074d9c @ 0x02074d9c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional first-word child, free storage, and clear owner slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074d9c.txt.
 */
extern void FUN_020c34a0(void *), FUN_020ba8ac(void *);
void FUN_02074d9c(void **self) { void *child=*self; if(child) { if(child) { FUN_020c34a0(child); FUN_020ba8ac(child); } *self=0; } }
