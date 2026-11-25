// FUN_020c0f9c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020c0f9c @ 0x020c0f9c
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Require input record validity, then find first of 64 valid global 12-byte records whose comparison helper returns one.
 * Evidence: scratch/coverage-root/batch8/020c0f9c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern char data_0211b444[];
extern int FUN_020dd6c4(void *),FUN_020dd920(void *,void *);
int FUN_020c0f9c(void *record) { if(FUN_020dd6c4(record)==1) { int i;for(i=0;i<64;i++) { char *candidate=data_0211b444+i*12;if(FUN_020dd6c4(candidate)==1 && FUN_020dd920(record,candidate)==1)return i; } }return -1; }
