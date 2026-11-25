// FUN_020aec44 @ 0x020aec44 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020aec44 @ 0x020aec44 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Configure display layout and advance packed storage offset.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aec44.txt.
 */
typedef struct {int v[8];} Desc;extern Desc UNK_020f55c4;extern int FUN_020c38c8(void *,int,int);extern void FUN_020c35d4(void *,void *),FUN_020c38f0(void *,int);void FUN_020aec44(char *s,void *component,int x,int y,int width,int height){Desc d=UNK_020f55c4;int a,b;d.v[0]=*(int *)(s+128)+*(int *)(s+132);d.v[1]=width;d.v[2]=height;d.v[3]=x;d.v[4]=y;a=FUN_020c38c8(component,width,x);b=FUN_020c38c8(component,height,y);*(int *)(s+132)+=a*b;FUN_020c35d4(component,&d);FUN_020c38f0(component,0);}
