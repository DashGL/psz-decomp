// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int w[13]; } Record;
extern void *FUN_020be450(void);
extern Record *FUN_020be584(void *, int, int);
extern void FUN_020be58c(void *, int, int, Record *);

void FUN_020445a8(char *s, int index, int enabled) {
    char *p = *(char **)(s + 160) + 52 * index;
    int id;
    Record r;
    if (enabled) *(short *)(p + 32) |= 2;
    else *(short *)(p + 32) &= ~2;
    id = *(int *)p;
    if (id != -1) {
        r = *FUN_020be584(FUN_020be450(), id, 0);
        if (((*(short *)(p + 32) & 2) ? E1 : E0) != 0) r.w[1] |= 1;
        else r.w[1] &= ~1;
        FUN_020be58c(FUN_020be450(), id, 0, &r);
    }
}
