// FUN_0204ef7c @ 0x0204ef7c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204ef7c @ 0x0204ef7c (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/0204ef7c.txt.
 */
extern int FUN_0204ef4c(void *,int);
int FUN_0204ef7c(char *self,int value) { unsigned int flags=*(unsigned short *)(self+2); if((flags&0x8000) && (flags&0x1000)) return FUN_0204ef4c(self,value); return 0; }
