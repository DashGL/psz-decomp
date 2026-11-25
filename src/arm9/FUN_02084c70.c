// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_02084c70 return ABI correction; ROM caller evidence in notes/reference/return-abi-mid-20261113/FUN_02084c70-proof.json
extern int FUN_02073198(void);
int FUN_02084c70(void *receiver) { return FUN_02073198(); }
