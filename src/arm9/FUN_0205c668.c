// FUN_0205c668 @ 0x0205c668 (0x44, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205c668 @ 0x0205c668 (inventory code 0x40, arm)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 218.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b218/0205c668.txt.
 */
void FUN_0205c668(int value){volatile unsigned char *p=(volatile unsigned char *)0x040002b0;if(value>0){*(volatile unsigned short *)p=1;*(volatile unsigned int *)(p+8)=0;*(volatile unsigned int *)(p+12)=value;}else{*(volatile unsigned short *)p=1;*(volatile unsigned int *)(p+8)=0;*(volatile unsigned int *)(p+12)=0;}}
