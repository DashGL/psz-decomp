// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned short a[5];}H_0204d764;void FUN_0204d764(char*d,void*o,const unsigned short*s){*(void**)(d+4)=o;*(unsigned short*)(d+16)=s[0];*(unsigned short*)(d+18)=s[1];*(H_0204d764*)(d+20)=*(const H_0204d764*)(s+2);}
