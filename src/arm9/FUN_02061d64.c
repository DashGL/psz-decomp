// flags: -O4,p -noThumb
typedef struct {
    unsigned int base;
    unsigned int size;
    unsigned int addr;
    signed char seg;
} Out;

typedef struct {
    unsigned int addrs[3];
    unsigned short starts[3];
    unsigned short total;
} Desc;

typedef struct {
    unsigned int base;
    unsigned int unk4;
    unsigned int size;
    unsigned int unkC;
} SegInfo;

typedef struct {
    unsigned int pad[3];
    SegInfo segs[3];
} Source;

extern unsigned char *DAT_021180ac;

int FUN_02061d64(Out *out, const Desc *desc, unsigned int index, const Source *source) {
    signed char seg;
    unsigned int delta;
    const SegInfo *p;
    unsigned int rem;
    unsigned int off;

    if (index >= desc->total) {
        return 0;
    }
    for (seg = 2; seg >= 0; seg--) {
        if (index >= desc->starts[seg]) {
            break;
        }
    }
    if (seg < 0) {
        return 0;
    }
    off = index - desc->starts[seg];
    delta = off * *(unsigned int *)(DAT_021180ac + 0x1318);
    p = &source->segs[seg];
    rem = p->size - delta;
    out->size = rem;
    if (rem > *(unsigned int *)(DAT_021180ac + 0x1318)) {
        out->size = *(unsigned int *)(DAT_021180ac + 0x1318);
    }
    out->addr = delta + desc->addrs[seg];
    out->base = delta + p->base;
    out->seg = seg;
    return 1;
}
