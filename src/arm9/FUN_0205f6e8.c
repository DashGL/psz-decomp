// FUN_0205f6e8 @ 0x0205f6e8 (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205f6e8 @ 0x0205f6e8 (inventory code 0x38, arm)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 219.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b219/0205f6e8.txt.
 */
extern void FUN_02065010(unsigned int),FUN_0205dbf8(unsigned int);void FUN_0205f6e8(void){unsigned int channel=*(unsigned int *)0x020f96e4;if(channel!=~0u)FUN_02065010(channel);FUN_0205dbf8(*(unsigned int *)0x021125b8);*(unsigned int *)0x021125b8=0;}
