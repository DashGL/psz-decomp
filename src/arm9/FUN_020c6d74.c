// FUN_020c6d74 @ 0x020c6d74 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// USA dynamic-array and callback helpers; full ABI and extents in root batch240.
typedef struct {int count,capacity,stride,growth;void (*destroy)(void *);char *data;} Array;
extern void *FUN_020c7bdc(void *,unsigned int);
void FUN_020c6d74(Array *a){a->capacity+=a->growth;a->data=FUN_020c7bdc(a->data,a->capacity*a->stride);}
