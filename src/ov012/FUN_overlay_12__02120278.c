// flags: -O4,s
extern int FUN_overlay_12__021206b4(void *), FUN_020bbf94(unsigned);
extern void FUN_020c193c(int, int, int, int, int);

void FUN_overlay_12__02120278(int *self) {
    signed char count;
    int i, old;
    if (self[1] <= 1) return;
    count = 0;
    for (i = 0; i < self[1]; i++) {
        if (*(unsigned short *)((char *)self + (unsigned)i * 288 + 712) == 2) count++;
    }
    if (count >= self[1]) return;
    if (!FUN_overlay_12__021206b4(self)) return;
    old = self[3];
    if (FUN_020bbf94(128)) {
        self[3] += 1;
        for (;;) {
            if (self[3] > self[1] - 1) { self[3] = 0; continue; }
            if (*(int *)((char *)self + (unsigned)self[3] * 288 + 992)) break;
            self[3] += 1;
        }
        if (old != self[3]) FUN_020c193c(0, 2, 0, 0, -1);
    }
}
