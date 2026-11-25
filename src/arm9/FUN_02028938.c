// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_02065774(void *, void *, int);
extern void FUN_020683e8(int);

struct Entry {
    unsigned char buf0[0x20];
    unsigned char buf1[0x30];
    unsigned int tick;
    int a1;
    unsigned short a2;
    unsigned char flag;
    unsigned char pad;
};
extern struct Entry DAT_02108a88[4];

void FUN_02028938(char *a0, int a1, unsigned short a2) {
    int i;
    struct Entry *best;
    unsigned int max_diff;
    int irq;
    unsigned int now;
    irq = FUN_020683d4();
    now = (unsigned int)(FUN_02067e0c() >> 16);
    best = &DAT_02108a88[0];
    max_diff = 0;
    for (i = 0; i < 4; i++) {
        struct Entry *p = &DAT_02108a88[i];
        if (p->flag != 0 && a1 != 0 && a1 == p->a1 && a2 != 0 && a2 == p->a2) {
            best = p;
            break;
        }
        if (max_diff != 0xffffffffu) {
            if (p->flag == 0) {
                max_diff = 0xffffffffu;
                best = p;
            } else {
                unsigned int diff = now - p->tick;
                if (diff > max_diff) {
                    max_diff = diff;
                    best = p;
                }
            }
        }
    }
    FUN_02065774(a0 + 0x74, best->buf0, 0x20);
    FUN_02065774(a0, best->buf1, 0x30);
    best->tick = now;
    best->flag = 1;
    best->a1 = a1;
    best->a2 = a2;
    FUN_020683e8(irq);
}
