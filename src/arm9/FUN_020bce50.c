// FUN_020bce50 @ 0x020bce50 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// Concrete packet transport vtables and two-input methods reviewed in root batch264.
typedef void (*Method)(void *,void *);
extern void *UNK_0211b3b8;
void FUN_020bce50(void *packet){void *self=UNK_0211b3b8;Method *v=*(Method **)self;v[5](self,packet);}
