// FUN_0209af04 @ 0x0209af04 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_0209af04 @ 0x0209af04 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Flatten valid category and index using preceding counts.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209af04.txt.
 */
int FUN_0209af04(char *self,int category,int index){if(category>=0 && category<2 && index>=0 && index<*(int *)(self+16+4*category)){int sum=0,i=0;for(;i<category;i++)sum+=*(int *)(self+16+4*i);return sum+index;}return -1;}
