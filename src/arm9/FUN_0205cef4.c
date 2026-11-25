// FUN_0205cef4 @ 0x0205cef4 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_0205cef4 @ 0x0205cef4 (inventory code 0x18, arm)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 106.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b106/0205cef4.txt.
 */
void FUN_0205cef4(unsigned int value){volatile unsigned int *p=(volatile unsigned int *)0x04001000;*p=(*p&~7u)|value;}
