// flags: -noThumb
// near: nd=50 bad=0 len=0x180/tsz=0x178 — logic understood, register coloring / scheduling residual
extern void FUN_02068728(void);

struct RomHdr_61b20 {
    char pad0[0x28];
    unsigned int f28;
    unsigned int f2c;
    char pad1[0x38 - 0x30];
    unsigned int f38;
    unsigned int f3c;
};

struct Out_61b20 {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    unsigned int fc : 1;
    unsigned int fc_rest : 31;
};

void FUN_02061b20(struct RomHdr_61b20 *p0, int *p1, struct Out_61b20 *p2, unsigned int *p3) {
    switch (*p1) {
    case 0:
        if (p0->f28 >= 0x02000000u && p0->f28 < 0x022c0000u && p0->f28 + p0->f2c <= 0x022c0000u) {
            p2->f8 = p0->f2c;
            p2->f4 = p0->f28;
            p2->f0 = p2->f4;
            p2->fc = 0;
            return;
        }
        FUN_02068728();
        break;
    case 1:
        {
            int err = 0;
            int flag = 0;
            unsigned int end = p0->f38 + p0->f3c;
            unsigned int addr = p0->f38;
            unsigned int size = p0->f3c;
            if (addr >= 0x02000000u && addr < 0x023fe800u) {
                if (end > 0x02300000u) {
                    if (end < 0x023fe800u && size <= 0x40000u) {
                        flag = 1;
                    } else {
                        err = 1;
                    }
                }
            } else if (addr >= 0x037f8000u && addr < 0x037f8000u + 0x17000u) {
                if (end <= 0x037f8000u + 0x17000u) {
                    flag = 1;
                } else {
                    err = 1;
                }
            } else {
                err = 1;
            }
            if (err == 1) {
                FUN_02068728();
            }
            p2->f8 = p0->f3c;
            p2->f4 = p0->f38;
            if (flag == 0) {
                p2->f0 = p2->f4;
            } else {
                p2->f0 = *p3;
                *p3 += p2->f8;
            }
            p2->fc = 1;
        }
        break;
    case 2:
        p2->f8 = 0x160u;
        p2->f4 = 0x027ffe00u;
        p2->f0 = 0x027ffe00u;
        p2->fc = 0;
        break;
    }
}
