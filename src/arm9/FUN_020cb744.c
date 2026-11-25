// FUN_020cb744 @ 0x020cb744 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA owned-buffer and collection helpers; root batch242 retains ABI and extents.
extern void *FUN_020014f4(void *,const void *,unsigned int);
typedef struct{char *data;int capacity,length,consumed;} Buffer;
int FUN_020cb744(void *unused,Buffer *b){if(!b||!b->data||!b->consumed)return 0;b->length-=b->consumed;if(b->length)FUN_020014f4(b->data,b->data+b->consumed,b->length);b->data[b->length]=0;b->consumed=0;return 0;}
