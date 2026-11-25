// FUN_0208e6b4 @ 0x0208e6b4 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_0208e6b4 @ 0x0208e6b4 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward third argument as selector, receiver word +c as argument two, and trailing zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e6b4.txt.
 */
extern unsigned int FUN_0208e6c4(void *,unsigned int,unsigned int,unsigned int);
unsigned int FUN_0208e6b4(unsigned int *self,unsigned int unused,unsigned int selector) { return FUN_0208e6c4(self,selector,self[3],0); }
