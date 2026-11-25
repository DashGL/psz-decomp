// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xcc, exact bytes and relocation targets.
// flags: -O4,p

struct SlotDB324 {
    unsigned char pad0[0x15];
    unsigned char f15;
    unsigned char pad16[0x2c - 0x16];
    unsigned short f2c;
    unsigned char pad2e[0xc0 - 0x2e];
};

struct SelfDB324 {
    unsigned char pad0[0x444];
    unsigned char f444[0x470 - 0x444];
    struct SlotDB324 slots[6];
    unsigned char pad_b90[0xcb8 - 0x8f0];
    unsigned char fcb8[0x52];
    unsigned char pad_d0a[1];
    unsigned char fd0b;
    unsigned char fd0c;
    unsigned char fd0d;
    unsigned char pad_d0e[5];
    unsigned char fd13;
    unsigned char fd14;
    unsigned char fd15;
};

extern unsigned char FUN_020db4e0(struct SelfDB324 *);
extern void FUN_020656b8(void *, int, int);
extern int FUN_020db66c(struct SelfDB324 *, int, void *);

int FUN_020db324(struct SelfDB324 *self) {
    struct SlotDB324 *slot = &self->slots[self->fd13];
    self->fd0d = FUN_020db4e0(self);
    FUN_020656b8(self->fcb8, 0, 0x52);
    if (FUN_020db66c(self, self->fd0d, self->fcb8) != 0) {
        self->fd0b = (unsigned char)((self->fd0b & ~0xc) | 4);
        if (!((slot->f2c >> 4) & 1)) {
            self->f444[self->fd13 * 4] = 3;
            return 9;
        }
        if (self->fd0d == 6 && slot->f15 == 0) {
            self->f444[self->fd13 * 4] = 3;
            return 9;
        }
    } else {
        self->fd0b &= ~0xc;
        if (((slot->f2c >> 4) & 1) == 1) {
            self->f444[self->fd13 * 4] = 3;
            return 9;
        }
    }
    self->fd15 = 0;
    self->fd14 = 0;
    return 8;
}
