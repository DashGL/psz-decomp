// flags: -O4,s
typedef struct {
    unsigned int w0;
    unsigned int w1;
    unsigned char rest[0x64];
} Entry17;

typedef struct {
    unsigned int count;
    char *off1;
    char *off2;
} Rec17;

extern void FUN_overlay_17__0211f794(void *, void *);

void FUN_overlay_17__0211f7d0(unsigned char *self, Rec17 *record) {
    Entry17 *p;
    Entry17 *end;
    record->off1 = (char *)record + (int)record->off1;
    record->off2 = (char *)record + (int)record->off2;
    FUN_overlay_17__0211f794(self, record->off1);
    p = (Entry17 *)record->off2;
    end = p + record->count;
    do {
        unsigned int v0 = p->w0;
        unsigned int low = (unsigned short)v0 + (unsigned short)(*(unsigned int *)(self + 0x2bd8) >> 3);
        unsigned int mode;
        unsigned int lo1;
        v0 &= 0xffff0000;
        v0 |= (unsigned short)low;
        p->w0 = v0;
        mode = (v0 & 0x1c000000) >> 26;
        mode = (unsigned int)(volatile unsigned int)mode;
        lo1 = p->w1 & 0x1fff;
        lo1 += *(unsigned int *)(self + 0x2bdc) >> (4 - (mode == 2));
        p->w1 = (p->w1 & 0xffffe000) | (lo1 & 0x1fff);
        p++;
    } while (p < end);
}
