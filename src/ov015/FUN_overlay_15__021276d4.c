// flags: -O4,s
extern void FUN_overlay_15__02127674(void);
extern void FUN_overlay_15__02132190(int);
extern unsigned char *DAT_0213e7e0;
extern const signed char DAT_0213a19e[][4];

void FUN_overlay_15__021276d4(int direction) {
    unsigned char *state = DAT_0213e7e0;
    int previous = *(signed char *)(state + 99);
    int current;
    state[99] = DAT_0213a19e[previous][direction];
    state = DAT_0213e7e0;
    current = *(signed char *)(state + 99);
    if (current == 13 && (direction == 1 || direction == 3)) {
        state[100] = (unsigned char)previous;
    } else if (current == -1) {
        int old = *(signed char *)(state + 100);
        if (old == 1 || old == 10) state[99] = 10;
        else state[99] = 11;
    } else if (current == -2) {
        int old = *(signed char *)(state + 100);
        if (old == 1 || old == 10) state[99] = 1;
        else state[99] = 2;
    }
    FUN_overlay_15__02127674();
    FUN_overlay_15__02132190(8);
}
