// FUN_020cf87c @ 0x020cf87c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020cf7a8(char **,int,int *);
extern void FUN_020c7290(int,int);
void FUN_020cf87c(char **self,int a1){int tmp;char *p=*self;if(FUN_020cf7a8(self,a1,&tmp))FUN_020c7290(*(int *)(p+0x5c8),tmp);}
