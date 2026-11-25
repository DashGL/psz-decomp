// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_02077930(void *);
extern int FUN_02077cb0(int, int);
extern void *FUN_020ac3b4(void *, int);
extern void *FUN_02052630(void *, int);
extern void FUN_0208f398(void *, signed char, int, int);
extern int FUN_020bbfa8(int);
extern int FUN_0208f2f8(void *);
extern int (*DAT_020f4340[])(void *, signed char, int, int);

int FUN_0208f1c0(void *a0, int a1) {
    int r6 = FUN_02077cb0(FUN_02077930(a0), a1);
    if (r6 >= 0 && r6 < 0x2c) {
        if (r6 != 0) {
            void *r1 = 0;
            int r7 = -1;
            int sp00 = 0;
            switch (a1) {
            case 0:
                r1 = FUN_020ac3b4(a0, 0);
                break;
            case 1:
                r1 = FUN_020ac3b4(a0, 1);
                break;
            case 2:
                r1 = FUN_020ac3b4(a0, 2);
                break;
            }
            if (r1 != 0 && *((unsigned char *)r1 + 0x110) != 0) {
                void *r0 = FUN_02052630(r1, 0);
                if (r0 != 0) {
                    r7 = *(int *)((char *)r0 + 0x40);
                    sp00 = *(int *)((char *)r0 + 0x30);
                }
            }
            if (r6 == 1) {
                FUN_0208f398(a0, (signed char)a1, r7, sp00);
            } else {
                if (*((unsigned char *)a0 + 0x181) == 10 && FUN_020bbfa8(0x400) == 0 && FUN_020bbfa8(0x200) != 0) {
                    *(unsigned int *)((char *)a0 + 0xf8) |= 0x400000;
                } else {
                    *(unsigned int *)((char *)a0 + 0xf8) &= ~0x400000u;
                }
                return DAT_020f4340[r6](a0, (signed char)a1, r7, sp00);
            }
        } else {
            return FUN_0208f2f8(a0);
        }
    }
    return 0;
}
