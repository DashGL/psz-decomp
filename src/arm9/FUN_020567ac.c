// flags: -O4,p -noThumb
#pragma optimize_for_size on
extern void FUN_0205649c(unsigned int, unsigned int);
extern int FUN_02056410(void *);
struct S567ac {
    int pad[7];
    unsigned int f1c;
    unsigned int *f20;
    unsigned int f24;
};
extern struct S567ac DAT_021116a0;

void FUN_020567ac(int *a0) {
    struct S567ac *r4 = &DAT_021116a0;
    while (1) {
        unsigned int r1 = r4->f1c;
        unsigned int r2 = r1 & ~0x1ffu;
        unsigned int *r5;
        unsigned int st; int ip; unsigned int lr;
        if (r2 != r1 || ((unsigned int)(r5 = r4->f20) & 3) != 0 || r4->f24 < 0x200) {
            a0[2] = r2;
            r5 = (unsigned int *)(a0 + 8);
        }
        FUN_0205649c((r2 >> 8) | 0xb7000000u, r2 << 24);
        ip = 0; lr = 0;
        *(volatile int *)0x040001a4 = a0[1];
        do {
            st = *(volatile unsigned int *)0x040001a4;
            if (st & 0x800000) {
                unsigned int val = *(volatile unsigned int *)0x04100010;
                if (lr < 0x200) {
                    r5[ip] = val;
                    lr += 4;
                    ip++;
                }
            }
        } while (st & 0x80000000u);
        if (r5 == r4->f20) {
            DAT_021116a0.f1c += 0x200;
            DAT_021116a0.f20 = (unsigned int *)((char *)DAT_021116a0.f20 + 0x200);
            DAT_021116a0.f24 -= 0x200;
            if (DAT_021116a0.f24 == 0) {
                break;
            }
        } else {
            if (FUN_02056410(a0) == 0) {
                break;
            }
        }
    }
}
