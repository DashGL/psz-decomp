// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -O4,p
struct ElemDc1cc {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
};
struct SDc1cc {
    unsigned char pad0[0x444];
    struct ElemDc1cc arr[0x232];
    unsigned char pad1[2];
    unsigned char fd0e;
    unsigned char pad2[3];
    unsigned char fd12;
    unsigned char fd13;
};
extern void FUN_020dad18(int);
extern int FUN_0202dd84(void);

int FUN_020dc1cc(struct SDc1cc *a, int b) {
    unsigned char i;
    unsigned char n;
    if (b == 0x11) {
        return b;
    }
    i = 0;
    n = a->fd12;
    for (; i < n; i++) {
        if (a->arr[i].f0 == 0) {
            break;
        }
    }
    if (b == 6) {
        if (n == i) {
            if (i == 0) {
                FUN_020dad18(5);
            } else {
                FUN_020dad18(6);
            }
            return 0x11;
        }
    } else {
        if (n == 0) {
            return b;
        }
        if (n == i) {
            return b;
        }
        if (a->arr[i].f2 < 0x14) {
            return b;
        }
    }
    a->fd13 = i;
    if (FUN_0202dd84() != 1) {
        a->fd0e = b;
        b = 7;
    }
    return b;
}
