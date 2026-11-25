// Verified 2026-11-13: exact bytes and relocation targets; return ABI restored from consumed ROM results.
// Proven count return: e25a0 explicitly returns the count; aef80 stores it.
extern int FUN_020e25a0(char *, int);
int FUN_020c10ec(void) { return FUN_020e25a0((char *)34714692, 64); }
