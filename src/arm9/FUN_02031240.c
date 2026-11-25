// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern int FUN_02040544(void *,void *,unsigned short *,unsigned int);
int FUN_02031240(char *self,void *position,unsigned short *heading,unsigned int index) { void *child=*(void **)(self+40); if(child) return FUN_02040544(child,position,heading,index); return 0; }
