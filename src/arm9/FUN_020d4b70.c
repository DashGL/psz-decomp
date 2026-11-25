// FUN_020d4b70 @ 0x020d4b70 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern int FUN_020d4698(void *,const void *,int);
extern int FUN_020d48fc(void *,const void *,int);
int FUN_020d4b70(void *self,const void *buf,int len,int mode){if(mode)return FUN_020d4698(self,buf,len);return FUN_020d48fc(self,buf,len);}
