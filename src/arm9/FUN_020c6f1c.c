// FUN_020c6f1c @ 0x020c6f1c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// USA dynamic-array and callback helpers; full ABI and extents in root batch240.
typedef struct {int count,capacity,stride,growth;void (*destroy)(void *);char *data;} Array;
extern void FUN_02003914(void *,unsigned int,unsigned int,int (*)(const void *,const void *));
void FUN_020c6f1c(Array *a,int (*compare)(const void *,const void *)){FUN_02003914(a->data,a->count,a->stride,compare);}
