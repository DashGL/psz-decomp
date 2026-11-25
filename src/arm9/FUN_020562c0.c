// flags: -O4,p -noThumb
struct Sub562c0 {
    int f00;
    int f04;
    int f08;
    int f0c;
    void *f10;
    int f14;
};

struct State562c0 {
    struct Sub562c0 *f00;
    char pad04[0x34];
    void (*f38)(void *);
    void *f3c;
    char pad40[0xc4];
    int f104;
    char pad108[0xc];
    unsigned int f114;
};

extern void FUN_02000c1c(void);
extern struct State562c0 DAT_021116a0;
extern int DAT_021181a0[];

extern void FUN_02000b9c(void (*)(void));
extern void FUN_02068728(void);
extern void FUN_02055b28(void);
extern int FUN_020683d4(void);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);
extern void FUN_02055c78(int);
extern void FUN_02056b88(struct State562c0 *, int, int);
extern void FUN_02066a2c(void *);
extern void FUN_02066a94(void *);

static inline void unlock_562c0(struct State562c0 *s) {
    void (*cb)(void *) = s->f38;
    void *cb_arg = s->f3c;
    int irq = FUN_020683d4();
    s->f114 &= ~0x4c;
    FUN_02066a2c((char *)s + 0x10c);
    if ((s->f114 & 0x10) != 0) {
        FUN_02066a94((char *)s + 0x44);
    }
    FUN_020683e8(irq);
    if (cb != 0) {
        cb(cb_arg);
    }
}

int FUN_020562c0(int a0) {
    struct State562c0 *s = &DAT_021116a0;
    int irq;

    FUN_02000b9c(FUN_02000c1c);
    if (a0 == 0) {
        FUN_02068728();
    }
    FUN_02055b28();
    irq = FUN_020683d4();
    while ((s->f114 & 4) != 0) {
        FUN_020669dc((char *)s + 0x10c);
    }
    s->f114 |= 4;
    s->f38 = 0;
    s->f3c = 0;
    FUN_020683e8(irq);
    FUN_02055c78(a0);
    DAT_021116a0.f104 = DAT_021181a0[1];
    FUN_02056b88(s, 2, 1);
    s->f00->f0c = 0;
    s->f00->f10 = (char *)s + 0x120;
    s->f00->f14 = 1;
    FUN_02056b88(s, 6, 1);
    unlock_562c0(s);
    return s->f00->f00 == 0 ? 1 : 0;
}
