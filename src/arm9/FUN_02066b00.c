// flags: -O4,p -noThumb
struct Thread66B00 {
    unsigned char pad[0x68];
    struct Thread66B00 *next;
    int f6c;
    int prio;
};
struct OSThreadState {
    unsigned char pad[0x28];
    struct Thread66B00 *current;
    struct Thread66B00 *list;
};
extern struct OSThreadState DAT_0211817c;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_020664d8(void);

static inline struct Thread66B00 *OS_GetCurrentThread(void) {
    return DAT_0211817c.current;
}
void FUN_02066b00(void) {
    struct Thread66B00 *cur = OS_GetCurrentThread();
    struct Thread66B00 *p;
    struct Thread66B00 *pre = 0;
    struct Thread66B00 *last = 0;
    int same = 0;
    int enable = FUN_020683d4();
    struct Thread66B00 *prev = 0;
    p = DAT_0211817c.list;

    while (p) {
        if (p == cur) {
            pre = prev;
        }
        if (cur->prio == p->prio) {
            last = p;
            same++;
        }
        prev = p;
        p = p->next;
    }
    if (same <= 1 || last == cur) {
        FUN_020683e8(enable);
        return;
    }
    if (!pre) {
        DAT_0211817c.list = cur->next;
    } else {
        pre->next = cur->next;
    }
    cur->next = last->next;
    last->next = cur;
    FUN_020664d8();
    FUN_020683e8(enable);
}
