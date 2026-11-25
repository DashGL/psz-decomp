// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern void FUN_02080bb0(const unsigned char *,unsigned char *);
void FUN_02080d34(const unsigned char *source,unsigned char *dest) { FUN_02080bb0(source,dest); }
