// FUN_0204ef14 @ 0x0204ef14 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204ef14 @ 0x0204ef14 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/0204ef14.txt.
 */
extern int FUN_0204ef4c(void *,int);
int FUN_0204ef14(char *s,int value) { unsigned int flags=*(unsigned short *)(s+2); if(flags&0x8000) { if(!(flags&0x1000)) return FUN_0204ef4c(s,value); } else { if(flags&0x4000) return value; if(flags&0x2000) return value/2; } return 0; }
