// flags: -O4,s
extern int FUN_overlay_12__021206b4(void *);
extern int FUN_020bbf94(unsigned);
extern void FUN_020c193c(int, int, int, int, int);
void FUN_overlay_12__021201dc(int *self) {
    signed char count;
    int i, n = self[1], old;
    if (n <= 1)
        return;
    count = 0;
    for (i = 0; i < n; i++) {
        if (*(unsigned short *)((char *)self + (unsigned)i * 288 + 712) == 2)
            count++;
    }
    if (count >= n)
        return;
    if (!FUN_overlay_12__021206b4(self))
        return;
    old = self[3];
    if (FUN_020bbf94(64)) {
        self[3] += -1;
        for (;;) {
            if (self[3] < 0) {
                self[3] = self[1] - 1;
                continue;
            }
            if (*(int *)((char *)self + (unsigned)self[3] * 288 + 992))
                break;
            self[3] += -1;
        }
        if (old != self[3])
            FUN_020c193c(0, 2, 0, 0, -1);
    }
}
