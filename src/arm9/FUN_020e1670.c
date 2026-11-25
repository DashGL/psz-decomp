// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
struct Inner {
    char pad1[0x46c];
    int f46c[1];
    char pad2[0x648 - 0x470];
    unsigned char f648[1];
};
extern struct Inner *D_0211dcbc;
extern int FUN_020e15cc(int);
extern void FUN_020e1618(int);
extern int FUN_020e1664(void);

int FUN_020e1670(int a, int b) {
    unsigned char i = 0;
    for (; i < b; i++) {
        if (a == D_0211dcbc->f46c[i]) {
            break;
        }
    }
    if (i >= b) {
        return 0;
    }
    FUN_020e1618(FUN_020e15cc(D_0211dcbc->f648[i]));
    return FUN_020e1664();
}
