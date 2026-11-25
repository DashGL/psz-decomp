// FUN_0203ffe8 @ 0x0203ffe8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203ffe8 @ 0x0203ffe8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Look up record by signed key, then return indexed 20-byte entry from its +30 table.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203ffe8.txt.
 */
extern char *FUN_0203ff0c(void *,int);
void *FUN_0203ffe8(void *self,int key,unsigned int index) { char *record=FUN_0203ff0c(self,key); if(record) return *(char **)(record+48)+20*index; return 0; }
