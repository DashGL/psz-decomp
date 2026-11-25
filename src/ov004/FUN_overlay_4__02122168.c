// flags: -O4,s
typedef struct {
    int f[6];
} Entry_02122168;
extern int data_02192d68[][6];
extern void FUN_overlay_4__0212306c(void *);
extern void FUN_overlay_4__02121f6c(void *);
extern void FUN_overlay_4__02122eec(void *);
extern void FUN_overlay_4__02122c48(void *);
extern void FUN_02088ee8(void *);
extern void *FUN_02088c7c(void);
void FUN_overlay_4__02122168(int *self) {
    int i, delta;
    FUN_overlay_4__0212306c(self);
    for (i = 0; i < 80; i++) {
        if (self[4] == data_02192d68[i][4]) {
            self[21] = i;
            delta = i - self[22];
            if (delta >= 5) self[22] = i - 4;
            if (delta < 0) self[22] = self[21];
            break;
        }
    }
    FUN_overlay_4__02121f6c(self);
    FUN_02088ee8(FUN_02088c7c());
    self[24] = 0;
    self[7] = self[6];
    self[6] = 4;
    FUN_overlay_4__02122eec(self);
    FUN_overlay_4__02122c48(self);
}
