// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned int a[8];} W_02047798;void *FUN_02047798(unsigned int *d,const unsigned int *s){*d=*s;*(W_02047798*)(d+1)=*(const W_02047798*)(s+1);return d;}
