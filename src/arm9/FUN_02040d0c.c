// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// FUN_02040d0c @ 0x02040d0c (inventory code 0x1e, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Find record and clear the selected flag. All callers supply indices 0..6.
 */
extern char *FUN_02040ca8(void *,unsigned int);
void FUN_02040d0c(void *self,unsigned int key,unsigned int shift) { char *record=FUN_02040ca8(self,key); if(record) { unsigned int mask=1u<<shift; *(unsigned int *)(record+0x110)&=~mask; } }

/* Proven caller domain and full byte/relocation evidence: notes/reference/resume2-low-20261112/FUN_02040d0c-proof.json. */
