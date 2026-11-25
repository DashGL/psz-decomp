// FUN_02093b08 @ 0x02093b08 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02093b08 @ 0x02093b08 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, notify optional global owner, then return receiver after freeing.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093b08.txt.
 */
extern void *FUN_0208f068(void); extern void FUN_0208efd4(void *,unsigned int), FUN_020ba8ac(void *); void *FUN_02093b08(unsigned int *self) { void *p; self[0]=0x020fb040; p=FUN_0208f068(); if(p) FUN_0208efd4(p,self[1]); FUN_020ba8ac(self); return self; }
