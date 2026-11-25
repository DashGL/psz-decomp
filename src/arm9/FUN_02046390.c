// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct {unsigned short a[9];} R_02046390; extern const R_02046390 DAT_020ed5b4; void FUN_02046390(unsigned short *d,unsigned int i){R_02046390 r=DAT_020ed5b4;*d=r.a[i];}
