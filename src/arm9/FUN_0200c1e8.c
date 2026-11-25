// FUN_0200c1e8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA cleanup and descriptor adapters; ABI/extent evidence in root batch253.
typedef struct{void *object;unsigned pad;void (*destroy)(void *,int);} Entry;void FUN_0200c1e8(Entry *p){void *obj=p->object;void (*fn)(void *,int);if(obj && (fn=p->destroy)!=0)fn(obj,-1);}
