// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd8, exact bytes and relocation targets.
extern int FUN_02078b6c(int);
extern int FUN_02030700(int);
extern int FUN_0207a050(void *);
extern int FUN_0207a0a0(void *);
extern int FUN_020bbf6c(int);
extern void *FUN_02072af0(void);
extern int FUN_02072c20(void *, int, int);

static inline int check_80(void *a0) {
    return (**(unsigned char **)((char *)a0 + 0x34) & 0x80) ? 1 : 0;
}

int FUN_02079cbc(void *a0, int a1) {
    if (a1 == 0) {
        if (*(signed char *)(*(char **)((char *)a0 + 4) + 0x12) == 2 && FUN_02078b6c(1) == 0) {
            return 0;
        }
        if (*(int *)((char *)a0 + 0x3c) != 0) {
            return FUN_02030700(*(int *)((char *)a0 + 0x3c));
        }
        return 1;
    } else if (a1 == 1) {
        if (*(signed char *)(*(char **)((char *)a0 + 4) + 0x12) == 0) {
            return FUN_0207a050(a0);
        }
        return 1;
    } else if (a1 == 2) {
        if (((**(unsigned char **)((char *)a0 + 0x34) & 0x80) ? 1 : 0) != 0) {
            return 1;
        }
        return 0;
    } else if (a1 == 3) {
        if (*(int *)((char *)a0 + 0x44) == 0) {
            return 1;
        }
        return 0;
    } else if (a1 == 4) {
        if (FUN_0207a0a0(a0) != 0 && FUN_020bbf6c(2) != 0) {
            return 1;
        }
        return 0;
    } else if (a1 == 5) {
        if ((*(int *)((char *)a0 + 0x38) & 4) != 0 && *(int *)((char *)FUN_02072af0() + 8) != 0xe && FUN_02072c20(FUN_02072af0(), 0xe, 1) != 0) {
            return 0;
        }
        if (FUN_0207a0a0(a0) != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
