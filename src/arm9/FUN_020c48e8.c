// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x100, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020c4f34(void *);
extern int FUN_020c4898(void *, int, int *, int *);
extern int FUN_020c4fe4(void *, int);
extern void FUN_020c4f98(void *);
extern int FUN_020ba8bc(int, int);
extern void FUN_020c4f70(void *, int, int, int);
extern void FUN_02055c40(unsigned short);
extern int FUN_02056298(void);
extern void FUN_020561b0(int, int, int, void (*)(void), int, int, int, int, int);
extern void FUN_020c4dc0(void);

int FUN_020c48e8(unsigned char *arg0, int arg1, int arg2, int *arg3) {
    int v18;
    int v14;

    if (!FUN_020c4f34(arg0)) {
        return 0;
    }
    v18 = 0;
    v14 = 0;
    if (!FUN_020c4898(arg0, arg1, &v18, &v14)) {
        void (*cb)(int) = *(void (**)(int))(arg0 + 0x1c);
        if (cb != 0) {
            cb(0);
        }
        return 0;
    }
    if (!FUN_020c4fe4(arg0, arg1)) {
        return 0;
    }
    *(int *)(arg0 + 0x44c) = arg2;
    FUN_020c4f98(arg0);
    *(int *)(arg0 + 0x458) = v14;
    *(int *)(arg0 + 0x454) = FUN_020ba8bc(*(int *)(arg0 + 0x458), 0x10);
    FUN_020c4f70(arg0, arg2, *(int *)(arg0 + 0x454), *(int *)(arg0 + 0x458));
    arg2 = *(int *)(arg0 + 0x454);
    FUN_02055c40((unsigned short)*(int *)(arg0 + 0x10));
    if ((((unsigned char)FUN_02056298() == 1) ? 1 : 0) == 1) {
        FUN_020561b0(arg2, v18, v14, FUN_020c4dc0, arg1, 1, 8, 10, 2);
    } else {
        FUN_020561b0(arg2, v18, v14, FUN_020c4dc0, arg1, 1, 7, 10, 2);
    }
    *(int *)(arg0 + 8) = 2;
    *(int *)(arg0 + 0x20) = arg1;
    *(int **)(arg0 + 0x44) = arg3;
    if (arg3 != 0) {
        *arg3 = 0x6b;
    }
    *(int *)(arg0 + 0x24) = 0x6b;
    return 1;
}
