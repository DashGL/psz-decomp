// FUN_0207278c @ 0x0207278c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_0207278c @ 0x0207278c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set indexed record halfword and dirty bit one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207278c.txt.
 */
void FUN_0207278c(char *self,int index,unsigned int value) { if(index>=0 && index<*(int *)(self+172)) { signed char *p=*(signed char **)(self+168)+52*index; *(unsigned short *)(p+16)=value; p[18]|=2; } }
