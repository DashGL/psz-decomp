// FUN_02099480 @ 0x02099480 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02099480 @ 0x02099480 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release argument through optional global object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099480.txt.
 */
extern void FUN_02099498(void *,void *); void FUN_02099480(void *arg) { void *p=*(void **)0x0211a618; if(p) FUN_02099498(p,arg); }
