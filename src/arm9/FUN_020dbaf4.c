// flags: -O4,p
typedef struct {
    unsigned char pad0[0x40];
    unsigned char s1[0x20];
    unsigned char s2[0x20];
    unsigned char pad80[0x67];
    unsigned char flag;
    unsigned char padE8[0x18];
} Slot;

typedef struct {
    unsigned char b0;
    unsigned char id;
    unsigned char b2;
    unsigned char len;
    unsigned char data[0x20];
} OutRec;

typedef struct {
    Slot slots[3];
    OutRec outs[32];
    unsigned char pad780[0x58c];
    unsigned char sel : 4;
} Self;

static inline int copy_slot(OutRec *out, unsigned char *src, unsigned char id) {
    unsigned char j;
    for (j = 0; j < 0x20; j++) {
        unsigned char c = src[j];
        if (c == 0) break;
        out->data[j] = c;
    }
    if (j != 0) {
        out->len = j;
        out->id = id;
        return 1;
    }
    return 0;
}

unsigned char FUN_020dbaf4(Self *self) {
    int i;
    unsigned char count = 0;
    Slot *slot = self->slots;
    OutRec *out = self->outs;
    for (i = 0; i < 3; i++, slot++) {
        unsigned int sel = self->sel;
        if (sel != 0 && sel != i + 1) continue;
        if (slot->flag == 0xff) continue;
        if (copy_slot(out, slot->s1, (unsigned char)i)) {
            count++;
            out++;
        }
        if (slot->flag == 1) {
            if (copy_slot(out, slot->s2, (unsigned char)(i + 3))) {
                count++;
                out++;
            }
        }
    }
    return count;
}
