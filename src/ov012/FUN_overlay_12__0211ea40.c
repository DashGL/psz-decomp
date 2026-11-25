// flags: -O4,s
extern const unsigned int DAT_overlay_12__0213c1d0[], DAT_overlay_12__0213c218[];
#pragma thumb off
extern void FUN_020014d4(void *, const void *, unsigned int);
extern long long FUN_0200a3a0(int, int);
#pragma thumb on
extern void FUN_overlay_12__0211e640(void *, unsigned int *, unsigned int *);

typedef union {
    unsigned int u;
    struct {
        unsigned int b0 : 8;
        unsigned int b1 : 8;
        unsigned int b2 : 8;
        unsigned int b3 : 8;
    } b;
} Word;

void FUN_overlay_12__0211ea40(unsigned int *self, const unsigned char *key, int length) {
    Word w;
    unsigned int left, right;
    int i, offset, box;
    FUN_020014d4(self + 1, DAT_overlay_12__0213c1d0, 72);
    FUN_020014d4(self + 19, DAT_overlay_12__0213c218, 4096);
    for (i = 0, offset = 0; i < 18; i++) {
        w.u = 0;
        w.b.b0 = key[offset];
        w.b.b1 = key[(int)(FUN_0200a3a0(offset + 1, length) >> 32)];
        w.b.b2 = key[(int)(FUN_0200a3a0(offset + 2, length) >> 32)];
        w.b.b3 = key[(int)(FUN_0200a3a0(offset + 3, length) >> 32)];
        self[i + 1] ^= w.u;
        offset = (int)(FUN_0200a3a0(offset + 4, length) >> 32);
    }
    left = 0;
    right = 0;
    for (i = 0; i < 18; i += 2) {
        FUN_overlay_12__0211e640(self, &left, &right);
        self[i + 1] = left;
        self[i + 2] = right;
    }
    for (box = 0; box < 4; box++) {
        for (i = 0; i < 256; i += 2) {
            FUN_overlay_12__0211e640(self, &left, &right);
            self[19 + box * 256 + i] = left;
            self[20 + box * 256 + i] = right;
        }
    }
}
