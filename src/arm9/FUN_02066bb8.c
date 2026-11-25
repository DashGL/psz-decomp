// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Thread29 {
    char pad[0x68];
    struct Thread29 *next;
    int f6c;
    int prio;
};
struct ThreadSys29 {
    char pad[0x2c];
    struct Thread29 *head;
};
extern struct ThreadSys29 DAT_0211817c;
extern struct Thread29 DAT_021181b0;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_02066430(struct Thread29 *);
extern void FUN_020664d8(void);

int FUN_02066bb8(struct Thread29 *param_1, int param_2) {
    struct Thread29 *cur = DAT_0211817c.head;
    struct Thread29 *prev = 0;
    int irq = FUN_020683d4();
    while (cur != 0 && cur != param_1) {
        prev = cur;
        cur = cur->next;
    }
    if (cur == 0 || cur == &DAT_021181b0) {
        FUN_020683e8(irq);
        return 0;
    }
    if (cur->prio != param_2) {
        if (prev == 0) {
            DAT_0211817c.head = param_1->next;
        } else {
            prev->next = param_1->next;
        }
        param_1->prio = param_2;
        FUN_02066430(param_1);
        FUN_020664d8();
    }
    FUN_020683e8(irq);
    return 1;
}
