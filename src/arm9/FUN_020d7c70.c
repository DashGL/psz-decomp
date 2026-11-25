// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020d7a50(int, int, int);
extern void FUN_020d79d4(int, int);
extern void FUN_020d79b4(int, int);

void FUN_020d7c70(int a, int b, int c, int d, int e) {
    *(unsigned char *)(b + 0x14) &= 0x43;
    *(unsigned char *)(b + 0x28) = 0;
    *(int *)(b + 0x20) = 0;
    if (d == 2) {
        return;
    }
    if (d == 0) {
        *(unsigned char *)(b + 0x14) |= 4;
    } else if (d == 1) {
        *(unsigned char *)(b + 0x14) |= 8;
    } else if (d == 2) {
        *(unsigned char *)(b + 0x14) |= 0x20;
    } else {
        return;
    }
    if (e != 0 && (d == 0 || d == 1)) {
        *(unsigned char *)(b + 0x14) |= 0x80;
    }
    if (*(int *)(a + 0x10) < *(int *)(a + 4)) {
        FUN_020d7a50(a, b, c);
        return;
    }
    if (c != 0) {
        FUN_020d79d4(a + 0x14, b);
    } else {
        FUN_020d79b4(a + 0x14, b);
    }
}
