// FUN_020468f4 @ 0x020468f4 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020468f4 @ 0x020468f4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/020468f4.txt.
 */
extern void FUN_02046b20(void *); extern void FUN_02018cec(void *,void *); extern void FUN_020ba8c4(void *); extern void FUN_020ba8ac(void *);
void *FUN_020468f4(char *s) { *(unsigned int *)s=0x020f8f94; FUN_02046b20(s); FUN_02018cec(*(void **)(s+0x10),*(void **)(s+0x14)); FUN_020ba8c4(*(void **)(s+0x14)); *(void **)(s+0x14)=0; FUN_020ba8ac(s); return s; }
