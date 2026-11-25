// flags: -O4,p -noThumb
struct Node26d04 {
    struct Node26d04 *next;
    unsigned short len;
    unsigned short port;
    int ip;
    char data[1];
};
struct Sub26d04 {
    char pad00[0xfe];
    signed char ffe;
    char padff[1];
    struct Node26d04 *f100;
    struct Node26d04 * volatile f104;
    unsigned short f108;
    unsigned short f10a;
    char f10c[8];
};
struct Sock26d04 {
    char pad00[0x64];
    struct Sub26d04 *f64;
    char pad68[8];
    short f70;
};
extern void (**DAT_020f6968)(void *);
extern int FUN_020683d4(void);
extern void FUN_020669dc(void *);
extern int FUN_02027f8c(struct Sock26d04 *);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_020683e8(int);

static inline int IsConn(struct Sock26d04 *s) { int c = 0; if (s != 0) c = (s->f70 & 1) ? 1 : 0; return c; }

int FUN_02026d04(struct Sock26d04 *s, void *buf, int len, unsigned short *out_port, int *out_ip, int flags) {
    struct Sub26d04 *sub = s->f64;
    struct Node26d04 *node = sub->f104;
    int irq = FUN_020683d4();
    int ret;

    while ((node = sub->f104) == 0) {
        if ((flags & 1) == 0) {
            ret = -6;
            break;
        }
        FUN_020669dc(sub->f10c);
        if (FUN_02027f8c(s) != 0 || !IsConn(s)) { ret = -0x38; break; }
    }
    if (node != 0) {
        if (len > node->len) {
            len = node->len;
        }
        FUN_02065774(node->data, buf, len);
        if (out_port != 0) {
            *out_port = node->port;
        }
        if (out_ip != 0) {
            *out_ip = node->ip;
        }
        ret = node->len;
        if (sub->ffe == 0) {
            sub->f104 = node->next;
            if (node->next == 0) {
                sub->f100 = 0;
            }
            DAT_020f6968[7](node);
            sub->f108 -= ret;
        }
    }
    FUN_020683e8(irq);
    return ret;
}
