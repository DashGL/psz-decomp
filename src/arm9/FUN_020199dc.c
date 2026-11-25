// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct Node_199dc {
    int f0[3];
    void (*fc)(void *, struct Node_199dc *, int);
    struct Node_199dc *f10;
    int f14;
    char f18;
    unsigned char f19;
    unsigned short f1a[1];
} Node_199dc;
int FUN_020199dc(void *a, Node_199dc *b, unsigned int c) {
    int r0 = 0;
    if (b == 0) {
        return 0;
    }
    do {
        if (c < b->f19) {
            unsigned short v = b->f1a[c];
            if ((v & 0x300) == 0x100 && b->fc != 0) {
                b->fc(a, b, v & 0xff);
                r0 = 1;
            }
        }
        b = b->f10;
    } while (b != 0);
    return r0;
}
