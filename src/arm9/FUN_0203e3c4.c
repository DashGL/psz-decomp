// FUN_0203e3c4 @ 0x0203e3c4 (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e3c4 @ 0x0203e3c4 (inventory code 0x54, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/0203e3c4.txt.
 */
extern void FUN_0203df7c(void *);extern void *FUN_02077930(void);extern void FUN_02077c78(void *,int,int);extern void FUN_02049138(void *,int);extern void FUN_02049228(void *);
void FUN_0203e3c4(char *s){FUN_0203df7c(s);FUN_02077c78(FUN_02077930(),*(int *)(s+0x280),0);FUN_02077c78(FUN_02077930(),*(int *)(s+0x284),1);FUN_02077c78(FUN_02077930(),*(int *)(s+0x288),2);if(*(void **)(s+0x294)){FUN_02049138(*(void **)(s+0x294),0);FUN_02049228(*(void **)(s+0x294));}}
