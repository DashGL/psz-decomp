// FUN_020c7428 @ 0x020c7428 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// USA state and record wrappers; pointer reloads and scalar returns retained.
extern void FUN_0202d764(void *);
extern void FUN_0202d770(void *,const void *,unsigned int);
extern void FUN_0202d77c(void *,void *);
extern unsigned int FUN_020c73ec(const void *,unsigned int);
unsigned int FUN_020c7428(const void *input,unsigned int length,unsigned int output){struct{unsigned int digest[4];unsigned int context[22];} local;FUN_0202d764(local.context);FUN_0202d770(local.context,input,length);FUN_0202d77c(local.digest,local.context);return FUN_020c73ec(local.digest,output);}
