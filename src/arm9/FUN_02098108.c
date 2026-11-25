// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// FUN_02098108 return ABI correction; ROM caller evidence in notes/reference/return-abi-high-20261113/FUN_02098108-proof.json
extern int FUN_020980dc(char *,int,void *);
int FUN_02098108(char *self,int index,void *out) { return FUN_020980dc(self,index,out); }
