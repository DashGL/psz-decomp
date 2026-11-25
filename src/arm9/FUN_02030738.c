// FUN_02030738 @ 0x02030738 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_02030738 @ 0x02030738 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Test whether any of four signed halfwords in pointed storage differs from -1.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02030738.txt.
 */
int FUN_02030738(short **self) { short *values=*self; int i; for(i=0;i<4;i++) if(values[i]!=-1) return 1; return 0; }
