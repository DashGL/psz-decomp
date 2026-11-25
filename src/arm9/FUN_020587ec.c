// flags: -O4,p -noThumb
enum { E0 = 0, E1 = 1 };

struct Sub587EC {
    unsigned char pad[0x14];
    int f14;
};

struct Dev587EC {
    unsigned char pad0[0xc];
    unsigned char fc[0x10];
    volatile unsigned int flags;
    int f20;
    struct Sub587EC *f24;
    unsigned char pad28[0x50 - 0x28];
    int (*fn50)(struct Dev587EC *, void *, int, int);
};

struct Self587EC {
    struct Dev587EC *dev;
    int offset;
};

extern int FUN_020683d4(void);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);

int FUN_020587ec(struct Self587EC *self, void *buf, int len) {
    struct Dev587EC *dev = self->dev;
    int res;

    dev->flags |= 0x200;
    res = dev->fn50(dev, buf, self->offset, len);
    switch (res) {
    case 0:
    case 1:
        dev->flags &= ~0x200u;
        break;
    case 6: {
        int irq = FUN_020683d4();
        if ((dev->flags & 0x200) ? E1 : E0) {
            do {
                FUN_020669dc(dev->fc);
            } while ((dev->flags & 0x200) ? E1 : E0);
        }
        FUN_020683e8(irq);
        res = dev->f24->f14;
        break;
    }
    }
    self->offset += len;
    return res;
}
