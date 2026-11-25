// FUN_020d377c @ 0x020d377c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// Connection metadata, tick flag, hash and signature helpers; preserve scalar words and unsigned arithmetic.
extern const char DAT_020fea88[],DAT_020fea7c[],DAT_020fea28[];
extern void FUN_02000edc(const char *,const char *,const char *,unsigned int);
unsigned int FUN_020d377c(unsigned char *self){if(!self)FUN_02000edc(DAT_020fea88,DAT_020fea7c,DAT_020fea28,471);return *(unsigned int *)(self+64);}
