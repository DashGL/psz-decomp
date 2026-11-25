// FUN_020e2990 @ 0x020e2990 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int *D_0211de50[];
extern void FUN_020e316c(void);
extern int FUN_020c8a4c(void *,int,int,int,void (*)(void),int);
void FUN_020e2990(void *a0,int *a1){if(D_0211de50[3][6])FUN_020c8a4c(a0,*a1,0,0,FUN_020e316c,0);}
