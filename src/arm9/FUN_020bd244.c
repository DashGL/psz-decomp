// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020bd5a4(char *);
extern void FUN_020e0ee4(void);
extern void FUN_020bd3dc(char *);
extern void FUN_020bd44c(char *);
extern int FUN_020e09c8(char *);
extern void FUN_020bd1e8(char *);
extern void FUN_020be304(char *);
void FUN_020bd244(char *a) {
    switch ((signed char)a[0x1c]) {
    case 0:
        break;
    case 1:
        FUN_020bd5a4(a);
        break;
    case 2:
    case 3:
        FUN_020e0ee4();
        break;
    case 4:
        FUN_020bd3dc(a);
        FUN_020e0ee4();
        break;
    case 5:
    case 9:
        FUN_020e0ee4();
        break;
    case 6:
    case 7:
    case 8:
    case 10:
        FUN_020bd44c(a);
        break;
    case 11:
        if (FUN_020e09c8(a) != 0) {
            FUN_020bd1e8(a);
        }
        break;
    }
    if (*(unsigned short *)(a + 0xf5e) != 0) {
        (*(unsigned short *)(a + 0xf5e))--;
    }
    FUN_020be304(a);
}
