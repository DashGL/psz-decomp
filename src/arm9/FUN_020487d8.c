// FUN_020487d8 @ 0x020487d8 (0x7a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020487d8 @ 0x020487d8 (inventory code 0x7a, thumb)
// check: 2.0/sp2p3 target=0x7a candidate=0x7a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 47.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b47/020487d8.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern int FUN_0200a3a0(int,int);extern void FUN_0204bf88(void *);extern void FUN_02035408(Vector *,unsigned int,unsigned int,unsigned int);
void FUN_020487d8(char *s){unsigned int angle;Vector v;if(*(int *)(s+280))angle=32768;else angle=(unsigned short)FUN_0200a3a0((int)(*(unsigned int *)(s+272)<<16),3);*(short *)(s+108)=angle;FUN_0204bf88(s);*(unsigned int *)(s+260)=*(unsigned int *)(s+80);*(unsigned int *)(s+264)=*(unsigned int *)(s+260)<<1;*(int *)(s+268)=8;angle=*(unsigned int *)(s+264);FUN_02035408(&v,angle,angle,angle);*(Vector *)(s+80)=v;if(*(void **)(s+48))*(int *)(s+168)=*(int *)(s+268);}
