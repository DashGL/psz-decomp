// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern unsigned int FUN_02098d84(const unsigned char *);
int FUN_020b0244(const unsigned char *key) { if(FUN_02098d84(key)==~0u) return 1; return 0; }
