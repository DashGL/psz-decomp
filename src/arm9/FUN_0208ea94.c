// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// flags: -O4,s

struct Self8EA94 {
    unsigned char pad[0x48];
    signed char *p48;
    unsigned char *p4c;
};

extern void *DAT_02108c54;
extern int DAT_0211a51c;
extern void *FUN_02031a74(void);
extern int FUN_020323fc(void *);
extern void FUN_02030da8(void *, void *);
extern int FUN_0208ee0c(int);
extern void FUN_02030d5c(void *, void *);
extern unsigned char *FUN_02030a98(void *, void *);
extern int FUN_02084c70(void *);
extern void FUN_0208eb54(void *, void *, int, int, int, int, int);
extern void FUN_020bce3c(void *);
extern void FUN_020c193c(int, int, int, int, int);

void FUN_0208ea94(struct Self8EA94 *self) {
    if (FUN_020323fc(FUN_02031a74()) != 0) {
        int sp10;
        unsigned char r4;
        unsigned char r7;
        signed char *p48;

        FUN_02030da8(&sp10, self);
        r4 = 0;
        r7 = 0;
        if (((*self->p4c & 1) ? 1 : 0) == 0) {
            r4 |= 1;
        }
        p48 = self->p48;
        if (p48[1] == 1) {
            int r6 = FUN_0208ee0c(p48[0]);
            unsigned char sp0c[4];
            FUN_02030d5c(sp0c, &sp10);
            sp0c[3] = (unsigned char)r6;
            if (((*FUN_02030a98(DAT_02108c54, sp0c) & 1) ? 1 : 0) == 0) {
                r4 |= 2;
                r7 = (unsigned char)r6;
            }
        }
        if (r4 != 0) {
            unsigned char sp14[0x10];
            int v = FUN_02084c70(&DAT_0211a51c);
            FUN_0208eb54(sp14, &sp10, 0, self->p48[2], r4, r7, v);
            FUN_020bce3c(sp14);
        }
    } else {
        FUN_020c193c(0, 5, 0, 0, -1);
    }
}
