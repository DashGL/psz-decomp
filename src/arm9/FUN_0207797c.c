// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern void FUN_02077984(unsigned char *,const unsigned char *);
void FUN_0207797c(unsigned char *dest,const unsigned char *source) { FUN_02077984(dest,source); }
