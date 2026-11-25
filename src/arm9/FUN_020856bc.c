// FUN_020856bc @ 0x020856bc (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020856bc @ 0x020856bc (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return active player object for requested category.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020856bc.txt.
 */
void *FUN_020856bc(int index){char *g=*(char **)0x0211a52c;if(g && index>=0 && index<4){char *p=g+148*index;if(((unsigned char *)p)[148]==3 && ((unsigned char *)p)[149]!=1)return *(void **)(p+140);}return 0;}
