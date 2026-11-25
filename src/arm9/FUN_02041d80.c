// FUN_02041d80 @ 0x02041d80 (0xe0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041d80 @ 0x02041d80 (inventory code 0xda, thumb)
// check: 2.0/sp2p3 target=0xe0 candidate=0xe0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 74.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b74/02041d80.txt.
 */
typedef struct{unsigned int w[12];} M43;typedef struct{unsigned int w[9];} M33;extern void *FUN_0206e4d0(void *,void *,unsigned int,unsigned int,unsigned int);extern void FUN_0205aa80(void *);extern int FUN_0201cb44(void *,M43 *,M33 *,unsigned int);extern void *FUN_020ba8bc(unsigned int,unsigned int);
void *FUN_02041d80(char *s,void *resource,unsigned int arg2,unsigned int value,unsigned short id,unsigned int arg5){M43 a;M33 b;int i;FUN_0206e4d0(s,resource,arg2,id,arg5);*(unsigned int *)s=0x020f8e08;*(int *)(s+224)=4096;s[228]=0;s[229]=0;*(short *)(s+230)=0;*(int *)(s+236)=0;*(int *)(s+240)=0;*(int *)(s+244)=0;*(int *)(s+248)=0;*(int *)(s+252)=0;*(unsigned int *)(s+232)=value;*(int *)(s+256)=0;*(int *)(s+260)=0;*(int *)(s+264)=0;FUN_0205aa80(s+268);if(FUN_0201cb44(s+36,&a,&b,0)==1){s[229]=*(unsigned char *)(*(char **)(s+40)+65);*(void **)(s+244)=FUN_020ba8bc(48*(*(unsigned char *)(s+229)),16);*(void **)(s+248)=FUN_020ba8bc(36*(*(unsigned char *)(s+229)),16);*(unsigned int *)(s+24)|=2;}for(i=0;i<5;i++)*(unsigned int *)(s+204+4*i)=0;return s;}
