// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char DAT_020ebedc[];
extern unsigned short *DAT_020ec024[];
void FUN_020150d4(void *p);
void FUN_02015118(void *p);

void FUN_020154bc(int a, int b, int c, int d, int e) {
    if (a <= 3) {
        FUN_020150d4(DAT_020ebedc + (a - 2) * 8);
    } else {
        FUN_02015118(DAT_020ebedc + (a - 6) * 8);
    }
    unsigned short *p = DAT_020ec024[a];
    *p = (*p & 0x43) | (unsigned short)((b << 14) | (d << 8) | (e << 2) | (c << 13));
}
