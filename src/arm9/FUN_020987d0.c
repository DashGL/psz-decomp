// FUN_020987d0 @ 0x020987d0 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020987d0 @ 0x020987d0 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Transform two source words and forward result to receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020987d0.txt.
 */
extern int FUN_0205c9e4(int,int); extern void FUN_020987e8(void *,int); void FUN_020987d0(void *self,int *source) { FUN_020987e8(self,FUN_0205c9e4(source[0],source[2])); }
