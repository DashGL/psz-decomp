// FUN_0209f2d0 @ 0x0209f2d0 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_0209f2d0 @ 0x0209f2d0 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy bounded string only if source present.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f2d0.txt.
 */
extern void FUN_02003d54(void *,void *,unsigned int); void FUN_0209f2d0(void *dest,void *source) { if(source) FUN_02003d54(dest,source,63); }
