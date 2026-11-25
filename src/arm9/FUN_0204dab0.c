// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern int FUN_020855bc(int);
int FUN_0204dab0(int index) { if(FUN_020855bc(index)==1) return 1; return 0; }
