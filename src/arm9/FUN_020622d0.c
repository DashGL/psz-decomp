// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -noThumb
struct G {
    char pad[0x24];
    unsigned char f24;
};

extern struct G DAT_02112600;
extern int FUN_0206235c(void);
extern void FUN_020623fc(void);
extern int FUN_02062450(int, int, int);
extern void FUN_020625b4(void);
extern int FUN_020625e4(int, int, int);

int FUN_020622d0(int r7, int r6, int r5) {
    struct G *r4 = &DAT_02112600;
    for (;;) {
        switch (r4->f24) {
        case 0:
        case 1:
            if (FUN_0206235c() == 0) {
                return;
            }
            break;
        case 2:
            FUN_020623fc();
            break;
        case 3:
            return FUN_02062450(r7, r6, r5);
        case 4:
            FUN_020625b4();
            break;
        case 5:
            return FUN_020625e4(r7, r6, r5);
        case 6:
            break;
        }
    }
}
