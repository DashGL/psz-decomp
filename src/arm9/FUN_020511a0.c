// flags: -O4,s
extern void *DAT_02108c64;
extern int FUN_020330c4(void *);
extern void *FUN_02031a74(void);
extern void FUN_02031f88(void *, int, int, int, int);

enum { E0 = 0, E1 = 1 };

void FUN_020511a0(char *s) {
    if ((*(int *)(s + 0x70) != -1) ? E1 : E0) {
        if (FUN_020330c4(DAT_02108c64)) {
            FUN_02031f88(FUN_02031a74(), *(int *)(s + 0x6c), *(int *)(s + 0x70), 0, 1);
            *(int *)(s + 0x6c) = -1;
            *(int *)(s + 0x70) = -1;
        }
    }
}
