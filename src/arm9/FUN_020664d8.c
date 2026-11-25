// flags: -O4,p -noThumb

struct Thread664D8 {
    unsigned char pad[0x64];
    int state;
};

struct State664D8 {
    void (*switch_cb)(struct Thread664D8 *, struct Thread664D8 *);
    int disable_sched;
    struct Thread664D8 **cur_ptr;
    unsigned char pad0c[0x26 - 0xc];
    unsigned short irq_depth;
    struct Thread664D8 *current;
};

struct Global664D8_A0 {
    unsigned short need_resched;
    unsigned short pad;
    int f4;
    int f8;
    void (*thread_cb)(struct Thread664D8 *, struct Thread664D8 *);
};

extern struct State664D8 DAT_0211817c;
extern struct Global664D8_A0 DAT_021181a0;
extern int FUN_02068438(void);
extern struct Thread664D8 *FUN_02066abc(void);
extern int FUN_02066e5c(struct Thread664D8 *);
extern void FUN_02066ea8(struct Thread664D8 *);

void FUN_020664d8(void) {
    struct Global664D8_A0 *g;
    struct Thread664D8 *cur;
    struct Thread664D8 *next;

    if (DAT_0211817c.disable_sched != 0) {
        return;
    }
    g = &DAT_021181a0;
    if (DAT_0211817c.irq_depth != 0 || FUN_02068438() == 0x12) {
        g->need_resched = 1;
        return;
    }
    cur = *DAT_0211817c.cur_ptr;
    next = FUN_02066abc();
    if (cur == next || next == 0) {
        return;
    }
    if (cur->state != 2 && FUN_02066e5c(cur) != 0) {
        return;
    }
    if (DAT_0211817c.switch_cb != 0) {
        DAT_0211817c.switch_cb(cur, next);
    }
    if (g->thread_cb != 0) {
        g->thread_cb(cur, next);
    }
    DAT_0211817c.current = next;
    FUN_02066ea8(next);
}
