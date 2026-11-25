// FUN_0204c11c @ 0x0204c11c (0xba, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204c11c @ 0x0204c11c (inventory code 0xba, thumb)
// check: 2.0/sp2p3 target=0xba candidate=0xba words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 71.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b71/0204c11c.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern char *FUN_0204daa8(unsigned int);extern void FUN_020345f0(Vector *,void *);extern int FUN_0204dab0(unsigned int);extern int FUN_0204e8bc(Vector *,unsigned int,int);extern void FUN_0204a8c4(unsigned int,unsigned int,Vector *,unsigned int);extern void FUN_0204a88c(unsigned int,unsigned int,unsigned int,int,int);
void FUN_0204c11c(char *s){Vector position=*(Vector *)(s+92);int enabled=1;if(*(int *)(s+172)==1){char *p=FUN_0204daa8(*(unsigned int *)(s+232));if(p){Vector v;FUN_020345f0(&v,p+156);position=v;}}if(*(unsigned int *)(s+228)&0x8000000){if(FUN_0204dab0(*(unsigned int *)(s+232)))enabled=0;else if(!FUN_0204e8bc(&position,*(unsigned int *)(s+232),0))position=*(Vector *)(s+92);}if(enabled)FUN_0204a8c4(*(unsigned int *)(s+156),*(unsigned int *)(s+160),&position,*(unsigned int *)(s+164));else FUN_0204a88c(*(unsigned int *)(s+156),*(unsigned int *)(s+160),*(unsigned int *)(s+164),0,0);}
