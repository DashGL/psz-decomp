// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned int a, b, c; } Record;
extern void *FUN_020be450(void);
extern Record *FUN_020be520(void *, int);
extern void FUN_020be534(void *, int, Record *);
void FUN_02044630(char *s, int index, int enabled) {
    char *p = *(char **)(s + 160) + 52 * index;
    int id;
    Record r;
    if (enabled) *(short *)(p + 32) |= 4;
    else *(short *)(p + 32) &= ~4;
    id = *(int *)p;
    if (id != -1) {
        r = *FUN_020be520(FUN_020be450(), id);
        if (((*(short *)(p + 32) & 4) ? E1 : E0) != 0) {
            r.c = 0;
        } else {
            r.c = 7;
        }
        FUN_020be534(FUN_020be450(), id, &r);
    }
}
