// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_0204db60 @ 0x0204db60
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int FUN_0204db98(void *,int); extern int FUN_0204dbc4(void *,int); extern int FUN_0204daec(void *);
int FUN_0204db60(char *s) { if(FUN_0204db98(s,0) && !FUN_0204dbc4(s,17) && FUN_0204daec(s) && !((*(int *)(s+8)&0x1000)>>12)) return 1; return 0; }
