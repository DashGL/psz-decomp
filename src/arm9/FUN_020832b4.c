// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// FUN_020832b4 return ABI correction; ROM caller evidence in notes/reference/return-abi-mid-20261113/FUN_020832b4-proof.json
// flags: -O4,p
extern void *FUN_020780f4(void);
extern unsigned int FUN_0207816c(void *,unsigned int);
unsigned int FUN_020832b4(unsigned int scale) { void *state=FUN_020780f4(); return FUN_0207816c(state,scale); }
