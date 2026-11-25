// FUN_020c2e14 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_020c2e14 @ 0x020c2e14
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return true when valid signed mode [0,2] has zero state.
 * Evidence: scratch/coverage-root/batch4/020c2e14.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern unsigned int D_0211c8e4[];
int FUN_020c2e14(int mode) { if(mode<0 || mode>2)return 0;if(!D_0211c8e4[mode])return 1;return 0; }
