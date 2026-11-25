// flags: -O4,s
typedef struct { signed char *pairs; unsigned count; } C342;
typedef struct { int a, b, c, d, e; } R342;
typedef struct {
    R342 head;
    int f14;
    signed char f18[4];
    signed char f1c[4];
    signed char f20[4];
    int f24;
    int f28;
    unsigned char f2c;
    unsigned char f2d;
    signed char f2e;
    signed char f2f;
    signed char f30;
    signed char f31;
    signed char f32;
    unsigned char f33;
} Rec;
typedef struct {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
    unsigned char f4;
    unsigned char f5;
    signed char f6, f7;
    int f8;
    signed char f0c;
    signed char f0d;
    signed char f0e, f0f;
    signed char f10[8];
    signed char f18;
    signed char f19;
} Cell;

extern unsigned char DAT_0211a51c[];
extern Cell *FUN_02083534(void *, unsigned);
extern int FUN_020826ec(void *, int *, void *, void *);
extern int FUN_020825f8(void *, int, int);
extern int FUN_020832b4(int);
extern int FUN_02082814(void *, int);
extern int FUN_02084be8(void *);
extern int FUN_02084c4c(void *);
extern int FUN_020c5cec(int);
extern C342 *FUN_020b748c(int);
extern unsigned FUN_02082628(void *, void *, int, void *, void *, int);
extern void FUN_0206d4bc(void *, int, int, int);
extern void FUN_0206d1ec(void *, int, int, int, int, int);
extern void FUN_02082614(void *, int, int);

int FUN_02082364(char *s, Rec *records, int count, int *settings)
{
    int selected = -1;
    int kind = -1;
    unsigned total = *(unsigned *)(s + 0xb0);
    unsigned i;
    int index;
    unsigned n;
    int order[2];
    int j, tmp;
    unsigned u, r;
    Cell *cell;
    Rec *entry;
    C342 *candidates;
    R342 previous;

    for (i = 0; i < total; i++) {
        cell = FUN_02083534(s + 0x60, i);
        if (!cell) continue;
        index = cell->f1;
        if (index < 0 || count <= index) return -1;
        entry = &records[index];
        if (!FUN_020826ec(s, &kind, &entry->f24, cell)) return -1;
        entry->f30 = cell->f19;
        if (entry->f30 != -1) {
            FUN_0206d4bc(entry, entry->f30, settings[0], settings[1]);
            if ((unsigned char)(signed char)(entry->f30 - 6) <= 1) {
                entry->f33 |= 2;
            }
        } else {
            candidates = FUN_020b748c(kind);
            if (!candidates->count) return -1;
            r = FUN_02082628(s, records, count, candidates, cell, kind);
            FUN_0206d1ec(entry, settings[0], settings[1], kind, candidates->pairs[2 * r], candidates->pairs[2 * r + 1]);
        }
        for (j = 0; j < 4; j++) {
            entry->f18[j] = cell->f10[j];
            if (FUN_020825f8(cell, j, 1)) FUN_02082614(entry, j, 1);
            if (FUN_020825f8(cell, j, 2)) FUN_02082614(entry, j, 2);
            if (FUN_020825f8(cell, j, 4)) FUN_02082614(entry, j, 4);
        }
        n = cell->f5;
        if (n > 2) n = 2;
        if (n != 0) {
            for (u = 0; u < 2; u++) order[u] = (signed char)u;
            for (u = 0; u < 2; u++) {
                r = FUN_020832b4(2);
                tmp = order[r];
                order[r] = order[u];
                order[u] = tmp;
            }
            for (u = 0; u < n; u++) entry->f20[u] = order[u];
        }
        entry->f2c = cell->f5;
        entry->f2d = cell->f4;
        entry->f2e = cell->f0c - *(int *)(s + 0x890);
        entry->f2f = cell->f0d - *(int *)(s + 0x898);
        entry->f14 = FUN_020832b4(-1);
        entry->f32 = cell->f18;
        entry->f31 = FUN_02082814(s, cell->f3);
        entry->f28 = cell->f8;
        switch (kind) {
        case 5:
            break;
        case 6:
            selected = index;
            break;
        }
    }
    if ((FUN_02084be8(DAT_0211a51c) || FUN_02084c4c(DAT_0211a51c)) && FUN_020c5cec(0) && selected >= 0 && selected < count) {
        entry = &records[selected];
        previous.a = entry->head.a;
        previous.b = entry->head.b;
        previous.c = entry->head.c;
        *(volatile int *)&previous.d = entry->head.d;
        *(volatile int *)&previous.e = entry->head.e;
        if (previous.c == 6) {
            FUN_0206d1ec(entry, previous.a, previous.b, 4, 0, 1);
            selected = -1;
        }
    }
    return selected;
}
