// Verified 2026-11-13: exact bytes and relocation targets; return ABI restored from consumed ROM results.
// FUN_0204daa8 return ABI correction; ROM caller evidence in notes/reference/return-abi-low-20261113/FUN_0204daa8-proof.json
extern void *FUN_0208555c(int);
void *FUN_0204daa8(int index) { return FUN_0208555c(index); }
