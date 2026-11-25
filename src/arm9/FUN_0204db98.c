// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned char a[4];} B_0204db98; int FUN_0204db98(const unsigned char*s,unsigned int v){B_0204db98 b=*(const B_0204db98*)s;return b.a[0]==(unsigned char)v;}
