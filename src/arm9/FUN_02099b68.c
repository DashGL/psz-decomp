// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_0203955c(void *);
extern void FUN_02045990(void *, int);
extern void *FUN_020845a8(void *);

struct Rec {
    int pad0;
    unsigned int b0 : 4;
    unsigned int b1 : 7;
    unsigned int b2 : 7;
    unsigned int b3 : 7;
    unsigned int b4 : 7;
    signed char b5;
};

int FUN_02099b68(void *a0, unsigned int *a1, int a2) {
    int sp00[6];
    struct Rec *r0;
    int r3;
    if (*((int *)a0 + 8) == 0) {
        return 0;
    }
    if (a2 >= 0 && a2 < 5) {
        FUN_0203955c(a1);
        FUN_02045990(a1, *((int *)a0 + 8) + ((a2 + (a2 << 2)) << 2));
        r0 = (struct Rec *)FUN_020845a8(a1);
        if (r0 != 0) {
            sp00[1] = r0->b1;
            sp00[2] = r0->b2;
            sp00[3] = r0->b3;
            sp00[4] = r0->b4;
            sp00[5] = r0->b5;
            for (r3 = 0; r3 < 6; r3++) {
                int v = sp00[r3];
                switch (r3) {
                case 1:
                    a1[1] = (a1[1] & 0xffc07fffu) | (v << 15);
                    break;
                case 2:
                    a1[1] = (a1[1] & 0xffff80ffu) | (v << 8);
                    break;
                case 3:
                    a1[1] = (a1[1] & ~0xfeu) | (v << 1);
                    break;
                case 4:
                    a1[2] = (a1[2] & 0x01ffffffu) | (v << 25);
                    break;
                case 5:
                    a1[2] = (a1[2] & 0xfe03ffffu) | (v << 18);
                    break;
                }
            }
            return 1;
        }
    }
    return 0;
}
