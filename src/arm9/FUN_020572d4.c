// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S24_a {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
};
extern struct S24_a DAT_02111f20;
extern int DAT_02112000[];
extern void FUN_02056fbc(void);
extern void FUN_02068744(void);
extern int FUN_0206889c(int, int);
extern void FUN_02068850(int, void *);
extern void FUN_02057388(void);
extern void FUN_0205762c(int *);
extern void FUN_0205728c(int);
extern char FUN_0205757c[];
extern char FUN_020575a8[];
extern char FUN_02057618[];

void FUN_020572d4(void) {
    if (DAT_02111f20.f8 != 0) {
        return;
    }
    DAT_02111f20.f8 = 1;
    FUN_02056fbc();
    DAT_02111f20.fc = 0;
    FUN_02068744();
    while (FUN_0206889c(0xd, 1) == 0) {
    }
    FUN_02068850(0xd, FUN_0205757c);
    FUN_02057388();
    FUN_02068850(0xd, 0);
    FUN_02068850(0xd, FUN_020575a8);
    DAT_02111f20.f18 = 0;
    FUN_0205762c(DAT_02112000);
    FUN_02068850(0x11, FUN_02057618);
    FUN_0205728c(0);
}
