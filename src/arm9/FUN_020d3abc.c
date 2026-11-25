// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xba, exact bytes and relocation targets.
// flags: -O4,p

struct SubD3ABC {
    unsigned char pad[0x20];
    int f20;
};

struct SelfD3ABC {
    int f0;
    unsigned short f4;
    unsigned short f6;
    struct SubD3ABC *sub;
    int state;
    unsigned char pad10[0x58];
    unsigned char f68[0x24];
    int f8c;
};

extern int FUN_020d3828(struct SelfD3ABC *);
extern int FUN_020d2a70(const char *, void *);
extern int FUN_020d4ab0(struct SelfD3ABC *);
extern void FUN_020d3424(struct SelfD3ABC *);
extern int FUN_020c7824(void);
extern int FUN_020d2c48(struct SubD3ABC *, struct SelfD3ABC *, int, unsigned short, int, const char *, int);

int FUN_020d3abc(struct SelfD3ABC *self, const char *buf, int len) {
    if (self->state != 3) {
        return FUN_020d3828(self) != 0 ? 1 : 0;
    }
    if (len < 0x20) {
        return FUN_020d3828(self) != 0 ? 1 : 0;
    }
    if (FUN_020d2a70(buf, self->f68) == 0) {
        return FUN_020d3828(self) != 0 ? 1 : 0;
    }
    if (self->sub->f20 == 0) {
        if (FUN_020d4ab0(self) == 0) {
            return 0;
        }
        FUN_020d3424(self);
        return 1;
    }
    self->state = 4;
    if (FUN_020d2c48(self->sub, self, self->f0, self->f4, FUN_020c7824() - self->f8c, buf + 0x20, len - 0x20) != 0) {
        return 1;
    }
    return 0;
}
