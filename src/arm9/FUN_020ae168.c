//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0203b6c4(void *), FUN_0206d5e8(void *), FUN_020bbfa8(unsigned int);
extern void FUN_020948c0(void *, int), FUN_0203df7c(void *);
extern void FUN_0208d638(void *, int, void *, unsigned int, unsigned char);
extern int FUN_0203cfe0(void *), FUN_02085504(int);
extern void FUN_0209495c(void *, int), FUN_02094890(void *, int);
extern int FUN_020391cc(void *, int);
extern void FUN_02094928(void *, int), FUN_020948f0(void *, int);
extern void FUN_020949e4(void *, int), FUN_0206f090(void *, unsigned int);
extern unsigned char *UNK_02108c64;
int FUN_020ae168(unsigned char *self);
}
#define W(o) (*(unsigned int *)(self + (o)))
#define H(o) (*(unsigned short *)(self + (o)))
#define S(o) (*(signed char *)(self + (o)))
int FUN_020ae168(unsigned char *self)
{
    unsigned int record[5];
    unsigned char *global;
    int i, peer;
    if (*(short *)(self + 0x154) < 10000) return 0;
    if (FUN_0203b6c4(self) == 1 || S(0x143) < 1 || S(0x143) >= 5 || ((W(0xf8) & 0x800) ? 1 : 0) != 0) return 0;
    global = UNK_02108c64;
    record[0] = *(unsigned int *)(global + 0x24);
    record[1] = *(unsigned int *)(global + 0x28);
    record[2] = *(unsigned int *)(global + 0x2c);
    record[3] = *(unsigned int *)(global + 0x30);
    record[4] = *(unsigned int *)(global + 0x34);
    if (FUN_0206d5e8(record)) return 0;
    if (FUN_020bbfa8(0x100) && FUN_020bbfa8(0x200)) {
        switch (W(0x240)) {
        case 18:
            if (W(0x260) >= W(0xdf4)) {
                FUN_020948c0(self, S(0x143));
                W(0x240) = 19;
                FUN_0203df7c(self);
                self[0x203] = 0;
            }
            break;
        case 19:
            if (S(0x143) != 1) break;
            if (FUN_020bbfa8(0x20)) {
                H(0xc0) += 512;
                H(0x13e) = H(0xc0);
                H(0xc2) = H(0xc0);
                H(0x13c) = H(0xc2);
                if (self[0x203] > 10) {
                    FUN_0208d638(self + 0x24c, W(0xfc), self + 0x9c, H(0xc0), 6);
                    self[0x203] = 0;
                }
            } else if (FUN_020bbfa8(0x10)) {
                H(0xc0) -= 512;
                H(0x13e) = H(0xc0);
                H(0xc2) = H(0xc0);
                H(0x13c) = H(0xc2);
                if (self[0x203] > 10) {
                    FUN_0208d638(self + 0x24c, W(0xfc), self + 0x9c, H(0xc0), 6);
                    self[0x203] = 0;
                }
            }
            ++self[0x203];
            break;
        case 8: break;
        default:
            if (FUN_0203cfe0(self) && !FUN_020bbfa8(1) && !FUN_020bbfa8(2) && !FUN_020bbfa8(0x800)) {
                W(0xe18) = FUN_02085504(W(0xfc));
                peer = W(0xe18);
                if (peer != -1) {
                    FUN_0209495c(self, peer);
                    W(0x240) = 8;
                } else if (W(0x260) == 10) {
                    for (i = 0; i < 4; ++i) {
                        *(unsigned int *)((self + 4*i) + 0x1d4) = -1;
                        self[0x1e4 + i] = 0;
                    }
                    FUN_02094890(self, S(0x143));
                    W(0x240) = 18;
                }
            } else {
                FUN_020391cc(self, 0);
                return 0;
            }
            break;
        }
        ++W(0x260);
        return 1;
    }
    switch (W(0x240)) {
    case 18:
        FUN_02094928(self, S(0x143));
        W(0x240) = 0;
        break;
    case 19:
        FUN_020948f0(self, S(0x143));
        W(0xf8) |= 4;
        W(0x240) = 20;
        break;
    case 8:
        FUN_020949e4(self, W(0xe18));
        W(0xe18) = -1;
        FUN_0206f090(self, H(0xc0));
        break;
    }
    W(0x260) = 0;
    return 0;
}
