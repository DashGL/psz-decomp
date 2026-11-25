// FUN_020e29bc @ 0x020e29bc (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern void FUN_020e32ac(void *,char *);
extern int FUN_020c8a4c(void *,int,int,int,void (*)(void *,char *),int);
int FUN_020e29bc(void *a0,int *a1,int a2){return FUN_020c8a4c(a0,*a1,0,0,FUN_020e32ac,0);}
