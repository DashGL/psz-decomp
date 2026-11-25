// FUN_0203260c @ 0x0203260c (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_0203260c @ 0x0203260c (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 35.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b35/0203260c.txt.
 */
extern int FUN_0203ae60(void *); extern int FUN_0205136c(void *,int,int); extern int FUN_02033400(void *,int);
void FUN_0203260c(char *s) { int id=*(signed char *)(s+22); void *p=*(void **)0x02108d04; if(p && !FUN_0203ae60(p) && !(*(unsigned short *)(s+4)&2) && FUN_0205136c(*(void **)0x0210e24c,id,0) && FUN_02033400(*(void **)0x02108c68,1)) *(unsigned short *)(s+4)|=2; }
