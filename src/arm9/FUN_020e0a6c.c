// FUN_020e0a6c @ 0x020e0a6c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const char DAT_02101700[];
extern int FUN_020662b4(char *,int,const char *,...);
extern unsigned int FUN_02003c70(const char *);
unsigned int FUN_020e0a6c(int a0,int a1,char *buf,int a3){FUN_020662b4(buf,4096,DAT_02101700,a3,a0,a3,a1);return FUN_02003c70(buf);}
