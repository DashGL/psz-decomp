// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern char *FUN_020beeb0(void *,unsigned int);
unsigned int FUN_020be570(void *table,unsigned int handle) { char *payload=FUN_020beeb0(table,handle); if(payload) return *(unsigned int *)(payload+8); return 0; }
