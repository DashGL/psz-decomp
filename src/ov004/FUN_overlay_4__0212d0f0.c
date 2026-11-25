// flags: -O4,s
typedef struct {
    int pad0[18];
    int sel;
    int pad1;
    int vals[7];
    int anim[3];
    int dir;
} Menu;
extern int FUN_020bbf94(unsigned int);
extern void FUN_020c193c(int, int, int, int, int);
void FUN_overlay_4__0212d0f0(Menu *self, int count) {
    int n;
    if (count < 0 || count > 3) return;
    if (FUN_020bbf94(128)) {
        self->sel++;
        if (self->sel > 3) self->sel = 0;
        if (self->sel >= count) self->sel = 3;
        FUN_020c193c(0, 2, 0, 0, -1);
    } else if (FUN_020bbf94(64)) {
        self->sel--;
        if (self->sel >= count && self->sel != 3) self->sel = count - 1;
        if (self->sel < 0) self->sel = 3;
        FUN_020c193c(0, 2, 0, 0, -1);
    }
    if (self->sel < 0) self->sel = 0;
    if (self->sel >= count) return;
    if (FUN_020bbf94(16)) {
        n = self->sel;
        if (self->vals[n] >= 2) return;
        self->vals[n]++;
        self->anim[self->sel] = 3;
        self->dir = 1;
        FUN_020c193c(0, 2, 0, 0, -1);
    } else if (FUN_020bbf94(32)) {
        n = self->sel;
        if (self->vals[n] <= 0) return;
        self->vals[n]--;
        self->anim[self->sel] = 3;
        self->dir = 2;
        FUN_020c193c(0, 2, 0, 0, -1);
    }
}
