// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -O4,p

struct SelfD65A8 {
    int f0;
    unsigned char pad4[0x9c - 4];
    void (*fn9c)(int, const void *, int);
    unsigned char pada0[0xac - 0xa0];
    unsigned int fac;
    unsigned int fb0;
    int fb4;
    int fb8;
    unsigned char padbc[0x10c - 0xbc];
    int f10c;
};

extern const char DAT_020ff950[];
extern unsigned int FUN_020c7824(void);
extern void FUN_020d7568(struct SelfD65A8 *, int);
extern void FUN_020d751c(struct SelfD65A8 *);

void FUN_020d65a8(struct SelfD65A8 *self) {
    unsigned int now = FUN_020c7824();
    if (self->f0 == -1) {
        return;
    }
    if (self->fb8 > 0 && now - self->fac > 10000) {
        if (self->fb8 >= 4) {
            self->fb8 = 0;
            self->fn9c(5, DAT_020ff950, self->f10c);
            return;
        }
        FUN_020d7568(self, 3);
        self->fb8++;
    } else if (self->fb4 != 0 && now - self->fac > 10000) {
        FUN_020d7568(self, 1);
    } else if (now - self->fac > 60000 || self->fac == 0 || now < self->fac) {
        FUN_020d7568(self, 0);
    }
    if (FUN_020c7824() - self->fb0 > 20000) {
        FUN_020d751c(self);
    }
}
