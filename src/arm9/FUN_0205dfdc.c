// FUN_0205dfdc @ 0x0205dfdc (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_0205dfdc @ 0x0205dfdc (inventory code 0x1c, arm)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 145.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b145/0205dfdc.txt.
 */
extern unsigned int FUN_0205de00(void *);unsigned int FUN_0205dfdc(void){*(volatile unsigned int *)0x04001000&=~0x40000000u;return FUN_0205de00((void *)0x021125b2);}
