// FUN_02090780 @ 0x02090780 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02090780 @ 0x02090780 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward three inputs to global object helper with fifth argument two; always return one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02090780.txt.
 */
extern void FUN_0208d638(void *,unsigned int,unsigned int,unsigned int,int);
int FUN_02090780(unsigned int a,unsigned int b,unsigned int c) { FUN_0208d638((void *)0x0211a578,a,b,c,2); return 1; }
