// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    int pad[6];
    void *(*f18)(int);
} Alloc_26220;
extern Alloc_26220 *DAT_020f6968;
extern int FUN_02026288(int);
extern int FUN_020683d4(void);
extern void FUN_020656b8(void *, int, int);
extern void FUN_02026330(void *, int);
extern void FUN_02027ed4(void *);
extern void FUN_020683e8(int);
void *FUN_02026220(int a) {
    void *r5;
    int r6;
    int r4 = FUN_02026288(a);
    r6 = FUN_020683d4();
    r5 = DAT_020f6968->f18(r4);
    if (r5 != 0) {
        FUN_020656b8(r5, 0, r4);
        FUN_02026330(r5, a);
        FUN_02027ed4(r5);
    }
    FUN_020683e8(r6);
    return r5;
}
