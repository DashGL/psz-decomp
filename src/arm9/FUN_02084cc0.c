// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_02084cc0 return ABI correction; ROM caller evidence in notes/reference/return-abi-mid-20261113/FUN_02084cc0-proof.json
extern unsigned int FUN_0208546c(void);
unsigned int FUN_02084cc0(void *receiver) { return FUN_0208546c(); }
