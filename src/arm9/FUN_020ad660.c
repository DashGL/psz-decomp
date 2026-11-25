// flags: -O4,p
extern int FUN_020bbf6c(unsigned int), FUN_020bbfa8(unsigned int);
extern void *FUN_02077930(void);
extern unsigned int FUN_02077cb0(void *, unsigned int);
extern void FUN_020ae450(void *, unsigned int), FUN_020acc8c(void *, unsigned int);
extern unsigned int FUN_0203d388(void *, unsigned int);
extern unsigned char *FUN_020384a4(void *, unsigned int);
extern int FUN_020424b4(void *, int), FUN_0208f09c(void *, int);
#define W(n) (*(unsigned int *)(self + (n)))
#define H(n) (*(unsigned short *)(self + (n)))
#define P(n) (*(void **)(self + (n)))

void FUN_020ad660(unsigned char *self)
{
    unsigned int command, mask, state;
    unsigned char *record;
    int value, delta;

    if (H(0x290) & 0x803) {
        command = -1;
        if (FUN_020bbf6c(1)) {
            command = FUN_02077cb0(FUN_02077930(), 0);
            mask = 1;
        } else if (FUN_020bbf6c(2)) {
            command = FUN_02077cb0(FUN_02077930(), 1);
            mask = 2;
        } else if (FUN_020bbf6c(0x800)) {
            command = FUN_02077cb0(FUN_02077930(), 2);
            mask = 0x800;
        }
        if (command <= 3 && W(0x240) != 12) {
            FUN_020ae450(self, mask);
        }
    }

    state = W(0x240);
    if (state - 9U <= 2) {
        if (self[0x1fc] != 2) {
            if (FUN_020bbf6c(0x10)) {
                FUN_020acc8c(self, 0x10);
            } else if (FUN_020bbfa8(0x10)) {
                H(0xc2) = FUN_0203d388(self, 0x10);
            } else if (FUN_020bbf6c(0x20)) {
                FUN_020acc8c(self, 0x20);
            } else if (FUN_020bbfa8(0x20)) {
                H(0xc2) = FUN_0203d388(self, 0x20);
            } else if (FUN_020bbf6c(0x40)) {
                FUN_020acc8c(self, 0x40);
            } else if (FUN_020bbfa8(0x40)) {
                H(0xc2) = FUN_0203d388(self, 0x40);
            } else if (FUN_020bbf6c(0x80)) {
                FUN_020acc8c(self, 0x80);
            } else if (FUN_020bbfa8(0x80)) {
                H(0xc2) = FUN_0203d388(self, 0x80);
            }
        }
    } else if (state == 12) {
        record = FUN_020384a4(self, W(0xd0));
        if (record && !*(unsigned int *)(record + 36) && !*(unsigned int *)(record + 40)
            && self[0x1fc] != 2 && P(0x8c)) {
            value = FUN_020424b4(P(0x8c), 0);
            if ((record[4] << 12) <= value && value <= (record[5] << 12)) {
                if (FUN_020bbfa8(0x10)) {
                    H(0xc2) = FUN_0203d388(self, 0x10);
                } else if (FUN_020bbfa8(0x20)) {
                    H(0xc2) = FUN_0203d388(self, 0x20);
                } else if (FUN_020bbfa8(0x40)) {
                    H(0xc2) = FUN_0203d388(self, 0x40);
                } else if (FUN_020bbfa8(0x80)) {
                    H(0xc2) = FUN_0203d388(self, 0x80);
                }
                delta = (int)H(0xc2) - (int)H(0xc0);
                if (delta > 32768) {
                    delta = -(65536 - delta);
                } else if (delta < -32768) {
                    delta += 65536;
                }
                if (delta > 0) {
                    H(0x13e) += 256;
                } else if (delta < 0) {
                    H(0x13e) -= 256;
                }
                {
                    unsigned short tmp = H(0x13e);
                    *(volatile unsigned short *)(self + 0x13e) = tmp;
                    H(0xc0) = tmp;
                    H(0xc2) = H(0xc0);
                }
            }
        }
    }

    record = FUN_020384a4(self, W(0xd0));
    if (!record || !P(0x8c) || W(0x240) == 15 || W(0x240) == 12) return;
    value = FUN_020424b4(P(0x8c), 0);
    if ((record[0] << 12) >= value) return;
    H(0x13c) = H(0xc2);
    if (FUN_020bbf6c(1)) {
        if (FUN_02077cb0(FUN_02077930(), 0) == 4) FUN_0208f09c(self, 0);
    } else if (FUN_020bbf6c(2)) {
        if (FUN_02077cb0(FUN_02077930(), 1) == 4) FUN_0208f09c(self, 1);
    } else if (FUN_020bbf6c(0x800)) {
        if (FUN_02077cb0(FUN_02077930(), 2) == 4) FUN_0208f09c(self, 2);
    }
}
