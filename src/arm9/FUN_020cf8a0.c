// FUN_020cf8a0 @ 0x020cf8a0 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// FUN_020cf8a0 — forward the original key to the owner's embedded lookup table.
extern int FUN_020c7290(void *,void *);
int FUN_020cf8a0(void **owner,void *key)
{
    return FUN_020c7290(*(void **)((char *)*owner+0x5c8),key);
}
