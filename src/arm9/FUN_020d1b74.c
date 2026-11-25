// FUN_020d1b74 @ 0x020d1b74 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// Protocol helper adapters; preserve array indices, all forwarded inputs and scalar return values.
extern void FUN_020d183c(void *,const char *,unsigned int);
void FUN_020d1b74(void **self,const char *message){FUN_020d183c(*self,message,256);}
