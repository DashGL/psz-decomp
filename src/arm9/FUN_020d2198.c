// FUN_020d2198 @ 0x020d2198 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch47-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// Protocol helper adapters; preserve array indices, all forwarded inputs and scalar return values.
extern char *FUN_020d2110(const char *,const char *);
extern char DAT_020fe700[];
char *FUN_020d2198(const char *input,const char *key){char *p=FUN_020d2110(input,key);return p?p:DAT_020fe700;}
