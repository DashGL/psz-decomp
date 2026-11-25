// FUN_020bf2d8 @ 0x020bf2d8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020bf2d8 @ 0x020bf2d8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize sentinel and zero fields, then copy default triple to+20.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf2d8.txt.
 */
extern void FUN_020525a8(void *,void *); void *FUN_020bf2d8(unsigned int *self) { self[0]=-1; self[1]=0; self[2]=0; FUN_020525a8(self+8,(void *)0x020f5c04); return self; }
