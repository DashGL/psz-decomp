// FUN_020c472c @ 0x020c472c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020c472c @ 0x020c472c
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check eight-byte fixed header, then compare self word +4 with input word +8; return 1 for header mismatch, 2 for value mismatch.
 * Evidence: scratch/coverage-root/batch5/020c472c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern int FUN_02003f38(const void *,const void *,unsigned int);
int FUN_020c472c(unsigned int *self,unsigned int *input) { if(FUN_02003f38((void *)0x020f5c44,input,8))return 1;if(self[1]!=input[2])return 2;return 0; }
