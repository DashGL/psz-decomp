// FUN_0205c6ac @ 0x0205c6ac (0x2c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_0205c6ac @ 0x0205c6ac (inventory code 0x24, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 156.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b156/0205c6ac.txt.
 */
unsigned int FUN_0205c6ac(void){while(*(volatile unsigned short *)0x040002b0&0x8000){}return (*(volatile unsigned int *)0x040002b4+512)>>10;}
