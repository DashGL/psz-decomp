// near: 86 diff words (0x188/0x190 bytes, bad_relocs=1) under 2.0/sp2p3 -O4,p -noThumb
// flags: -O4,p -noThumb
typedef unsigned int u32;

struct Sub8_0205860c {
    unsigned char pad00[0xc];
    volatile u32 f0c;
    unsigned char pad10[0xc];
    u32 f1c;
    unsigned char pad20[0x34];
    int (*f54)(void *, int);
    u32 f58;
};

struct S_0205860c {
    unsigned char pad00[8];
    struct Sub8_0205860c *f08;
    volatile u32 f0c;
    u32 f10;
    int f14;
};

extern int (*DAT_020ed7d8[])(struct S_0205860c *);
extern int FUN_020683d4(void);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);
extern void FUN_020585b0(struct S_0205860c *, int);

int FUN_0205860c(struct S_0205860c *r8, int r7) {
    int r4;
    struct Sub8_0205860c *r5 = r8->f08;
    u32 r6 = 1u << r7;
    if (((r8->f0c & 4) ? 1 : 0) != 0) {
        r5->f1c |= 0x200;
    } else {
        r5->f1c |= 0x100;
    }
    if ((r5->f58 & r6) != 0) {
        r4 = r5->f54(r8, r7);
        switch (r4) {
        case 0:
        case 1:
        case 4:
            r8->f14 = r4;
            break;
        case 8:
            r5->f58 &= ~r6;
            r4 = 7;
            break;
        }
    } else {
        r4 = 7;
    }
    if (r4 == 7) {
        r4 = DAT_020ed7d8[r7](r8);
    }
    if (r4 == 6) {
        if (((r8->f0c & 4) ? 1 : 0) != 0) {
            int irq = FUN_020683d4();
            if (((r5->f1c & 0x200) ? 1 : 0) != 0) {
                do {
                    FUN_020669dc(&r5->f0c);
                } while (((r5->f1c & 0x200) ? 1 : 0) != 0);
            }
            r4 = r8->f14;
            FUN_020683e8(irq);
        }
    } else {
        if (((r8->f0c & 4) ? 1 : 0) == 0) {
            r5->f1c &= ~0x100u;
            FUN_020585b0(r8, r4);
        } else {
            r5->f1c &= ~0x200u;
            r8->f14 = r4;
        }
    }
    return r4;
}
