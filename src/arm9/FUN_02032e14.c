// FUN_02032e14 @ 0x02032e14 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02032e14 @ 0x02032e14 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Resolve object with option one then test signed byte +30 equals five.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02032e14.txt.
 */
extern signed char *FUN_02032ca0(void *,int);
int FUN_02032e14(void *self) { signed char *object=FUN_02032ca0(self,1); if(object && object[48]==5) return 1; return 0; }
