// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// FUN_02047538 @ 0x02047538 (inventory code 0xa4, thumb)
// check: 2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 65.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b65/02047538.txt.
 */
extern char G_020ED83C[]; extern char G_02108C84[];
typedef struct{unsigned int x,y,z;} Vector;extern int FUN_02047440(void *);extern void *FUN_0204a580(void);extern void FUN_0204a9bc(void *,short *,short *);extern void FUN_0203807c(void *,unsigned int,unsigned int,unsigned int);extern void FUN_0205abac(void *,int,int);
int FUN_02047538(char *s){int result=FUN_02047440(s);if(!result){char *m=*(char **)G_02108C84;if(m){char *p=*(char **)(m+64+4**(int *)(m+100));if(p){short pair[2];Vector v;char *obj;unsigned int angle;pair[1]=0;pair[0]=0;FUN_0204a9bc(FUN_0204a580(),&pair[1],&pair[0]);v=*(Vector *)(p+24);v.x+=(int)((unsigned int)(int)pair[1]*0xffffc568)>>12;v.z+=(int)((unsigned int)(int)pair[0]*0xffffc568)>>12;FUN_0203807c(*(void **)(s+48),v.x,v.y-10000,v.z);obj=*(char **)(s+48);*(unsigned short *)(obj+180)=*(unsigned short *)(p+130);angle=*(unsigned short *)(obj+180)>>4;FUN_0205abac(obj+144,((short *)G_020ED83C)[2*angle],((short *)G_020ED83C)[2*angle+1]);}}}return result;}
