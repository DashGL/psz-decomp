// FUN_0204d83c @ 0x0204d83c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204d83c @ 0x0204d83c (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/0204d83c.txt.
 */
extern void FUN_02033dec(void *,void *,unsigned int); extern void FUN_02033e0c(void *,void *,unsigned int,unsigned int);
void FUN_0204d83c(char *s) { void *manager=*(void **)0x02108c84; if(manager) { char *p=*(char **)(s+4); if(p) { void *child=*(void **)(p+0x30); if(child) { FUN_02033dec(manager,child,*(unsigned short *)(s+0x18)); FUN_02033e0c(manager,child,*(unsigned short *)(s+0x18),*(unsigned short *)(s+0x14)); } } } }
