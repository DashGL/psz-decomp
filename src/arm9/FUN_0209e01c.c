// FUN_0209e01c @ 0x0209e01c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_0209e01c @ 0x0209e01c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy and free optional child with nested null guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e01c.txt.
 */
extern void FUN_0209e1f8(void *),FUN_020ba8ac(void *); void FUN_0209e01c(void **self) { void *p=self[1]; if(p) { if(p) { FUN_0209e1f8(p); FUN_020ba8ac(p); } self[1]=0; } }
