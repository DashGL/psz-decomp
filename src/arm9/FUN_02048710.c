// FUN_02048710 @ 0x02048710 (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048710 @ 0x02048710 (inventory code 0x9a, thumb)
// check: 2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 61.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b61/02048710.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern int FUN_02047440(void *);extern int FUN_0204770c(void *);extern void FUN_0206e728(void *,void *);extern void FUN_0206e738(void *,void *);extern void FUN_02035408(Vector *,unsigned int,unsigned int,unsigned int);
int FUN_02048710(char *s){int result=FUN_02047440(s);if(!result&&FUN_0204770c(s)){int value,base;if(*(void **)(s+48)&&*(unsigned short *)(s+276)){FUN_0206e728(*(void **)(s+48),(void *)0x020487b1);FUN_0206e738(*(void **)(s+48),s);}value=*(int *)(s+264);base=*(int *)(s+260);if(value>base){Vector v;int delta=(int)((unsigned int)value-(unsigned int)base);*(unsigned int *)(s+264)=(unsigned int)base+(unsigned int)(delta/2);value=*(int *)(s+264);FUN_02035408(&v,value,value,value);*(Vector *)(s+80)=v;}value=*(int *)(s+268);if(value<=32&&*(void **)(s+48)){if(value>=32)*(int *)(s+268)=31;*(int *)(s+168)=*(int *)(s+268);*(unsigned int *)(s+268)+=2;}}return result;}
