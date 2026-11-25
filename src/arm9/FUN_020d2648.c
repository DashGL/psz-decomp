// FUN_020d2648 @ 0x020d2648 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// Protocol helper adapters; preserve array indices, all forwarded inputs and scalar return values.
extern unsigned int DAT_0211d094[];
extern unsigned int *FUN_020c6e10(void *,int);
unsigned int FUN_020d2648(unsigned char *self,int index){if(!self)self=(unsigned char *)DAT_0211d094[4];if(!self)return (unsigned int)index;return *FUN_020c6e10(*(void **)(self+32),index);}
