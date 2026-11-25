// FUN_020d2a98 @ 0x020d2a98 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch42-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// USA owned-buffer and collection helpers; root batch242 retains ABI and extents.
extern void *FUN_020c7bcc(unsigned int);typedef struct{void *data;unsigned int size;} Buffer;int FUN_020d2a98(Buffer *p,unsigned int size){p->data=FUN_020c7bcc(size);if(!p->data)return 0;p->size=size;return 1;}
