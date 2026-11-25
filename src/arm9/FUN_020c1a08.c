// FUN_020c1a08 @ 0x020c1a08 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c1a08 @ 0x020c1a08
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset and reopen indexed audio context, refresh subsystem then store resulting context index.
 * Evidence: scratch/coverage-root/batch21/020c1a08.txt.
 */
extern void FUN_020c1e64(void *),FUN_020c1b30(unsigned int),FUN_0200fe0c(void *),FUN_02010130(int,void *);
extern int FUN_0200e834(void *,const void *,void *,int);
extern unsigned int FUN_0200f1f4(void *);
void FUN_020c1a08(const void *path,unsigned int index){unsigned char *self=*(unsigned char **)0x0211c85c;unsigned int result;FUN_020c1e64(self);*(unsigned int *)(self+0x10c)=0;FUN_020c1b30(index);self=*(unsigned char **)0x0211c85c;FUN_0200e834(*(unsigned char **)(self+0xb4)+0x94*index,path,(*(void ***)(self+20))[index],0);FUN_0200fe0c((*(void ***)(*(unsigned char **)0x0211c85c+20))[index]);FUN_02010130(10,(*(void ***)(*(unsigned char **)0x0211c85c+20))[index]);result=FUN_0200f1f4((*(void ***)(*(unsigned char **)0x0211c85c+20))[index]);(*(unsigned int **)(*(unsigned char **)0x0211c85c+28))[index]=result;}
