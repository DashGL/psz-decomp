// FUN_020d1b58 @ 0x020d1b58 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// Protocol helper adapters; preserve array indices, all forwarded inputs and scalar return values.
extern void FUN_020d183c(void *,const char *,unsigned int);
void FUN_020d1b58(unsigned char **self,unsigned int code,const char *message){unsigned char *p=*self;FUN_020d183c(p,message,256);*(unsigned int *)(p+0x5b8)=code;}
