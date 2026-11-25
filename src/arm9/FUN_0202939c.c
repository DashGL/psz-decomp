// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0202bdd4(void *);
extern void FUN_0202be1c(void *, int, int);
extern void FUN_0202bed4(void *, void *);
extern void FUN_0202c694(void *);
extern void FUN_0202c6e8(void *, int, int);
extern void FUN_0202c7a0(void *, void *);
extern int FUN_02028b7c(void *, void *);
extern int FUN_020291f4(void *, int);

int FUN_0202939c(char *a0) {
    int r4 = (unsigned char)a0[0x5af] != 0 ? 0 : 0x8000;
    int r1;
    if (*(int *)(a0 + 0x45c) == -1) {
        return r4 | 4;
    }
    switch (*(int *)(a0 + 0x458)) {
    case 3:
        FUN_0202bdd4(a0 + 0x3fc);
        FUN_0202be1c(a0 + 0x3fc, *(int *)(a0 + 0x460), *(int *)(a0 + 0x464) - *(int *)(a0 + 0x460));
        FUN_0202bed4(a0 + 0x3fc, a0 + 0x468);
        *(int *)(a0 + 0x47c) = 0x10;
        break;
    case 4:
        FUN_0202c694(a0 + 0x348);
        FUN_0202c6e8(a0 + 0x348, *(int *)(a0 + 0x460), *(int *)(a0 + 0x464) - *(int *)(a0 + 0x460));
        FUN_0202c7a0(a0 + 0x348, a0 + 0x468);
        *(int *)(a0 + 0x47c) = 0x14;
        break;
    default:
        return r4 | 3;
    }
    if ((r1 = FUN_02028b7c(a0, a0 + 0x5b0)) == 0) {
        return r4 | 1;
    }
    return r4 | FUN_020291f4(a0, r1);
}
