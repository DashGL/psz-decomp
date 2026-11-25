// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned char a[4];} B_0204dbc4; int FUN_0204dbc4(const unsigned char*s,unsigned int v){B_0204dbc4 b=*(const B_0204dbc4*)s;return b.a[1]==(unsigned char)v;}
