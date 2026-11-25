// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_020c70a0(int, int, void *, void *, void *);
extern void FUN_020cf544(void);
extern void FUN_020cf550(void);
extern void FUN_020cf558(void);

int FUN_020cf5fc(char **p) {
    char *q = *p;
    *(int *)(q + 0x5d0) = 0;
    *(int *)(q + 0x5cc) = 0;
    *(int *)(q + 0x5c8) = FUN_020c70a0(0x20, 4, (void *)FUN_020cf544, (void *)FUN_020cf550, (void *)FUN_020cf558);
    if (*(int *)(q + 0x5c8) != 0) {
        return 1;
    }
    return 0;
}
