// FUN_0205eb28 @ 0x0205eb28 (0x3c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205eb28 @ 0x0205eb28 (inventory code 0x38, arm)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 209.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b209/0205eb28.txt.
 */
void FUN_0205eb28(unsigned int sine,unsigned int cosine){volatile unsigned int *port=(volatile unsigned int *)0x04000468;*port=cosine;*port=0;*port=0u-sine;*port=0;*port=4096;*port=0;*port=sine;*port=0;*port=cosine;}
