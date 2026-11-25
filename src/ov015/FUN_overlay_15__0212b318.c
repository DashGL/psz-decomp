// flags: -O4,p
extern int FUN_0205c700(int, int);
extern unsigned FUN_overlay_15__021362f8(void *, unsigned);
extern void FUN_overlay_15__02136368(void *);
extern void FUN_overlay_15__0212b380(int, int);
extern void FUN_overlay_15__0212b454(int, int);
extern void FUN_overlay_15__0212b4b0(void);
void FUN_overlay_15__0212b318(void) {
    char *g = (char *)0x0213e858;
    int count, first, i, idx;
    char *state;
    first = FUN_0205c700(*(unsigned short *)(g + 2), 28);
    state = *(char **)(g + 4);
    count = (unsigned char)state[81];
    FUN_overlay_15__021362f8(*(void **)(state + 12), 0);
    if (count > 5) count = 5;
    for (i = 0, idx = first; i < count; i++, idx++) FUN_overlay_15__0212b380(idx, i);
    for (i = 0, idx = first; i < count; i++, idx++) FUN_overlay_15__0212b454(idx, i);
    FUN_overlay_15__02136368(*(void **)(*(char **)(g + 4) + 12));
    FUN_overlay_15__0212b4b0();
}
