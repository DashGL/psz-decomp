// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x12, exact bytes and relocation targets; argument/return contract corrected.
// FUN_0207816c return ABI correction; ROM caller evidence in notes/reference/return-abi-mid-20261113/FUN_0207816c-proof.json
extern unsigned int FUN_02030d20(unsigned long long *,unsigned int);
unsigned int FUN_0207816c(unsigned long long **handle,unsigned int scale) { if(*handle) return FUN_02030d20(*handle,scale); return 0; }
