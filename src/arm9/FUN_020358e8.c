// FUN_020358e8 @ 0x020358e8 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020358e8 @ 0x020358e8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Select 112-byte record from table +98 and forward its first word plus two arguments.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/020358e8.txt.
 */
extern void FUN_0204248c(void *,int,void *);
void FUN_020358e8(char *self,unsigned int index,int slot,void *value) { char *records=*(char **)(self+0x98); FUN_0204248c(*(void **)(records+112*index),slot,value); }
