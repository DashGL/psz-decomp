// FUN_020c2e38 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020c2e38 @ 0x020c2e38
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return whether any of three state words is nonzero; signed-byte loop index.
 * Evidence: scratch/coverage-root/batch4/020c2e38.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int data_0211c8e4[];
int FUN_020c2e38(void) { signed char i;for(i=0;i<3;i++)if(data_0211c8e4[i])return 1;return 0; }
