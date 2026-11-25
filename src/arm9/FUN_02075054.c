// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern void *FUN_0207501c(void *,int);
int FUN_02075054(void *self,int handle) { if(FUN_0207501c(self,handle)==0) return 1; return 0; }
