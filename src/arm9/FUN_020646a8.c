// flags: -O4,p -noThumb
typedef void (*Cb_020646a8)(void *);
struct Node_020646a8 {
    struct Node_020646a8 *next;
    unsigned int flags;
    Cb_020646a8 cb1;
    Cb_020646a8 cb2;
};
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_02066bb8(void *, unsigned int);
extern void FUN_020669dc(void *);
extern unsigned int FUN_02066c60(void *);
extern void FUN_020667f4(void);

#define HEAD_020646a8(p) (*(struct Node_020646a8 * volatile *)((char *)(p) + 0xc0))

void FUN_020646a8(char *arg0) {
    for (;;) {
        struct Node_020646a8 *head;
        int irq = FUN_020683d4();
        Cb_020646a8 cb2;
        unsigned int cur_p;
        unsigned int next_p;

        if (HEAD_020646a8(arg0) == 0) {
            do {
                FUN_02066bb8(arg0, 0);
                FUN_020669dc(0);
            } while (HEAD_020646a8(arg0) == 0);
        }
        head = HEAD_020646a8(arg0);
        HEAD_020646a8(arg0) = HEAD_020646a8(arg0)->next;
        FUN_02066bb8(arg0, head->flags >> 1);
        FUN_020683e8(irq);
        cb2 = head->cb1;
        if (cb2 != 0) {
            cb2(head);
        }
        irq = FUN_020683d4();
        cb2 = head->cb2;
        cur_p = FUN_02066c60(arg0);
        if (HEAD_020646a8(arg0) == 0) {
            next_p = 0;
        } else {
            if (cur_p < (HEAD_020646a8(arg0)->flags >> 1)) {
                next_p = HEAD_020646a8(arg0)->flags >> 1;
            } else {
                next_p = cur_p;
            }
        }
        if (next_p != cur_p) {
            FUN_02066bb8(arg0, next_p);
        }
        head->next = 0;
        head->flags &= ~1u;
        if (cb2 != 0) {
            cb2(head);
        }
        if ((char *)head == arg0 + 0xc4) {
            break;
        }
        FUN_020683e8(irq);
    }
    FUN_020667f4();
}
