// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020ba8bc return ABI correction; ROM caller evidence in notes/reference/return-abi-high-20261113/FUN_020ba8bc-proof.json
extern void *FUN_020ba7f4(unsigned int,int);
void *FUN_020ba8bc(unsigned int size,int alignment) { return FUN_020ba7f4(size,alignment); }
