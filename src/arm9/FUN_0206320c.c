// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int DAT_021180a0[];
void FUN_0206320c(unsigned short *a) {
    if (a[1] != 0) {
        return;
    }
    switch (a[2]) {
    case 7:
    case 9:
        break;
    case 0x15:
        (*(void (**)(int, unsigned short *))(DAT_021180a0[2] + 0x51c))(9, a);
        break;
    case 0x19:
    case 0x1a:
        break;
    }
}
