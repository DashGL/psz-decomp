// FUN_0207d9e8 @ 0x0207d9e8 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207d9e8 @ 0x0207d9e8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Call primary predicate; if false invoke secondary helper for side effects but preserve original result.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207d9e8.txt.
 */
extern int FUN_020476ac(void *), FUN_0204771c(void *);
int FUN_0207d9e8(void *self) { int result=FUN_020476ac(self); if(!result) FUN_0204771c(self); return result; }
