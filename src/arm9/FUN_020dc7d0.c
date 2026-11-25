// FUN_020dc7d0 @ 0x020dc7d0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch56-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA encoded identity operations; helper return values retained.
extern void FUN_020577bc(void *);
extern void FUN_020577fc(void *,const void *,unsigned int);
extern void FUN_020578c4(void *,void *);
extern void FUN_02065774(const void *,unsigned int,unsigned int);
void FUN_020dc7d0(const void *input,unsigned int output){struct{unsigned char digest[20];unsigned int context[22];} local;FUN_020577bc(local.context);FUN_020577fc(local.context,input,24);FUN_020578c4(local.digest,local.context);FUN_02065774(local.digest+3,output,13);}
