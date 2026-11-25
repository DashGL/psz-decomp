// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// flags: -noThumb
struct S6b370 {
    unsigned short f00;
    unsigned short f02;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
};
struct S6b370_item {
    unsigned short f00;
    unsigned short f02;
    int f04;
};
extern struct S6b370 DAT_0211a180;
extern struct S6b370_item DAT_0211a1c4[];
extern int DAT_0211a1ac;
extern void FUN_0206b414(void);
extern void FUN_02068744(void);
extern int FUN_0206889c(int a, int b);
extern void FUN_02068850(int a, void (*b)(void));
extern void FUN_02067184(void *a);

void FUN_0206b370(void) {
    int i;
    if (DAT_0211a180.f00 != 0) {
        return;
    }
    DAT_0211a180.f00 = 1;
    DAT_0211a180.f1c = 0;
    DAT_0211a180.f20 = 0;
    FUN_02068744();
    while (FUN_0206889c(8, 1) == 0) {
    }
    FUN_02068850(8, FUN_0206b414);
    for (i = 0; i < 5; i++) {
        DAT_0211a1c4[i].f00 = 0;
    }
    FUN_02067184(&DAT_0211a1ac);
    DAT_0211a180.f10 = *(int *)0x027ffc3c;
}
