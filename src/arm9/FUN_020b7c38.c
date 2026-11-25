// FUN_020b7c38 @ 0x020b7c38 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020b7c38 @ 0x020b7c38 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve accepted identifier through global manager then validate result.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7c38.txt.
 */
extern int FUN_02078198(int); extern void *FUN_020352a4(void *,int),*FUN_020352c0(void *); void *FUN_020b7c38(int id) { if(FUN_02078198(id)) return FUN_020352c0(FUN_020352a4(*(void **)0x02108cf4,id)); return 0; }
