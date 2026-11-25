// flags: -O4,p -noThumb
struct Msg_020576cc {
    int (*fn0)(struct Msg_020576cc *);
    void (*fn4)(struct Msg_020576cc *);
    int res;
    int pad[6];
};
struct Ctx_020576cc {
    char pad[0xc0];
    struct Msg_020576cc * volatile msg;
};
extern void FUN_020656b8(void *, int, int);
extern int FUN_020683d4(void);
extern void FUN_020669dc(int);
extern void FUN_020683e8(int);
extern void FUN_020667f4(void);
extern int DAT_021120e8[];

void FUN_020576cc(struct Ctx_020576cc *arg0) {
    struct Msg_020576cc msg;
    do {
        int irq;
        FUN_020656b8(&msg, 0, sizeof(msg));
        irq = FUN_020683d4();
        while (arg0->msg == 0) {
            FUN_020669dc(0);
        }
        msg = *arg0->msg;
        FUN_020683e8(irq);
        if (msg.fn0 != 0) {
            msg.res = msg.fn0(&msg);
        }
        irq = FUN_020683d4();
        *((unsigned char *)DAT_021120e8 + 0x26) = 0;
        if (msg.fn4 != 0) {
            msg.fn4(&msg);
        }
        if (DAT_021120e8[0] == 0) {
            break;
        }
        arg0->msg = 0;
        FUN_020683e8(irq);
    } while (1);
    FUN_020667f4();
}
