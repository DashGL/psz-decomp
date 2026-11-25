// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned short a[4];} H_0205191c;typedef struct{unsigned char a[4];} B_0205191c;void *FUN_0205191c(char *d,const char *s){*(H_0205191c*)d=*(const H_0205191c*)s;*(B_0205191c*)(d+8)=*(const B_0205191c*)(s+8);return d;}
