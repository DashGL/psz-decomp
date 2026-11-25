// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_02066d30 @ 0x02066d30, full body and literal extent 0x28, ARM.
// flags: -O4,s -noThumb
// Inventory code ends at 0x02066d54; its referenced pool word is at that address.
// A distinct unexported function starts at 0x02066d58 with its own push,
// calls 0x020683c0, and then loops calling 0x02068738. It is not this function.
// The ROM loads base 0x0211817c then accesses its word at +0x30.
// Exchange the stored callback word while preserving/restoring interrupt state.
extern unsigned int FUN_020683d4(void);
extern unsigned int FUN_020683e8(unsigned int);
extern unsigned int DAT_0211817c[];
unsigned int FUN_02066d30(unsigned int callback) {
    unsigned int mask = FUN_020683d4();
    unsigned int old = DAT_0211817c[12];
    DAT_0211817c[12] = callback;
    FUN_020683e8(mask);
    return old;
}
