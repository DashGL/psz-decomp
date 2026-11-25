// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x16, exact bytes and relocation targets; argument/return contract corrected.
// Input ABI corrected from actual caller and target dataflow.
extern int FUN_020363b8(void *);
unsigned int FUN_020375d8(void *actor) { if(FUN_020363b8(actor)==1) return 384; return 256; }
