// FUN_0205c540 @ 0x0205c540 (0x34, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_0205c540 @ 0x0205c540 (inventory code 0x30, arm)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 200.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b200/0205c540.txt.
 */
extern unsigned int FUN_0205c6ac(void);unsigned int FUN_0205c540(int value){volatile unsigned short *control=(volatile unsigned short *)0x040002b0;if(value<=0)return 0;*control=1;*(volatile unsigned int *)0x040002b8=0;*(volatile unsigned int *)0x040002bc=value;return FUN_0205c6ac();}
