// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern struct Node {
    struct Node *next;
    void (*fn)(unsigned int);
    unsigned int arg;
} *DAT_02101dd0;

void FUN_0205a934(unsigned int *a0) {
    for (;;) {
        struct Node *r4 = 0;
        struct Node *r5 = 0;
        unsigned int r6 = a0[1];
        unsigned int r7 = r6 + (a0[2] + a0[3]);
        int irq = FUN_020683d4();
        struct Node *ip = 0;
        struct Node *lr = DAT_02101dd0;
        struct Node *r8 = lr;
        while (r8 != 0) {
            struct Node *sb;
            unsigned int sl;
            void (*r3)(unsigned int);
            sl = r8->arg;
            sb = r8->next;
            r3 = r8->fn;
            if ((sl == 0 && (unsigned int)r3 >= r6 && (unsigned int)r3 < r7) || (sl >= r6 && sl < r7)) {
                if (r5 != 0) {
                    r5->next = r8;
                } else {
                    r4 = r8;
                }
                if (lr == r8) {
                    DAT_02101dd0 = sb;
                    lr = sb;
                }
                r8->next = 0;
                r5 = r8;
                if (ip != 0) {
                    ip->next = sb;
                }
            } else {
                ip = r8;
            }
            r8 = sb;
        }
        FUN_020683e8(irq);
        if (r4 == 0) {
            return;
        }
        do {
            void (*fn)(unsigned int) = r4->fn;
            r5 = r4->next;
            if (fn != 0) {
                fn(r4->arg);
            }
            r4 = r5;
        } while (r5 != 0);
    }
}
