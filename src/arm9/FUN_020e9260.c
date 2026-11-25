// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
extern int FUN_020e1534(void);
extern void *FUN_020e961c(void);
extern void FUN_02065774(const void *, void *, int);
extern int FUN_02003f38(const void *, const void *, int);
extern int FUN_020e5cc8(int, int, int, int, void *, int);
extern const char DAT_0210183c[];

void FUN_020e9260(const char *param_1, unsigned int param_2) {
    unsigned int offset = 0;
    if (FUN_020e1534() == 5 ||
        (FUN_020e1534() == 6 &&
         (*(unsigned char *)((char *)FUN_020e961c() + 0x15) == 2 ||
          *(unsigned char *)((char *)FUN_020e961c() + 0x15) == 3))) {
        if (param_2 >= 0x14) {
            const char *p = param_1;
            unsigned char hdr[0x14];
            unsigned char buf[0x80];
            p += 0x14;
            do {
                FUN_02065774(param_1, hdr, 0x14);
                if (FUN_02003f38(hdr, DAT_0210183c, 4) != 0) {
                    break;
                }
                if (*(int *)(hdr + 4) != 3) {
                    break;
                }
                FUN_02065774(p, buf, hdr[9]);
                if (FUN_020e5cc8(hdr[8], *(int *)(hdr + 0x10), *(int *)(hdr + 0xc), *(unsigned short *)(hdr + 0xa), buf, hdr[9] >> 2) == 0) {
                    break;
                }
                offset += hdr[9] + 0x14;
            } while (offset + 0x14 <= param_2);
        }
    }
}
