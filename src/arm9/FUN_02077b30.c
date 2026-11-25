// FUN_02077b30 @ 0x02077b30 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077b30 @ 0x02077b30 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy first argument into second through reversed-argument helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077b30.txt.
 */
extern void FUN_02077984(void *,void *);
void FUN_02077b30(void *source,void *dest) { FUN_02077984(dest,source); }
