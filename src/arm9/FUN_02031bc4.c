// FUN_02031bc4 @ 0x02031bc4 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031bc4 @ 0x02031bc4 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/02031bc4.txt.
 */
extern void FUN_02079970(void *); extern void FUN_0207f1f8(void *); extern void FUN_0209cf8c(void *); extern void FUN_02030a64(void *);
void FUN_02031bc4(char *s) { if(*(void **)(s+4)) FUN_02079970(*(void **)(s+4)); *(unsigned int *)(s+8)=0; if(*(void **)(s+0x24)) FUN_0207f1f8(*(void **)(s+0x24)); FUN_0209cf8c(s+0x2c); FUN_02030a64(*(void **)0x02108c54); }
