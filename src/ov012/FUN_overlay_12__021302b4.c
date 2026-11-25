// flags: -O4,s
extern int FUN_overlay_12__02130314(void *);
extern void FUN_overlay_12__02131fd0(void *, int);
extern void FUN_020c193c(int, int, int, int, int);
struct Self_021302b4 {
    int pad0[16];
    int f40;
    int f44;
    int pad1[2];
    int arr[17];
    int f94;
    int f98;
    int pad2[5];
    int fb0;
    int fb4;
};
int FUN_overlay_12__021302b4(struct Self_021302b4 *self) {
    int index;
    if (self->f40 != 1) return 0;
    if (self->f44 == 0) {
        index = self->fb0;
        if (self->arr[index] > 0) {
            self->f94 = index;
            self->f98 = self->fb4;
            FUN_overlay_12__02131fd0(self, FUN_overlay_12__02130314(self));
            return 1;
        }
        FUN_020c193c(0, 5, 0, 0, -1);
    }
    return 0;
}
