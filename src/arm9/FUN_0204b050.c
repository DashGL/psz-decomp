// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned short a[5];}H_0204b050;unsigned short *FUN_0204b050(unsigned short*d,const unsigned short*s){d[0]=s[0];d[1]=s[1];*(H_0204b050*)(d+2)=*(const H_0204b050*)(s+2);return d;}
