// flags: -O4,s
typedef struct { int a; int pad[5]; } Entry;
extern const Entry DAT_0213bf70[];
extern void FUN_overlay_12__02131f88(void *);
extern void FUN_020c193c(int, int, int, int, int);
typedef void (*Cb)(void);
typedef struct {
    int pad[16];
    int mode;
    int pad2[3];
    int idx;
    int pad3;
    Cb cb0;
    Cb cb1;
} Obj;
int FUN_overlay_12__0212c570(Obj *self) {
    if (DAT_0213bf70[self->idx].a) {
        if (self->mode == 1) {
            if (self->cb1) self->cb1();
        } else {
            if (self->cb0) self->cb0();
        }
        FUN_overlay_12__02131f88(self);
        return 1;
    }
    FUN_020c193c(0, 5, 0, 0, -1);
    return 0;
}
