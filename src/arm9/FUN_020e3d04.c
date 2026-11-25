// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7e, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x10];
    int f10;
    unsigned char f14;
    unsigned char f15;
    char pad2[0x18a];
    int f1a0;
} G_e3d04;
extern void FUN_020d651c(void *);
extern G_e3d04 *FUN_020e961c(void);
extern void FUN_020d6674(int);
void FUN_020e3d04(char *a) {
    if (a == 0) {
        return;
    }
    FUN_020d651c(a);
    if (*(int *)(a + 0xb4) != 0) {
        return;
    }
    switch (FUN_020e961c()->f15) {
    case 0:
    case 1:
        switch (FUN_020e961c()->f1a0) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 11:
            FUN_020d6674(FUN_020e961c()->f10);
            break;
        }
        break;
    case 2:
        if (FUN_020e961c()->f1a0 == 11) {
            FUN_020d6674(FUN_020e961c()->f10);
        }
        break;
    }
}
