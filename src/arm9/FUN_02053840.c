// FUN_02053840 @ 0x02053840 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02053840 @ 0x02053840 (inventory code 0x1c, arm)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 112.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b112/02053840.txt.
 */
extern int FUN_02052f80(void);unsigned int FUN_02053840(void){if(FUN_02052f80())return 32768;return *(unsigned short *)0x027ffcfa;}
