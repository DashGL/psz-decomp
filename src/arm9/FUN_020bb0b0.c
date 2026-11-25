// FUN_020bb0b0 @ 0x020bb0b0 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// Concrete packet transport vtables and two-input methods reviewed in root batch264.
typedef void (*Method)(void *,void *);
void FUN_020bb0b0(void *self,void *packet){Method *v=*(Method **)self;v[4](self,packet);}
