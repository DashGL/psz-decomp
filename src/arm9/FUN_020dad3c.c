// flags: -O4,p
typedef struct {
    char pad[0x17];
    unsigned char f17;
    char f18[10];
    unsigned char f22;
} Sub_dad3c;
typedef struct {
    int f0[3];
    Sub_dad3c *fc;
} G_dad3c;
extern G_dad3c DAT_0211dbb4;
extern unsigned int FUN_020dada0(unsigned int);
extern void *FUN_0202fe9c(int);
extern void FUN_020673d4(void *, int);
extern void FUN_020dc6ec(void *, char *);
extern void FUN_020656b8(void *, int, int);
void FUN_020dad3c(unsigned int value) {
    unsigned int r1 = DAT_0211dbb4.fc->f22;
    if (r1 == 0) {
        r1 = FUN_020dada0(value);
    }
    DAT_0211dbb4.fc->f17 = (unsigned char)r1;
    void *r4 = FUN_0202fe9c(0);
    if (r4 != 0) {
        FUN_020673d4(r4, 0x20);
        FUN_020dc6ec(r4, DAT_0211dbb4.fc->f18);
    }
    Sub_dad3c *p = DAT_0211dbb4.fc;
    int i = 0;
    Sub_dad3c *q = p;
    for (; i < 10; i++, q = (Sub_dad3c *)((char *)q + 1)) {
        if (q->f18[0] < 0x20 || q->f18[0] > 0x7e) {
            FUN_020656b8(p->f18, 0, 10);
            return;
        }
    }
}
