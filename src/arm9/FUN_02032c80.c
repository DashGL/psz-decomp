// FUN_02032c80 @ 0x02032c80 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02032c80 @ 0x02032c80 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Forward optional object, two caller arguments and signed byte +16; return normalized success.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02032c80.txt.
 */
extern int FUN_02083068(void *,void *,void *,int);
int FUN_02032c80(signed char *self,void *a,void *b) { void *object=*(void **)self; if(object && FUN_02083068(object,a,b,self[22])) return 1; return 0; }
