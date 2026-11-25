// FUN_0208e2d0 @ 0x0208e2d0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0208e2d0 @ 0x0208e2d0 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear five words in target order and reset global helper state; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e2d0.txt.
 */
extern void FUN_020b80d8(void);
void *FUN_0208e2d0(unsigned int *self) { self[0]=0; self[3]=0; self[4]=0; self[1]=0; self[2]=0; FUN_020b80d8(); return self; }
