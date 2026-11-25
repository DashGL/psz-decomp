// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0202e834(int);
extern void FUN_0202e984(void);
extern char *DAT_02108c0c;
void FUN_0202e9e0(unsigned short *a) {
    if (a[1] == 8 && a[2] == 0x16 && a[3] == 0x25) {
        switch (*(int *)(DAT_02108c0c + 0x2260)) {
        case 8:
            FUN_0202e834(12);
            break;
        case 9:
        case 12:
            FUN_0202e984();
            break;
        case 10:
            FUN_0202e834(12);
            break;
        }
    }
}
