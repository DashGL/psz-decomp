// FUN_0206605c @ 0x0206605c (0x10, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// Generic lock-release veneer: forward owner, lock, opaque callback; mode zero.
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -noThumb
extern int FUN_02065fe8(unsigned int,void *,void *,int);
int FUN_0206605c(unsigned int owner,void *lock,void *callback)
{
    return FUN_02065fe8(owner,lock,callback,0);
}
