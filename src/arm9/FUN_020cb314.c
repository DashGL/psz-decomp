// FUN_020cb314 @ 0x020cb314 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// String append adapters and signed remainder; explicit direct-call register arguments retained.
extern unsigned int FUN_02003c70(const char *);
extern int FUN_020cb254(void *,void *,const char *,unsigned int);
int FUN_020cb314(void *self,void *buffer,const char *text){unsigned int length=FUN_02003c70(text);return FUN_020cb254(self,buffer,text,length);}
