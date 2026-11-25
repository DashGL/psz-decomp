// flags: -O4,s -noThumb
struct Node {
    char pad[0xc];
    void (*fc)(unsigned int *, struct Node *, unsigned int);
    struct Node *f10;
    char pad2[5];
    unsigned char f19;
    unsigned short f1a[1];
};

int FUN_02019ea4(unsigned int *r7, struct Node *r6, unsigned int r5) {
    unsigned int sp0;
    int r0 = 0;
    *r7 = 0;
    do {
        if (r5 < r6->f19) {
            unsigned short v = r6->f1a[r5];
            if ((v & 0x300) == 0x100 && r6->fc != 0) {
                r6->fc(&sp0, r6, v & 0xff);
                *r7 |= sp0;
                r0 = 1;
            }
        }
        r6 = r6->f10;
    } while (r6 != 0);
    return r0;
}
