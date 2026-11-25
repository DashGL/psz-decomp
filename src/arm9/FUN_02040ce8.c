// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_02040ce8 @ 0x02040ce8 (inventory code 0x24, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 */
extern char *FUN_02040ca8(void *,unsigned int);
int FUN_02040ce8(void *s,unsigned int key,unsigned int shift) { char *p=FUN_02040ca8(s,key); if(p) { unsigned int mask=1u<<shift; return (*(unsigned int *)(p+0x110)&mask)!=0; } return 0; }

/* Proven caller domain and full byte/relocation evidence: notes/reference/resume2-low-20261112/FUN_02040ce8-proof.json. */
