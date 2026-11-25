// FUN_020b7c5c @ 0x020b7c5c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b7c5c @ 0x020b7c5c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve identifier and report inverse object predicate.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7c5c.txt.
 */
extern void *FUN_020b7c38(int); extern int FUN_020375f0(void *); int FUN_020b7c5c(int id) { void *p=FUN_020b7c38(id); if(p) { if(!FUN_020375f0(p)) return 1; return 0; } return 0; }
