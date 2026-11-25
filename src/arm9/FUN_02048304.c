// FUN_02048304 @ 0x02048304 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048304 @ 0x02048304 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/02048304.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_02048344(void *); extern void FUN_020483f4(void *,void *,void *,void *);
void *FUN_02048304(void *a,void *b,void *c) { void *p=FUN_020ba894(32); if(p) p=FUN_02048344(p); if(p) FUN_020483f4(p,a,b,c); return p; }
