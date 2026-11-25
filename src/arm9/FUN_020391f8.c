// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern int FUN_02038700(char *,int,int);
void FUN_020391f8(char *self,int value,int mode) { FUN_02038700(self,value,mode); }
