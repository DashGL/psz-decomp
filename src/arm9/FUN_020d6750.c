// FUN_020d6750 @ 0x020d6750 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const char DAT_020ff988[];
extern int FUN_02066274(char *,const char *,int);
extern void FUN_020d6770(void *,char *);
void FUN_020d6750(void *self,int val){char buf[20];FUN_02066274(buf,DAT_020ff988,val);FUN_020d6770(self,buf);}
