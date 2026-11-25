// FUN_020af5a0 @ 0x020af5a0 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020af5a0 @ 0x020af5a0 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward second incoming argument to lookup helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af5a0.txt.
 */
extern void *FUN_020c1154(int); void *FUN_020af5a0(void *unused,int index) { return FUN_020c1154(index); }
