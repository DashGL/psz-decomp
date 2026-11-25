// flags: -O4,s
extern void FUN_020c4434(void *);
extern void FUN_0200c938(void *, int);
extern void FUN_020783b0(void *);
typedef struct {
    int a;
    int b;
} Slot;
typedef struct {
    char s0[0x10];
    char s1[0x10];
    char pad20[0x44];
    unsigned char f64;
    unsigned char f65;
    unsigned char f66[2];
    int f68;
    char pad6c[0xc88];
    int fcf4;
    Slot slots[2][3];
    unsigned char fd28;
    unsigned char fd29;
    unsigned char fd2a;
    unsigned char fd2b;
    unsigned char fd2c;
    unsigned char fd2d;
    unsigned char fd2e;
    unsigned char fd2f;
    char pad_d30[6];
    unsigned char fd36;
    unsigned char fd37;
} Big;

void *FUN_020872d8(Big *s) {
    Slot *p; int j, i;
    FUN_020c4434(s->s0);
    FUN_020c4434(s->s1);
    s->f64 = 0;
    s->f65 = 100;
    FUN_0200c938(s->f66, 2);
    s->f68 = 0;
    s->fcf4 = 0;
    p = &s->slots[0][0];
    do {
        p->a = 0;
        p->b = -1;
        p++;
    } while (p < &s->slots[2][0]);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            s->slots[i][j].a = 0;
            s->slots[i][j].b = -1;
        }
    }
    s->fd2a = 0;
    s->fd2b = 0;
    s->fd2c = 0;
    s->fd2d = 0;
    s->fd2e = 0;
    s->fd2f = 0;
    s->fd36 = 0;
    s->fd37 = 0;
    FUN_020783b0(&s->fd28);
    return s;
}
