// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Proven live shift domain: notes/sessions/matching-resume2-low-2026-11-12.md
// All established direct callers pass shift 0, 1 or 2.
// FUN_02036a4c @ 0x02036a4c (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 31.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b31/02036a4c.txt.
 */
extern void FUN_02042560(void *,int);
void FUN_02036a4c(char *s,unsigned int shift) { unsigned int mask; if(!*(unsigned int *)(s+8)) { int i; for(i=0;i<*(int *)(s+0x9c);i++) FUN_02042560(*(void **)(*(char **)(s+0x98)+112*i),0); } mask=1u<<shift; *(unsigned int *)(s+8)|=mask; }
