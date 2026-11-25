// Verified 2026-11-13: exact bytes and relocation targets; return ABI restored from consumed ROM results.
// FUN_02046c70 return ABI correction; ROM caller evidence in notes/reference/return-abi-low-20261113/FUN_02046c70-proof.json
// flags: -O4,s
extern void FUN_02041510(void *); extern void *FUN_02046bf8(void *);
void *FUN_02046c70(unsigned int a,unsigned int b,int index) { unsigned short temp[8]; FUN_02041510(temp); temp[0]=a; (temp+2)[index]=b; return FUN_02046bf8(temp); }
