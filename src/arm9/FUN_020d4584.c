// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// flags: -O4,p

struct SubD4584 {
    unsigned char pad[0x40];
    int f40;
    int f44;
};

struct SelfD4584 {
    int f0;
    int f4;
    struct SubD4584 *sub;
    unsigned char pad[0x44];
    int f50;
    unsigned char pad54[0x10];
    unsigned short f64;
    unsigned short f66;
};

extern const char DAT_020feab4[];
extern int FUN_020d2ab4(void *);
extern int FUN_020d3834(struct SelfD4584 *);
extern int FUN_020d4538(struct SelfD4584 *, unsigned short, int);
extern void FUN_020d2b30(void *, const void *, int);
extern void FUN_020d2abc(void *, unsigned char);
extern void FUN_020d2af0(void *, unsigned short);

int FUN_020d4584(struct SelfD4584 *self, int a1, int len, int *out_err) {
    unsigned short rem = (unsigned short)(len - self->sub->f44);
    if (FUN_020d2ab4(&self->f50) < len) {
        if (FUN_020d3834(self) == 0) {
            return 0;
        }
        *out_err = 1;
        return 1;
    }
    if (FUN_020d4538(self, self->f64, len) == 0) {
        if (FUN_020d3834(self) == 0) {
            return 0;
        }
        *out_err = 1;
        return 1;
    }
    if (self->sub->f40 == 2) {
        FUN_020d2b30(&self->f50, &rem, self->sub->f44);
    }
    FUN_020d2b30(&self->f50, DAT_020feab4, 2);
    FUN_020d2abc(&self->f50, (unsigned char)a1);
    FUN_020d2af0(&self->f50, self->f64++);
    FUN_020d2af0(&self->f50, self->f66);
    *out_err = 0;
    return 1;
}
