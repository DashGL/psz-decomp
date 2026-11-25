// FUN_0204faf8 @ 0x0204faf8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204faf8 @ 0x0204faf8 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/0204faf8.txt.
 */
extern int FUN_02046694(unsigned int,void *); extern int FUN_020c186c(unsigned int); extern void FUN_020c1884(unsigned int); extern void FUN_020c1a78(int,unsigned int);
void FUN_0204faf8(char *s) { if(!*(unsigned int *)(s+0x20)) { int result=FUN_02046694(*(unsigned int *)(s+0x1c),s+4); if(result>=0) { unsigned int id=*(unsigned int *)(s+0x1c); *(int *)(s+0x24)=FUN_020c186c(id); FUN_020c1884(id); FUN_020c1a78(result,id); *(unsigned int *)(s+0x20)=1; } } }
