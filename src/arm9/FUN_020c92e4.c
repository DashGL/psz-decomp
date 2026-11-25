// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
extern void FUN_020ccaa0(int, int);
extern int FUN_020c830c(void);
extern void FUN_020c8758(void *);
extern int FUN_020c87bc(void);
extern int FUN_020c87e0(void);
extern void FUN_020c8684(void);
extern void FUN_020ce110(void *);
extern void FUN_020c718c(int);
extern void FUN_020c7bec(void *);

void FUN_020c92e4(char **a) {
    char *p = *a;
    FUN_020ccaa0((int)a, 1);
    if (FUN_020c830c() != 0) {
        FUN_020c8758(p + 0x220);
        if (FUN_020c87bc() != 0 && FUN_020c87e0() != 0) {
            FUN_020c8684();
        }
    }
    FUN_020ce110(a);
    FUN_020c718c(*(int *)(p + 0x5c8));
    FUN_020c7bec(p);
    *a = 0;
}
