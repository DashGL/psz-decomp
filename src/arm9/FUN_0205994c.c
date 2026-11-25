// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x124, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Obj5994c {
    unsigned char pad0[0x1c];
    unsigned int f1c;
    unsigned char pad20[0xc];
    int f2c;
    unsigned int f30;
    int f34;
    unsigned int f38;
    unsigned char pad3c[8];
    unsigned int f44;
    unsigned char pad48[8];
    void *f50;
};
extern void FUN_02059cd4(void *);
extern int FUN_02059efc(void *, void *, int, int, int);
extern int FUN_0205a150(void *, unsigned int, unsigned int);
extern void FUN_020656b8(unsigned int, int, unsigned int);
extern void FUN_02059ffc(void *);
extern void FUN_020591d0(void);

unsigned int FUN_0205994c(struct Obj5994c *self, unsigned int addr, unsigned int limit) {
    unsigned char buf[0x48];
    unsigned int req = (self->f30 + self->f38 + 0x3f) & ~0x1fu;
    if (req <= limit) {
        unsigned int aligned = (addr + 0x1f) & ~0x1fu;
        FUN_02059cd4(buf);
        if (FUN_02059efc(buf, self, self->f2c, self->f2c + self->f30, -1) != 0) {
            if (FUN_0205a150(buf, aligned, self->f30) < 0) {
                FUN_020656b8(aligned, 0, self->f30);
            }
            FUN_02059ffc(buf);
        }
        self->f2c = aligned;
        aligned += self->f30;
        if (FUN_02059efc(buf, self, self->f34, self->f34 + self->f38, -1) != 0) {
            if (FUN_0205a150(buf, aligned, self->f38) < 0) {
                FUN_020656b8(aligned, 0, self->f38);
            }
            FUN_02059ffc(buf);
        }
        self->f34 = aligned;
        self->f44 = addr;
        self->f50 = (void *)FUN_020591d0;
        self->f1c |= 4;
    }
    return req;
}
