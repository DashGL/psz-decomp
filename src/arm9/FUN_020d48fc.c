// near: len=0xb8/0xb2 diffs=72 badrel=0 — codegen register coloring / scheduling residual
// flags: -O4,p

struct SubD48FC {
    unsigned char pad[0x40];
    int f40;
    int f44;
};

struct SelfD48FC {
    int f0;
    int f4;
    struct SubD48FC *sub;
    unsigned char pad[0x44];
    int f50;
    int f54;
    int f58;
};

extern const char DAT_020feab4[];
extern int FUN_020015ac(const char *, const char *, int);
extern int FUN_020d3288(struct SelfD48FC *, const void *, int);
extern int FUN_020d2ab4(void *);
extern void FUN_020d2b30(void *, const char *, int);
extern void FUN_020d2b88(void *, int, int);

int FUN_020d48fc(struct SelfD48FC *self, const char *buf, int len) {
    int p58;
    int p50;
    int total;
    if (len < 2 || FUN_020015ac(buf + self->sub->f44, DAT_020feab4, 2) != 0) {
        if (FUN_020d3288(self, buf, len) == 0) {
            return 0;
        }
        return 1;
    }
    total = len + 2;
    if (FUN_020d2ab4(&self->f50) < total) {
        return 1;
    }
    p50 = self->f50;
    p58 = self->f58;
    if (self->sub->f40 == 2) {
        FUN_020d2b30(&self->f50, buf, 2);
    }
    FUN_020d2b30(&self->f50, DAT_020feab4, 2);
    FUN_020d2b30(&self->f50, buf + self->sub->f44, len - self->sub->f44);
    if (FUN_020d3288(self, (const void *)(p50 + p58), total) == 0) {
        return 0;
    }
    FUN_020d2b88(&self->f50, -1, total);
    return 1;
}
