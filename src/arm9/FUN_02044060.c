// FUN_02044060 @ 0x02044060 (0xba, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044060 @ 0x02044060 (inventory code 0xba, thumb)
// check: 2.0/sp2p3 target=0xba candidate=0xba words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 70.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b70/02044060.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern void FUN_02035408(Vector *,unsigned int,unsigned int,unsigned int);extern void FUN_020426d8(void *,Vector *);
void FUN_02044060(char *s){char *data=*(char **)(s+20);int i;*(int *)(s+156)=*(int *)(data+12);for(i=0;i<*(int *)(s+156);i++){char *src=*(char **)(data+8)+20*i,*dst=*(char **)(s+152)+112*i;unsigned int scale=*(unsigned int *)(**(char ***)(s+20)+24);if(scale!=4096){Vector v;FUN_02035408(&v,scale,scale,scale);*(Vector *)(s+76)=v;FUN_020426d8(*(void **)dst,(Vector *)(s+76));}switch(*(signed char *)(src+2)){case 0:{Vector v;*(int *)(dst+4)=0;FUN_02035408(&v,*(unsigned int *)(src+8),*(unsigned int *)(src+12),*(unsigned int *)(src+16));*(Vector *)(dst+16)=v;*(unsigned short *)(dst+66)=*(unsigned short *)(src+6);break;}case 1:*(int *)(dst+4)=1;break;case 2:*(int *)(dst+4)=2;*(int *)(dst+8)=*(signed char *)(src+3);*(int *)(dst+12)=*(signed char *)(src+4);break;}}}
