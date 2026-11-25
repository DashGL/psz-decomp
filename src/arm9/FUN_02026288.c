// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02027ec8(unsigned int);
extern int FUN_02026308(void *);

int FUN_02026288(unsigned short *a) {
    int total = 0x80;
    if (a[1] != 0) {
        total += 0x114;
        total += FUN_02027ec8(a[1]);
        total += FUN_02027ec8(a[4]);
        total += FUN_02026308((char *)a + 0x10);
    }
    if (a[3] != 0) {
        total += 0x110;
        total += FUN_02027ec8(a[3]);
        total += FUN_02027ec8(a[5]);
        total += FUN_02027ec8(a[6]);
        total += FUN_02026308((char *)a + 0x14);
    }
    return total;
}
