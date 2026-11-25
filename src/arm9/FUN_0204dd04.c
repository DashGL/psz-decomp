// FUN_0204dd04 @ 0x0204dd04 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204dd04 @ 0x0204dd04 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/0204dd04.txt.
 */
extern int FUN_0204db98(void *,int); extern int FUN_0204dbc4(void *,int);
int FUN_0204dd04(char *s) { int result=0; if(FUN_0204db98(s,0) && !FUN_0204dbc4(s,17) && *(unsigned char *)(s+3)<=2) result=1; return result; }
