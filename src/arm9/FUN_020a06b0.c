// FUN_020a06b0 @ 0x020a06b0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020a06b0 @ 0x020a06b0 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Trigger embedded action for selector zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a06b0.txt.
 */
extern void FUN_02030808(void *,int,int); void FUN_020a06b0(char *self,int selector) { if(selector==0) FUN_02030808(self+68,1,0); }
