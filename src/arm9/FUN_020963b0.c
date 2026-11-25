// FUN_020963b0 @ 0x020963b0 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020963b0 @ 0x020963b0 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear 768-byte payload and four trailing bytes.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020963b0.txt.
 */
extern void FUN_0200c938(void *,unsigned int); void *FUN_020963b0(char *self) { FUN_0200c938(self,768); self[768]=0; self[769]=0; FUN_0200c938(self+770,2); return self; }
