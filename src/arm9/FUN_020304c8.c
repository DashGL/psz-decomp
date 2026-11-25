// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
// flags: -O4,p
extern void FUN_02044c34(void *,void *,unsigned int);
void FUN_020304c8(char *self,void *vector,unsigned int heading) { void *child=*(void **)(self+16); if(child) FUN_02044c34(child,vector,heading); }
