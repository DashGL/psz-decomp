// FUN_020afeac @ 0x020afeac (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020afeac @ 0x020afeac (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize 112-byte receiver and return it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afeac.txt.
 */
extern void FUN_0200c938(void *,unsigned int); void *FUN_020afeac(void *self) { FUN_0200c938(self,112); return self; }
