// flags: -O4,p -noThumb
extern void FUN_0200fc3c(void);
extern void *FUN_0200f18c(void *, unsigned int, void (*)(void), void *, unsigned int);
extern unsigned int FUN_0200eef8(void *, void *, unsigned int, unsigned int);
extern void FUN_020673f0(void *, unsigned int);
extern int FUN_0206a6dc(void *, unsigned int);
extern unsigned int FUN_0206a6a0(void *);
extern void FUN_0206a6a8(void *, unsigned int, void *);

int FUN_0200fc84(unsigned char *self, unsigned int slot, void *index, void *owner) {
    unsigned int size;
    unsigned int start;
    void *buf;

    if (FUN_0206a6dc(self, slot)) {
        return 1;
    }
    {
        unsigned int count = FUN_0206a6a0(self);
        unsigned int *rec = (unsigned int *)(self + ((*(unsigned int *)(self + 0x38) + slot) << 2));
        start = rec[0x3c / 4];
        size = ((slot < count - 1) ? rec[0x40 / 4] : *(unsigned int *)(self + 8)) - start;
    }
    if (owner == 0) {
        return 0;
    }
    buf = FUN_0200f18c(owner, size + 0x20, FUN_0200fc3c, self, slot);
    if (buf == 0) {
        return 0;
    }
    if (FUN_0200eef8(index, buf, size, start) != size) {
        return 0;
    }
    FUN_020673f0(buf, size);
    FUN_0206a6a8(self, slot, buf);
    return 1;
}
