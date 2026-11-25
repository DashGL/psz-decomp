// flags: -O4,s
typedef struct { unsigned int w[40]; } Rec;
void FUN_overlay_17__0211f768(void *unused, Rec *p, unsigned int count) {
    Rec *end = p + count;
    do {
        p->w[0] = 0x292b2a17;
        p->w[3] = 0;
        p->w[6] = 0;
        p->w[7] = 0;
        p->w[8] = 0;
        p->w[9] = 0x1000;
        p->w[12] = 0;
        p++;
    } while (p < end);
}
