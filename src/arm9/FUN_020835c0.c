// FUN_020835c0 @ 0x020835c0 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020835c0 @ 0x020835c0 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build indexed pointer map from bounded collection.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020835c0.txt.
 */
extern signed char *FUN_02083534(void *,unsigned int);void *FUN_020835c0(void **s,char *list){int i;unsigned int count,k;for(i=0;i<20;i++)s[i]=0;count=*(unsigned int *)(list+80);if(count>=20)count=19;for(k=0;k<count;k++){signed char *p=FUN_02083534(list,k);if(p && p[1]>=0 && p[1]<20)s[p[1]]=p;}return s;}
