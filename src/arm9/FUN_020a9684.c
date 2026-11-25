// FUN_020a9684 @ 0x020a9684 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a9684 @ 0x020a9684 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve value zero and update optional global receiver identifier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a9684.txt.
 */
extern unsigned int FUN_020a9278(int); extern void FUN_0204e438(unsigned int,unsigned int,unsigned int); void FUN_020a9684(void) { char *p=*(char **)0x02108d04; if(p) { unsigned int id=*(unsigned int *)(p+252); unsigned int value=FUN_020a9278(0); FUN_0204e438(id,id,value); } }
