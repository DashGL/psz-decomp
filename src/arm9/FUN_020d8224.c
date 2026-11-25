// FUN_020d8224 @ 0x020d8224 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// USA ARM9 reconstruction from extracted module bytes; no inline assembly.
extern const char *FUN_020d8158(void *,const char *,const char *);
extern double FUN_02005340(const char *);
double FUN_020d8224(void *self,const char *key,double def){const char *s=FUN_020d8158(self,key,0);if(s)def=FUN_02005340(s);return def;}
