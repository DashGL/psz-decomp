// flags: -O4,s
typedef struct {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    signed char f3;
    unsigned char pad[8];
    signed char x;
    signed char y;
} Cell;
extern void FUN_020834f0(void *);
extern void FUN_02083504(void *, void *);
extern void FUN_02083590(void *);
extern Cell *FUN_02083534(void *, unsigned);
extern Cell *FUN_02083564(void *);
extern Cell *FUN_02083544(void *);
void FUN_020822ac(char *s, int shuffle) {
    unsigned list[21]; unsigned best; unsigned count; unsigned i; Cell *selected; Cell *entry;
    FUN_020834f0(list);
    best = 0; selected = 0; count = *(unsigned *)(s + 176);
    for (i = 0; i < count; i++) {
        entry = FUN_02083534(s + 96, i);
        if (entry && ((entry->f0 & 4) ? 1 : 0) == 0 && entry->f2 == 1) {
            if ((unsigned)entry->f3 >= 4) FUN_02083504(list, entry);
            if ((unsigned)entry->f3 > best) { best = entry->f3; selected = entry; }
        }
    }
    if (list[20]) {
        if (shuffle) { FUN_02083590(list); selected = FUN_02083564(list); }
        else { selected = FUN_02083544(list); }
    }
    if (selected) {
        selected->f0 |= 8;
        *(int *)(s + 2184) = selected->x;
        *(int *)(s + 2188) = selected->y;
    }
}
