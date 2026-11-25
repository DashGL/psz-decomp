// FUN_020727b4 @ 0x020727b4 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020727b4 @ 0x020727b4 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set indexed record mode zero, value and dirty bit one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020727b4.txt.
 */
void FUN_020727b4(char *self,int index,unsigned int value) { if(index>=0 && index<*(int *)(self+172)) { signed char *p=*(signed char **)(self+168)+52*index; *(unsigned int *)(p+36)=0; *(unsigned int *)(p+40)=value; p[18]|=2; } }
