// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_02026220(void *);
extern int FUN_02025f40(void *, int, int);
extern void FUN_020260a8(int, int);
extern void FUN_020261ac(void);

int FUN_02026170(void *p) {
    int r = FUN_02026220(p);
    if (r == 0) {
        return -0x31;
    }
    FUN_020260a8(r, FUN_02025f40((void *)FUN_020261ac, r, 1));
    return r;
}
