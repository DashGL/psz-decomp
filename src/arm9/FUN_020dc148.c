// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,s
struct S {
    unsigned char pad[0xd0b];
    unsigned char lo : 4;
    unsigned char hi : 4;
    unsigned char pad2[6];
    unsigned char f_d12;
    unsigned char pad3[3];
    unsigned short f_d16;
};
extern int FUN_020db958(int);
extern int FUN_020dc264(struct S *);
extern int FUN_020dbf48(struct S *);
extern void FUN_020dbddc(int);

int FUN_020dc148(struct S *a, int b) {
    switch (b) {
    case 3:
        if (a->f_d12 != 0 || a->f_d16 != 0) {
            if (FUN_020db958(1) != 0) {
                b = 4;
            } else {
                b = FUN_020dc264(a);
            }
        } else if (a->hi < 1) {
            b = FUN_020dbf48(a);
        } else {
            b = 6;
        }
        break;
    case 4:
        b = FUN_020dc264(a);
        break;
    case 5:
        if (a->hi < 1) {
            b = FUN_020dbf48(a);
        } else {
            b = 6;
        }
        break;
    }
    FUN_020dbddc(b);
    return b;
}
