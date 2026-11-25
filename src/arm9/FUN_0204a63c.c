// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_0204a63c @ 0x0204a63c (inventory code 0x34, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/0204a63c.txt.
 */
extern void FUN_0204adbc(void *);
void FUN_0204a63c(char *s,unsigned int key,unsigned int shift) { char *p=*(char **)(s+4); unsigned int mask=1u<<shift; while(p) { char *next=*(char **)(p+0x10); if(*(unsigned int *)(p+0xe8)==key && (*(unsigned int *)(p+0xe4)&mask)) { if(p) FUN_0204adbc(p); } p=next; } }
