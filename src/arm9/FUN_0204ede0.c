// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned char a[4];}B_0204ede0;extern void *FUN_0208555c(int);extern void FUN_02084638(void*);void FUN_0204ede0(int i,const unsigned char*s){B_0204ede0 b;FUN_0208555c(i);b=*(const B_0204ede0*)s;FUN_02084638(&b);}
