// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x8, exact bytes and relocation targets; argument/return contract corrected.
// Full 8-byte veneer; unsigned descriptor and readiness result follow actual c7694/c75b4 contract.
extern unsigned int FUN_020c7694(unsigned int);
unsigned int FUN_020d21ac(unsigned int descriptor) { return FUN_020c7694(descriptor); }
