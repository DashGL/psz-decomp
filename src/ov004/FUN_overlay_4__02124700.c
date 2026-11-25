// flags: -O4,s
typedef struct { int x, y; } Pair;
typedef struct { unsigned short h[4]; int xy[2]; } Draw;
typedef struct { int item[4]; int idx; int pad[5]; } Entry;
extern Pair data_0212d860;
extern int data_0212d840[];
extern char data_02195304[];
extern void *FUN_0208f068(void), *FUN_02077930(void), *FUN_02088c7c(void);
extern int FUN_02077d98(void *), FUN_0203a1fc(void *), FUN_0209ca8c(char *, void *, int);
extern const signed char *FUN_0208efa8(void *, int, int, int);
extern void FUN_02071d0c(Draw *), FUN_020c38f0(void *, int), FUN_020c3788(void *, const void *, int, int, int), FUN_0208b52c(void *, void *, int, Pair *), FUN_overlay_4__02124990(void *, int);

void FUN_overlay_4__02124700(char *self) {
    Draw unused;
    char head[27];
    char name[27];
    Pair xy;
    void *base;
    int y;
    int table;
    int i;
    int index;

    if (*(int *)(self + 220) < 0 || *(int *)(self + 220) >= 7) return;
    base = FUN_0208f068();
    if (!base) return;
    table = FUN_02077d98(FUN_02077930());
    FUN_02071d0c(&unused);
    if (*(int *)(self + 204)) {
        FUN_020c38f0(*(void **)(self + 200), 0);
        if (FUN_0203a1fc(self + 4 + 28 * *(int *)(self + 220))) {
            FUN_020c3788(*(void **)(self + 200), FUN_0208efa8(base, table, 2, 0), 15, 0, 2);
        } else {
            head[0] = 0;
            if (FUN_0209ca8c(head, self + 4 + 28 * *(int *)(self + 220), 0) == 1) {
                FUN_020c3788(*(void **)(self + 200), head, 15, 0, 2);
            }
        }
    }
    {
        int off = *(int *)(self + 220) * 28;
        void *m = FUN_02088c7c();
        FUN_0208b52c(m, self + 4 + off, *(int *)(self + 24 + off), &data_0212d860);
    }
    xy = *(Pair *)&data_0212d840[8];
    xy.y += 0x15000;
    y = 0;
    for (i = 0; i < 4; i++) {
        index = i + *(int *)(self + 232);
        if (*(int *)(self + 204)) {
            if (index == *(int *)(self + 244) - 1) {
                FUN_020c3788(*(void **)(self + 200), FUN_0208efa8(base, table, 2, 1), 15, y + 21, 2);
            } else {
                name[0] = 0;
                if (FUN_0209ca8c(name, (Entry *)data_02195304 + index, 0) == 1) {
                    FUN_020c3788(*(void **)(self + 200), name, 15, y + 21, 2);
                }
            }
        }
        if (index < *(int *)(self + 244) - 1) {
            FUN_0208b52c(FUN_02088c7c(), (Entry *)data_02195304 + index, ((Entry *)data_02195304 + index)->idx, &xy);
            xy.y += 0xd000;
        }
        y += 13;
    }
    *(int *)(self + 204) = (*(int *)(self + 232) != *(int *)(self + 236)) ? 1 : 0;
    if (*(int *)(self + 244) > 4) {
        FUN_overlay_4__02124990(self, 1);
    }
}
