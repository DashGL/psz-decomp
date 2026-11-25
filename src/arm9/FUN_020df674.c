// FUN_020df674 @ 0x020df674 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern char *D_0211dbfc;
extern void FUN_0206719c(void *);
extern void FUN_02067220(void *);
int FUN_020df674(void){int v;char *p;FUN_0206719c(D_0211dbfc+0x11dc);p=D_0211dbfc;v=*(int *)(p+0x1000);FUN_02067220(p+0x11dc);return v;}
