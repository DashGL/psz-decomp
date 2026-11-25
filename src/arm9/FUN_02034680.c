// Verified 2026-11-13: exact bytes and relocation targets; return ABI restored from consumed ROM results.
// FUN_02034680 return ABI correction; ROM caller evidence in notes/reference/return-abi-low-20261113/FUN_02034680-proof.json
int *FUN_02034680(int *a,int *b) { a[0]=b[0]; a[1]=b[1]; a[2]=b[2]; return a; }
