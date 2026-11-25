// FUN_0205fc14 @ 0x0205fc14 (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205fc14 @ 0x0205fc14 (inventory code 0x3c, arm)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 219.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b219/0205fc14.txt.
 */
extern void FUN_02065010(unsigned int),FUN_0205d8e0(unsigned int);void FUN_0205fc14(void){unsigned int channel=*(unsigned int *)0x020f96e4;if(channel!=~0u)FUN_02065010(channel);FUN_0205d8e0(*(unsigned int *)0x021125d4);*(unsigned int *)0x021125d4=0;*(unsigned int *)0x021125e4=0;}
