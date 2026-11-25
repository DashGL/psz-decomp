// FUN_02086a1c @ 0x02086a1c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02086a1c @ 0x02086a1c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve manager object and filter by predicate.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086a1c.txt.
 */
extern void *FUN_020352a4(void *,int),*FUN_02039200(void *); extern int FUN_0203bf48(void *); void *FUN_02086a1c(int index) { void *p=FUN_02039200(FUN_020352a4(*(void **)0x02108cf4,index)); if(p && FUN_0203bf48(p)) return p; return 0; }
