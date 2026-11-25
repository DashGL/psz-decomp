// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// flags: -O4,p
// USA dynamic-array and callback helpers; full ABI and extents in root batch240.
typedef struct {int count,capacity,stride,growth;void (*destroy)(void *);char *data;} Array;
extern int FUN_020c6e0c(Array *);extern void FUN_020c6eec(Array *,int);
void FUN_020c6ff4(Array *a){int i;for(i=FUN_020c6e0c(a)-1;i>=0;i--)FUN_020c6eec(a,i);}
