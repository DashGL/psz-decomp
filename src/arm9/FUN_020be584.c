// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020be584 return ABI correction; ROM caller evidence in notes/reference/return-abi-high-20261113/FUN_020be584-proof.json
extern char *FUN_020bef14(void *,int,int);
char *FUN_020be584(void *table,int handle,int index) { return FUN_020bef14(table,handle,index); }
