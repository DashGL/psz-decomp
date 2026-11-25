// flags: -O4,s
typedef struct { int x, y; } Point;
extern char data_02192d68[];
extern const int data_0212d764[];
extern void FUN_overlay_4__02121f6c(void *);
extern void FUN_020c3788(void *, const signed char *, int, int, unsigned int);
extern void FUN_0208b52c(void *, void *, int, void *);
extern int FUN_0209ca8c(char *, void *, int);
extern void *FUN_02088c7c(void);

void FUN_overlay_4__02122c48(int *self) {
    char name[28];
    Point point, base;
    int i, y, index;
    if (!self[28]) {
        FUN_overlay_4__02121f6c(self);
        for (y = 0, i = 0; i < 5; i++, y += 13) {
            index = i + self[22];
            if (index < self[8]) {
                name[0] = 0;
                if (FUN_0209ca8c(name, data_02192d68 + index * 24, 0) == 1) {
                    FUN_020c3788((void *)self[27], (signed char *)name, 15, y, 2);
                    self[28] = 1;
                }
            }
        }
    }
    y = 0;
    i = 0;
    base = *(const Point *)(data_0212d764 + 9);
    for (; i < 5; i++, y += 13) {
        index = i + self[22];
        if (index < self[8]) {
            void *mgr;
            point = base;
            point.y = (y + 252) << 12;
            index *= 24;
            index = (int)(volatile int)index;
            mgr = FUN_02088c7c();
            FUN_0208b52c(mgr, data_02192d68 + index, *(int *)(data_02192d68 + index + 16), &point);
        }
    }
}
