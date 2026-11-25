// FUN_overlay_12__0211eb48 @ 0x0211eb48 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 8-byte block cipher loop over buffer, 38-byte code extent before 2-byte alignment.
extern void FUN_overlay_12__0211e640(void *,void *,void *);
void FUN_overlay_12__0211eb48(void *ctx,unsigned char *buf,int len){int blocks=len/8,i;for(i=0;i<blocks;buf+=8,i++)FUN_overlay_12__0211e640(ctx,buf,buf+4);}
