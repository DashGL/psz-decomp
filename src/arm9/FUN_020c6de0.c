// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
// flags: -O4,p
// USA dynamic-array and callback helpers; full ABI and extents in root batch240.
typedef struct {int count,capacity,stride,growth;void (*destroy)(void *);char *data;} Array;
extern void FUN_020c6d60(Array *,int),FUN_020c7bec(void *);
void FUN_020c6de0(Array *a){int i;for(i=0;i<a->count;i++)FUN_020c6d60(a,i);FUN_020c7bec(a->data);FUN_020c7bec(a);}
