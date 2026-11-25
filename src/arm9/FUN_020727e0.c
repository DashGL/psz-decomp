// FUN_020727e0 @ 0x020727e0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020727e0 @ 0x020727e0 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set indexed record state, payload and halfword parameter.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020727e0.txt.
 */
void FUN_020727e0(char *self,int index,unsigned int a,unsigned int b,unsigned short c) { if(index>=0 && index<*(int *)(self+172)) { char *p=*(char **)(self+168)+52*index; *(int *)(p+36)=1; *(unsigned int *)(p+40)=a; *(unsigned int *)(p+44)=b; *(unsigned short *)(p+48)=c; p[18]=((signed char *)p)[18]|2; } }
