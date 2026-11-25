// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0208ed04 @ 0x0208ed04 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_0208ed04 @ 0x0208ed04 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct descriptor with mapped tag and resolve global record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208ed04.txt.
 */
extern int FUN_0208ee0c(int);extern void FUN_02030da8(void *,void *),FUN_02030d5c(void *,void *);extern void *FUN_02030a98(void *,void *);void *FUN_0208ed04(char *self){char first[4],second[4];int tag=FUN_0208ee0c(**(signed char **)(self+72));FUN_02030da8(first,self);FUN_02030d5c(second,first);second[3]=tag;return FUN_02030a98(*(void **)0x02108c54,second);}
