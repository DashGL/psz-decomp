// FUN_02059ffc @ 0x02059ffc (0x3c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02059ffc @ 0x02059ffc (inventory code 0x3c, arm)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 219.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b219/02059ffc.txt.
 */
extern int FUN_020594d4(void *,int);int FUN_02059ffc(char *s){if(!FUN_020594d4(s,8))return 0;*(unsigned int *)(s+8)=0;*(unsigned int *)(s+16)=14;*(unsigned int *)(s+12)&=~48u;return 1;}
