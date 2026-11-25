// FUN_020b5b10 @ 0x020b5b10 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020b5b10 @ 0x020b5b10 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Use global manager, second and third inputs, and fixed bit24.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b5b10.txt.
 */
extern void *FUN_0204a580(void); extern void FUN_0204a6ac(void *,unsigned int,int,unsigned int); void FUN_020b5b10(void *unused,unsigned int id,unsigned int value) { FUN_0204a6ac(FUN_0204a580(),id,24,value); }
