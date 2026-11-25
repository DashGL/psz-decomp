// FUN_0207ee38 @ 0x0207ee38 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207ee38 @ 0x0207ee38 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize base, install derived table, clear word +104; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207ee38.txt.
 */
extern void FUN_0204734c(void *);
void *FUN_0207ee38(unsigned int *self) { FUN_0204734c(self); self[0]=0x020fa440; self[65]=0; return self; }
