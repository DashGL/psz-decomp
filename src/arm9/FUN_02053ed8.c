// FUN_02053ed8 @ 0x02053ed8 (0x50, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_02053ed8 @ 0x02053ed8 (inventory code 0x50, arm)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 226.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b226/02053ed8.txt.
 */
int FUN_02053ed8(unsigned short *s){if(s[2]>112)return 0;if(s[12]<10||s[12]>1000)return 0;if(s[25]<1||s[25]>14)return 0;return 1;}
