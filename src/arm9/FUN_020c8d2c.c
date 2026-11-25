// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x130, exact bytes and relocation targets.
// flags: -O4,p
struct SubC8d2cA {
    int f0;
    int f4;
    const char *f8;
    const char *fc;
    int f10;
    unsigned short f14;
    unsigned short f16;
    int f18;
};
struct SubC8d2cB {
    int f0;
    int f4;
    char pad[0x14];
    int f1c;
    unsigned short f20;
    char pad2[0xe];
    int f30;
};
struct NodeC8d2c {
    int f0;
    int f4;
    struct SubC8d2cA *f8;
    struct SubC8d2cB *fc;
};
extern const char DAT_020fce20[];
extern const char DAT_020fce30[];
extern const char DAT_020fce40[];
extern const char DAT_020fce58[];
extern const char DAT_020fcd6c[];
extern void FUN_02001540(void *, int, int);
extern void FUN_020d1b74(void *, const char *);
extern struct NodeC8d2c *FUN_020cf984(void *, int);
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d183c(char *, const char *, int);

int FUN_020c8d2c(int *self, int idx, char *out) {
    int *inner;
    struct NodeC8d2c *node;
    if (self == 0 || *self == 0) {
        return 2;
    }
    inner = (int *)*self;
    if (inner[0x42] != 0) {
        FUN_02001540(out, 0, 0x214);
        return 0;
    }
    if (out == 0) {
        FUN_020d1b74(self, DAT_020fce20);
        return 2;
    }
    {
        int max_idx = inner[0x174];
        if (idx < 0 || idx >= max_idx) {
            FUN_020d1b74(self, DAT_020fce30);
            return 2;
        }
    }
    node = FUN_020cf984(self, idx);
    if (node == 0) {
        FUN_020d1b74(self, DAT_020fce30);
        return 2;
    }
    if (node->fc != 0 && node->fc->f4 == 0) {
        *(int *)(out + 0) = node->f0;
        *(int *)(out + 4) = node->fc->f4;
        out[8] = 0;
        out[0x108] = 0;
        *(int *)(out + 0x208) = node->fc->f1c;
        *(int *)(out + 0x20c) = node->fc->f20;
        *(int *)(out + 0x210) = node->fc->f30;
    } else {
        if (node->f8 == 0) {
            FUN_02000edc(DAT_020fce40, DAT_020fce58, DAT_020fcd6c, 0x64f);
        }
        *(int *)(out + 0) = node->f0;
        *(int *)(out + 4) = node->f8->f4;
        if (node->f8->f8 != 0) {
            FUN_020d183c(out + 8, node->f8->f8, 0x100);
        } else {
            out[8] = 0;
        }
        if (node->f8->fc != 0) {
            FUN_020d183c(out + 0x108, node->f8->fc, 0x100);
        } else {
            out[0x108] = 0;
        }
        *(int *)(out + 0x208) = node->f8->f10;
        *(int *)(out + 0x20c) = node->f8->f14;
        *(int *)(out + 0x210) = node->f8->f18;
    }
    return 0;
}
