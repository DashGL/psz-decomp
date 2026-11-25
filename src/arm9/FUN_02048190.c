// FUN_02048190 @ 0x02048190 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048190 @ 0x02048190 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/02048190.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020481bc(void *); extern void FUN_02048234(void *,void *,void *);
void *FUN_02048190(void *a,void *b) { void *p=FUN_020ba894(0x10c); if(p) p=FUN_020481bc(p); if(p) FUN_02048234(p,a,b); return p; }
