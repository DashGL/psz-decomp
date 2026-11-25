// FUN_020468cc @ 0x020468cc (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020468cc @ 0x020468cc (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/020468cc.txt.
 */
extern void FUN_02046b20(void *); extern void FUN_02018cec(void *,void *); extern void FUN_020ba8c4(void *);
void *FUN_020468cc(char *s) { *(unsigned int *)s=0x020f8f94; FUN_02046b20(s); FUN_02018cec(*(void **)(s+0x10),*(void **)(s+0x14)); FUN_020ba8c4(*(void **)(s+0x14)); *(void **)(s+0x14)=0; return s; }
