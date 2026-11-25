// FUN_020defb8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// USA allocation/state adapters; full ABI and extents in root batch245.
extern char DAT_021005ac[];typedef struct{char *base,*cursor,*end;unsigned int size;} Buffer;int FUN_020defb8(char *s,Buffer *b,unsigned int size){void *(*allocate)(const char *,unsigned int)=*(void *(**)(const char *,unsigned int))(s+4112);if(!size)return 0;b->base=allocate(DAT_021005ac,size);if(!b->base)return 0;b->cursor=b->base;b->size=size;b->end=b->base+size;return 1;}
