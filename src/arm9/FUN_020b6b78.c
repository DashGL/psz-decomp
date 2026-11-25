// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,s
extern void *FUN_02084778(int, int);

struct B6 {
    unsigned char b[6];
};

struct B14 {
    unsigned char b[14];
};

int FUN_020b6b78(int *a0, int *a1, int *a2, int a3) {
    struct B14 sp0a;
    struct B6 sp04;
    int ret = 0;
    int r4 = -1;
    int r1 = -1;
    int r5 = 0;
    switch (a3) {
    case 0x13:
        r4 = 0;
        r1 = 0;
        break;
    case 0x14:
        r4 = 0;
        r1 = 0;
        r5 = 1;
        break;
    case 0x15:
        r4 = 1;
        r1 = 1;
        break;
    case 0x16:
        r4 = 1;
        r1 = 1;
        r5 = 1;
        break;
    case 0x17:
        r4 = 2;
        r1 = 2;
        break;
    case 0x18:
        r4 = 2;
        r1 = 2;
        r5 = 1;
        break;
    case 0x19:
        r4 = 3;
        r1 = 2;
        break;
    case 0x1a:
        r4 = 3;
        r1 = 2;
        r5 = 1;
        break;
    case 0x1b:
        r4 = 4;
        r1 = 3;
        break;
    case 0x1c:
        r4 = 4;
        r1 = 3;
        r5 = 1;
        break;
    case 0x20:
        break;
    }
    if (r4 != -1) {
        sp0a = *(struct B14 *)FUN_02084778(r1, 1);
        sp04 = *(struct B6 *)&sp0a;
        if (r5 != 0) {
            sp04.b[0] = sp0a.b[6];
            sp04.b[1] = sp0a.b[7];
            sp04.b[2] = sp0a.b[8];
            sp04.b[3] = sp0a.b[9];
            sp04.b[4] = sp0a.b[10];
            sp04.b[5] = sp0a.b[11];
        }
        *a0 = r4;
        *a1 = sp04.b[4];
        *a2 = sp04.b[5];
        ret = 1;
    }
    return ret;
}
