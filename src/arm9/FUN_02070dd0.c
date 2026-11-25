// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_02070f94(void *);
extern void FUN_020c18d8(int, int);
void FUN_02070dd0(int *a, int b, unsigned int c) {
    if (a[7] != 0) {
        if (b >= *(int *)(a[7] + 0x20)) {
            a[2] = 0;
        } else {
            a[2] = b;
        }
        a[3] = FUN_02070f94(a);
        a[5] = c;
        switch (c) {
        case 0:
            break;
        case 1:
            a[1] = *(int *)(a[7] + 4) + a[2];
            break;
        case 2:
            a[1] = *(int *)(a[7] + 8) + a[2];
            break;
        case 3:
            a[1] = *(int *)(a[7] + 0xc) + a[3];
            break;
        case 4:
            a[1] = *(int *)(a[7] + 0x10) + a[3];
            break;
        case 5:
            a[1] = *(int *)(a[7] + 0x14);
            break;
        }
        FUN_020c18d8(a[1], 5);
    }
}
