// FUN_0204fa84 @ 0x0204fa84 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fa84 @ 0x0204fa84 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/0204fa84.txt.
 */
extern void FUN_020c189c(int,unsigned int); extern void *FUN_0204a580(void); extern void FUN_0204a628(void *,void *);
void *FUN_0204fa84(char *s) { *(unsigned int *)s=0x020f927c; if(*(int *)(s+0x24)>=0) FUN_020c189c(*(int *)(s+0x24),*(unsigned int *)(s+0x1c)); FUN_0204a628(FUN_0204a580(),*(void **)(s+0x14)); FUN_0204a628(FUN_0204a580(),*(void **)(s+0x18)); *(void **)(s+0x14)=0; *(void **)(s+0x18)=0; return s; }
