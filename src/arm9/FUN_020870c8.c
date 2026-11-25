// FUN_020870c8 @ 0x020870c8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020870c8 @ 0x020870c8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Zero 3444-byte subobject at +3c then initialize it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020870c8.txt.
 */
extern void FUN_0206557c(int,void *,unsigned int), FUN_02086edc(void *);
void FUN_020870c8(char *self) { FUN_0206557c(0,self+60,3444); FUN_02086edc(self+60); }
