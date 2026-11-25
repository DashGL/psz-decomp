// FUN_0207d2d8 @ 0x0207d2d8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207d2d8 @ 0x0207d2d8 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize base, install derived table, clear word +17c; return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207d2d8.txt.
 */
extern void FUN_0207a44c(void *);
void *FUN_0207d2d8(unsigned int *self) { FUN_0207a44c(self); self[0]=0x020fa580; self[95]=0; return self; }
