// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets; argument/return contract corrected.
// flags: -noThumb
extern void FUN_020015ec(unsigned int, unsigned int, unsigned int);
unsigned int FUN_02001540(unsigned int dest, unsigned int value, unsigned int count) { FUN_020015ec(dest,value,count); return dest; }
