// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
extern char *DAT_020feb98;
extern char DAT_020feb9c[];
extern void FUN_020d7568(char *, int);
extern void FUN_020c7478(int);
extern void FUN_020c7820(int);
extern void FUN_020c7bec(char *);
void FUN_020d66bc(char *a) {
    if (a == 0) {
        a = DAT_020feb98;
    }
    if (*(int *)(a + 0xbc) != 0) {
        FUN_020d7568(a, 2);
    }
    if (*(int *)a != -1 && *(int *)(a + 0xc4) != 0) {
        FUN_020c7478(*(int *)a);
    }
    *(int *)a = -1;
    *(int *)(a + 0xac) = 0;
    if (*(int *)(a + 0xc4) != 0) {
        FUN_020c7820(*(int *)(a + 0xc4));
    }
    if (a != DAT_020feb9c) {
        FUN_020c7bec(a);
    }
}
