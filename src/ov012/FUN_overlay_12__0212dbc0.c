// flags: -O4,s
extern int FUN_overlay_12__0212db9c(void *);
extern void FUN_overlay_12__02131fd0(void *, int);
extern void FUN_020c193c(int, int, int, int, int);
struct S_0212dbc0 {
    int pad0[16];
    int state;
    int idx;
    int timer;
    int f4c;
    int pad1[47];
    int limit[4];
};
int FUN_overlay_12__0212dbc0(struct S_0212dbc0 *self) {
    int timer;
    if (self->state != 1) return 0;
    timer = ++self->timer;
    if (timer * 5 >= self->limit[self->idx]) {
        if (!FUN_overlay_12__0212db9c(self)) {
            self->state = 2;
            FUN_overlay_12__02131fd0(self, 1);
            return 1;
        }
        self->timer = 0;
    }
    FUN_020c193c(6, 7, 0, 0, -1);
    self->f4c = 0;
    return 0;
}
