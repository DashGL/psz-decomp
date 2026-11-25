// FUN_0204a34c @ 0x0204a34c (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a34c @ 0x0204a34c (inventory code 0x74, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 49.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b49/0204a34c.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern int FUN_02047440(void *);extern void *FUN_0204a580(void);extern void FUN_0204a9bc(void *,short *,short *);extern void FUN_0203807c(void *,unsigned int,unsigned int,unsigned int);
int FUN_0204a34c(char *s){int result=FUN_02047440(s);if(!result){char *m=*(char **)0x02108c84;if(m){char *node=*(char **)(m+64+4**(int *)(m+100));if(node){short pair[2];Vector v;pair[1]=0;pair[0]=0;FUN_0204a9bc(FUN_0204a580(),&pair[1],&pair[0]);v=*(Vector *)(node+24);v.x+=(int)(0u-((unsigned int)(int)pair[1]<<13))>>12;v.z+=(int)(0u-((unsigned int)(int)pair[0]<<13))>>12;FUN_0203807c(*(void **)(s+48),v.x,v.y,v.z);}}}return result;}
