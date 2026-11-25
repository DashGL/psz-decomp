// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// flags: -O4,p
// USA dynamic-array and callback helpers; full ABI and extents in root batch240.
typedef struct {int count,capacity,stride,growth;void (*destroy)(void *);char *data;} Array;
extern void *FUN_020c6e10(Array *,int);
void *FUN_020c6fc8(Array *a,int (*predicate)(void *,void *),void *context){int i;for(i=a->count-1;i>=0;i--){void *p=FUN_020c6e10(a,i);if(!predicate(p,context))return p;}return 0;}
