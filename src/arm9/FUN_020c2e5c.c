// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_020c2e5c @ 0x020c2e5c
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_0211c8e4[];
/* USA ROM reconstruction, 2026-11-04.
 * For each of three channel state words, invoke mode-specific helper for values1/2; signed-byte loop counter.
 * Evidence: scratch/coverage-root/batch9/020c2e5c.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_020c2ec8(int),FUN_020c2f30(int);
void FUN_020c2e5c(void) { signed char i;for(i=0;i<3;i++)switch(D_0211c8e4[i]) { case 1:FUN_020c2ec8(i);break;case 2:FUN_020c2f30(i);break; } }
