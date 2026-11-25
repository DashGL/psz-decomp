// FUN_02040010 @ 0x02040010 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_02040010 @ 0x02040010 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Look up record by key and return whether its +8 payload exists.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02040010.txt.
 */
extern char *FUN_0203ff0c(void *,int);
int FUN_02040010(void *self,int key) { char *record=FUN_0203ff0c(self,key); if(record) { if(*(void **)(record+8)) return 1; return 0; } return 0; }
