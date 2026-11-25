// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x120, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020214ac(unsigned char *, int, void *, int);
extern void FUN_02023068(void *, unsigned char *, int);
extern void FUN_02023140(void *, unsigned char *, int);
extern void FUN_02023238(void *, unsigned char *, int);
extern void FUN_02023550(void *, unsigned char *, int);
extern void FUN_0202361c(void *, unsigned char *);
extern void FUN_02022db8(void *, unsigned char *, int, int);

void FUN_02023658(void *arg0, unsigned char *arg1, int arg2) {
    if (FUN_020214ac(arg1, arg2, arg0, 6) != 0) {
        return;
    }
    arg2 -= (int)(arg1[0xc] & 0xf0) / 4;
    switch (arg1[0xd] & 0x17) {
    case 2:
        if (arg1[0xd] & 0x28) {
            return;
        }
        FUN_02023068(arg0, arg1, arg2);
        return;
    case 0x12:
        if (arg1[0xd] & 0x28) {
            return;
        }
        FUN_02023140(arg0, arg1, arg2);
        return;
    case 0x10:
    case 0x11:
        FUN_02023238(arg0, arg1, arg2);
        return;
    case 1:
        FUN_02023550(arg0, arg1, arg2);
        return;
    default:
        if (arg1[0xd] & 4) {
            FUN_0202361c(arg0, arg1);
            return;
        }
        FUN_02022db8(arg0, arg1, arg2, 0);
        return;
    }
}
