// FUN_020d5d5c @ 0x020d5d5c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const char DAT_020feb3c[],DAT_0211cfc8[];
extern int FUN_020662b4(char *,int,const char *,const char *,int);
extern int FUN_020d5d34(const char *);
int FUN_020d5d5c(const char *s,int a1){char buf[64];if(!s){FUN_020662b4(buf,64,DAT_020feb3c,DAT_0211cfc8,a1);s=buf;}return FUN_020d5d34(s);}
