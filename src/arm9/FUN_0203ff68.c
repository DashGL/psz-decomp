// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern char *FUN_0203ff0c(void *,int);
void *FUN_0203ff68(void *self,int key) { char *record=FUN_0203ff0c(self,key); if(record) return *(void **)(record+8); return 0; }
