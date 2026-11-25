// FUN_0208657c @ 0x0208657c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0208657c @ 0x0208657c (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy player record and mark global dirty word.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208657c.txt.
 */
extern void FUN_020865bc(void *,void *);void FUN_0208657c(void *record,int index){char *g=*(char **)0x0211a52c;if(g && index>=0 && index<4){FUN_020865bc(g+640+12*index,record);g=*(char **)0x0211a52c;*(int *)(g+784+4*index)=1;}}
