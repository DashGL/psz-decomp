// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned short a[18];}H_020381f4;typedef struct{unsigned char a[8];}B_020381f4;typedef struct{unsigned int a[14];}W_020381f4;void *FUN_020381f4(char*d,const char*s){*(H_020381f4*)d=*(const H_020381f4*)s;*(B_020381f4*)(d+36)=*(const B_020381f4*)(s+36);*(W_020381f4*)(d+44)=*(const W_020381f4*)(s+44);return d;}
