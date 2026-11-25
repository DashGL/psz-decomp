// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x124, exact bytes and relocation targets.
// flags: -O4,p
extern void *FUN_02077930(void);
extern int FUN_02077cb0(void *, int);
extern unsigned char *FUN_020ac3b4(void *, int);
extern void *FUN_02052630(void *, int);
extern void FUN_02049138(void *, int);
extern void FUN_02049228(void *);
extern int FUN_020bbfa8(int);
extern int (*DAT_020f4340[])(void *, signed char, int, int);
extern int FUN_0208f2f8(void *);

int FUN_0208f09c(unsigned char *self, int idx) {
    int cmd = FUN_02077cb0(FUN_02077930(), idx);
    if (cmd >= 0 && cmd < 0x2c) {
        *(unsigned short *)(self + 0x254) = 0;
        if (cmd != 0) {
            unsigned char *sub = 0;
            int v40 = -1;
            int v30 = 0;
            switch (idx) {
            case 0:
                sub = FUN_020ac3b4(self, 0);
                break;
            case 1:
                sub = FUN_020ac3b4(self, 1);
                break;
            case 2:
                sub = FUN_020ac3b4(self, 2);
                break;
            }
            if (sub != 0 && sub[0x110] != 0) {
                int *p = (int *)FUN_02052630(sub, 0);
                if (p != 0) {
                    v40 = p[0x10];
                    v30 = p[0xc];
                }
            }
            if (*(void **)(self + 0x294) != 0) {
                FUN_02049138(*(void **)(self + 0x294), 0);
                FUN_02049228(*(void **)(self + 0x294));
            }
            self[0x258] = 0;
            self[0x259] = 0;
            self[0x25a] = 0;
            self[0x25b] = 0;
            self[0x1fd] = 1;
            self[0x1fe] = self[0x1fd];
            if (self[0x181] == 0xa && FUN_020bbfa8(0x400) == 0 && FUN_020bbfa8(0x200) != 0) {
                *(unsigned int *)(self + 0xf8) |= 0x400000u;
            } else {
                *(unsigned int *)(self + 0xf8) &= ~0x400000u;
            }
            return DAT_020f4340[cmd](self, (signed char)idx, v40, v30);
        } else {
            return FUN_0208f2f8(self);
        }
    }
    return 0;
}
