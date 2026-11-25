// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
extern int FUN_020d32b4(void *, int);
extern int FUN_020d3384(void *, int);
extern int FUN_020d3314(void *, int);
extern int FUN_020d3358(void *, int);

int FUN_020d33a8(void *a, int b) {
    if (FUN_020d32b4(a, b) == 0) {
        return 0;
    }
    if (FUN_020d3384(a, b) == 0) {
        return 0;
    }
    if (FUN_020d3314(a, b) == 0) {
        return 0;
    }
    if (FUN_020d3358(a, b) != 0) {
        return 1;
    }
    return 0;
}
