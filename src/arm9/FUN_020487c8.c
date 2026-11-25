// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern void FUN_0201d37c(int,unsigned int);
void FUN_020487c8(unsigned char *self,unsigned int value) { int handle=*(int *)(self+28); if(handle) FUN_0201d37c(handle,value); }
