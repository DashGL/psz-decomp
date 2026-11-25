// FUN_020a96a8 @ 0x020a96a8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020a96a8 @ 0x020a96a8 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve global player and submit four-argument operation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a96a8.txt.
 */
extern int FUN_020a9278(int); extern void FUN_0204e608(int,int,int,int); void FUN_020a96a8(void) { char *p=*(char **)0x02108d04; if(p) { int id=*(int *)(p+252); int value=FUN_020a9278(0); FUN_0204e608(id,id,value,34); } }
