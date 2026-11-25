// FUN_0205e6b0 @ 0x0205e6b0 (0x6c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205e6b0 @ 0x0205e6b0 (inventory code 0x5c, arm)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 230.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b230/0205e6b0.txt.
 */
extern void FUN_0205e7dc(void);void FUN_0205e6b0(void){volatile unsigned int *status=(volatile unsigned int *)0x04000600;volatile unsigned short *control=(volatile unsigned short *)0x04000060;while(*status&0x08000000){}*status=*status|0x8000;*control=*control|0x2000;*control=*control|0x1000;FUN_0205e7dc();*(volatile unsigned int *)0x040004a4=0x001f0080;*(volatile unsigned int *)0x040004a8=0;*(volatile unsigned int *)0x040004ac=0;}
