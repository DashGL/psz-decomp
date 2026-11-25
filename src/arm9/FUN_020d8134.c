// FUN_020d8134 @ 0x020d8134 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const char DAT_020fffc8[];
extern int FUN_02066274(char *,const char *,int);
extern int FUN_020d810c(void *,int,char *);
int FUN_020d8134(void *self,int a1,int a2){char buf[20];FUN_02066274(buf,DAT_020fffc8,a2);return FUN_020d810c(self,a1,buf);}
