// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// Typed subrecord copy evidence: notes/sessions/resume-low-aggregate-copies-2026-11-12.md
// flags: -O4,s
typedef struct{unsigned char a[4];}B_0204c5ec;extern int FUN_0203a1a8(void*,int);int FUN_0204c5ec(char*s){B_0204c5ec b;int r=0;b=*(const B_0204c5ec*)(s+264);if(FUN_0203a1a8(&b,16)&&*(unsigned int*)(s+280))r=1;return r;}
