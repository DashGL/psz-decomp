// FUN_0205fc98 @ 0x0205fc98 (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205fc98 @ 0x0205fc98 (inventory code 0x38, arm)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 212.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b212/0205fc98.txt.
 */
unsigned int FUN_0205fc98(unsigned int x){unsigned int y;x-=(x>>1)&0x55555555;y=(x&0x33333333)+((x>>2)&0x33333333);x=(y+(y>>4))&0x0f0f0f0f;x+=x>>8;x+=x>>16;return x&255;}
