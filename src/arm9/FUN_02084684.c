// flags: -O4,s
struct S14_hdr {
    int f0;
    unsigned short *f4;
    unsigned short f8;
    unsigned char fa[5];
};
extern int DAT_0211a500[];
extern int FUN_02078188(int);
extern struct S14_hdr *FUN_02084734(int);

int FUN_02084684(int param_1, unsigned char *param_2, int param_3) {
    if (DAT_0211a500[3] != 0 && FUN_02078188(param_1) != 0) {
        struct S14_hdr *hdr = FUN_02084734(DAT_0211a500[3] + ((param_1 + 4) << 3));
        if (hdr != 0) {
            int r3 = param_2[3];
            if (r3 < 4) {
                int base = *(volatile unsigned char *)&hdr->fa[r3];
                int idx = base + param_2[2];
                if (idx < hdr->fa[r3 + 1]) {
                    int src = hdr->f0 + idx * 0x12;
                    int i;
                    *(short *)param_3 = *(short *)(hdr->f0 + idx * 0x12);
                    *(short *)(param_3 + 2) = *(short *)(src + 2);
                    *(unsigned short *)(param_3 + 4) = *(unsigned short *)(src + 4);
                    *(unsigned short *)(param_3 + 6) = *(unsigned short *)(src + 6);
                    *(unsigned char *)(param_3 + 8) = *(unsigned char *)(src + 8);
                    *(unsigned char *)(param_3 + 9) = *(unsigned char *)(src + 9);
                    *(unsigned char *)(param_3 + 0xa) = *(unsigned char *)(src + 0xa);
                    *(signed char *)(param_3 + 0xb) = *(signed char *)(src + 0xb);
                    *(signed char *)(param_3 + 0xc) = *(signed char *)(src + 0xc);
                    *(unsigned char *)(param_3 + 0xd) = *(unsigned char *)(src + 0xd);
                    *(unsigned char *)(param_3 + 0xe) = *(unsigned char *)(src + 0xe);
                    *(unsigned char *)(param_3 + 0xf) = *(unsigned char *)(src + 0xf);
                    *(unsigned short *)(param_3 + 0x10) = *(unsigned short *)(src + 0x10);
                    for (i = 0; i < 3; i++) {
                        *(unsigned short *)(param_3 + i * 2 + 0x12) = hdr->f4[(*(unsigned short *)(param_3 + 6) >> (i * 5)) & 0x1f];
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}
