// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020dcc3c(void);
extern void *FUN_020e05ac(int, int);
extern void FUN_020656b8(void *, int, int);
extern struct { int *p0; int p4; int p8; } D_0211dbcc;

int FUN_020dce70(int a) {
    D_0211dbcc.p4 = (int)FUN_020e05ac(1, FUN_020dcc3c());
    D_0211dbcc.p0 = (int *)FUN_020e05ac(1, 0x790);
    FUN_020656b8(D_0211dbcc.p0, 0, 0x790);
    *D_0211dbcc.p0 = a;
    D_0211dbcc.p8 = 0;
    return 1;
}
