// FUN_020c1f84 @ 0x020c1f84 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch51-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// Concrete packet transport vtables and two-input methods reviewed in root batch264.
typedef void (*Method)(void *,void *);
void FUN_020c1f84(void *self,void *packet){Method *v=*(Method **)self;v[4](self,packet);}
