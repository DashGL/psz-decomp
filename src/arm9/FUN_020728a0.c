// FUN_020728a0 @ 0x020728a0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020728a0 @ 0x020728a0 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate six76-byte records with alignment16 and reset receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020728a0.txt.
 */
extern void *FUN_020ba8bc(unsigned int,unsigned int); extern void FUN_020728ec(void *); void *FUN_020728a0(unsigned int *self) { self[0]=0; self[1]=0; self[0]=6; self[1]=(unsigned int)FUN_020ba8bc(76*self[0],16); FUN_020728ec(self); return self; }
