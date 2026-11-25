// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char DAT_021116a0[];
// flags: -O4,s -noThumb
struct S558f8 {
    int *f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
};
extern int FUN_020683d4(void);
extern void FUN_02068728(void);
extern void FUN_020669dc(int *);
extern void FUN_020683e8(int);

void FUN_020558f8(int a, int b) {
    struct S558f8 *p = (struct S558f8 *)((unsigned int)DAT_021116a0 + 0u);
    int s = FUN_020683d4();
    if (p->f8 == a) {
        if (p->f18 != b) {
            FUN_02068728();
        }
    } else {
        while (p->f8 != -3) {
            FUN_020669dc(&p->f10);
        }
        p->f8 = a;
        p->f18 = b;
    }
    p->fc = p->fc + 1;
    *p->f0 = 0;
    FUN_020683e8(s);
}
