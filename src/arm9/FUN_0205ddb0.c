// FUN_0205ddb0 @ 0x0205ddb0 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_0205ddb0 @ 0x0205ddb0 (inventory code 0x1c, arm)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 112.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b112/0205ddb0.txt.
 */
extern unsigned int FUN_0205dcf8(void *);unsigned int FUN_0205ddb0(void){*(volatile unsigned int *)0x4001000&=~0x40000000u;return FUN_0205dcf8((void *)0x21125b2);}
