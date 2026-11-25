// Verified 2026-11-13: exact bytes and relocation targets; return ABI restored from consumed ROM results.
// FUN_02030ae4 return ABI correction; ROM caller evidence in notes/reference/return-abi-low-20261113/FUN_02030ae4-proof.json
char *FUN_02030ae4(char *p) { *(int *)(p+0)=0; *(int *)(p+4)=0; return p; }
