// FUN_020c6378 @ 0x020c6378 (0x58, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// USA ARM instruction-derived protection/runtime helper.
extern void FUN_020c61ec(void *,const void *,unsigned int);extern int FUN_020c62d0(void *,const void *,void *,unsigned int);
int FUN_020c6378(const void *key,const void *source,void *dest,unsigned int length){unsigned int ctx[66];FUN_020c61ec(ctx,key,16);return FUN_020c62d0(ctx,source,dest,length)==-1 ? -1 : 0;}
