// FUN_02032ee4 @ 0x02032ee4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02032ee4 @ 0x02032ee4 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Forward optional first-word object, signed byte +16 and caller argument; absent object returns zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02032ee4.txt.
 */
extern unsigned int FUN_02083128(void *,int,void *);
unsigned int FUN_02032ee4(signed char *self,void *arg) { void *object=*(void **)self; if(object) return FUN_02083128(object,self[22],arg); return 0; }
