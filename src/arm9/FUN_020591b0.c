// FUN_020591b0 @ 0x020591b0 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_020591b0 @ 0x020591b0 (inventory code 0x20, arm)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 156.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b156/020591b0.txt.
 */
extern void FUN_02065774(void *,void *,unsigned int);int FUN_020591b0(char *s,void *dst,unsigned int offset,unsigned int size){FUN_02065774(dst,(char *)*(unsigned int *)(s+40)+offset,size);return 0;}
