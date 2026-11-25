// FUN_0209a9bc @ 0x0209a9bc (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_0209a9bc @ 0x0209a9bc (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run helper on optional global object and its +a4 field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a9bc.txt.
 */
extern void FUN_0209a9d8(void *,void *); void FUN_0209a9bc(void) { char *p=*(char **)0x0211a61c; if(p) FUN_0209a9d8(p,*(void **)(p+164)); }
