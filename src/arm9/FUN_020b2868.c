// flags: -O4,s
extern void FUN_020834f0(void *);
extern void FUN_02083504(void *, void *);
extern void FUN_020b2430(void *);
extern void FUN_020b2444(void *, int, int);
extern signed char *FUN_02083518(void *);
extern signed char *FUN_020b23d4(void *, int);
extern int FUN_020825f8(void *, int, int);
extern int FUN_020834c0(int);

void FUN_020b2868(void **s, void *out, signed char *initial, int direction) {
    unsigned int list[21];
    signed char *entry; int i; signed char depth; int index; signed char *next;

    FUN_020834f0(list);
    initial[14] = 0;
    initial[15] = direction;
    FUN_02083504(list, initial);
    FUN_020b2430(out);

    for (;;) {
        int blocked;
        entry = FUN_02083518(list);
        if (entry == 0) break;
        blocked = !!(((unsigned char *)entry)[0] & 0xc);
        if (blocked != 0) continue;
        depth = entry[14];
        if (depth > 0 && ((unsigned char *)entry)[5] < 2) {
            FUN_020b2444(out, depth, entry[1]);
        }
        if (entry[14] >= 2) continue;
        for (i = 0; i < 4; i++) {
            index = entry[16 + i];
            if (index >= 0 && i != entry[15] && !FUN_020825f8(entry, i, 7)) {
                next = FUN_020b23d4(*s, index);
                if (next) {
                    next[14] = (signed char)(depth + 1);
                    next[15] = FUN_020834c0(i);
                    FUN_02083504(list, next);
                }
            }
        }
    }
}
