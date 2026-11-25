// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
extern char *FUN_020c7e54(void);
extern int FUN_020c6e0c(int);
extern char *FUN_020c6e10(int, int);
extern int FUN_020d3730(void *);
extern int FUN_020d3734(void *);

void FUN_020c8100(void *a, int b) {
    char *r4 = FUN_020c7e54();
    int r6 = FUN_020c6e0c(*(int *)(r4 + 8));
    int r5 = 0;
    for (; r5 < r6; r5++) {
        char *r7 = FUN_020c6e10(*(int *)(r4 + 8), r5);
        if (*(void (**)(int, int, int, int))(r7 + 0x30) != 0) {
            (*(void (**)(int, int, int, int))(r7 + 0x30))(FUN_020d3730(a), FUN_020d3734(a), b, *(int *)(r7 + 0x38));
            return;
        }
    }
    if (*(void (**)(int, int, int, int))(r4 + 0x18) != 0) {
        (*(void (**)(int, int, int, int))(r4 + 0x18))(FUN_020d3730(a), FUN_020d3734(a), b, *(int *)(r4 + 0x2c));
    }
}
