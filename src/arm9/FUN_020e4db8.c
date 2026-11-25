// flags: -O4,p
struct MatchCnt {
    unsigned char pad0[0x24];
    int f24[32];
    unsigned short fa4[32];
    unsigned char pad1[0x10];
    int ff4[32];
    unsigned char pad2[0x9c];
    int f210[32];
    unsigned short f290[32];
    unsigned char f2d0[32];
    unsigned int f2f0;
};

extern struct MatchCnt *FUN_020e961c(void);
extern void FUN_020e4f6c(void);

int FUN_020e4db8(int idx, int count) {
    int ret;
    int i;
    if (!FUN_020e961c()) {
        return 0;
    }
    ret = FUN_020e961c()->ff4[idx];
    FUN_020e961c()->f2f0 &= ~(1 << FUN_020e961c()->f2d0[idx]);
    FUN_020e4f6c();
    if (idx < count - 1) {
        for (i = 0; i < count - idx - 1; i++) {
            FUN_020e961c()->f24[idx + i] = FUN_020e961c()->f24[idx + i + 1];
            FUN_020e961c()->fa4[idx + i] = FUN_020e961c()->fa4[idx + i + 1];
            FUN_020e961c()->ff4[idx + i] = FUN_020e961c()->ff4[idx + i + 1];
            FUN_020e961c()->f210[idx + i] = FUN_020e961c()->f210[idx + i + 1];
            FUN_020e961c()->f290[idx + i] = FUN_020e961c()->f290[idx + i + 1];
            FUN_020e961c()->f2d0[idx + i] = FUN_020e961c()->f2d0[idx + i + 1];
        }
    }
    if (count > 0) {
        FUN_020e961c()->f24[count - 1] = 0;
        FUN_020e961c()->fa4[count - 1] = 0;
        FUN_020e961c()->ff4[count - 1] = 0;
        FUN_020e961c()->f210[count - 1] = 0;
        FUN_020e961c()->f290[count - 1] = 0;
        FUN_020e961c()->f2d0[count - 1] = 0;
    }
    return ret;
}
