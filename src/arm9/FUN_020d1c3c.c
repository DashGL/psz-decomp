// FUN_020d1c3c @ 0x020d1c3c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int *FUN_020d1f70(void *,int);
extern int FUN_020d1f0c(int *,void *);
int FUN_020d1c3c(void *a0,int a1,void *a2){int *p=FUN_020d1f70(a0,a1);if(!p)return 0;p[2]=0;return FUN_020d1f0c(p,a2);}
