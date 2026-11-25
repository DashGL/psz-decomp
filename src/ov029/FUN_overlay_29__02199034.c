//cpp
// flags: -O4,p
extern "C" {
extern void FUN_overlay_29__02199138(void *);
extern void FUN_02037910(void *, int);
}
extern "C" void FUN_overlay_29__02199034(int *self) {
    int eq = (self[2] == self[4]) ? 1 : 0;
    if (eq) {
        switch (self[19]) {
        case 0:
            FUN_overlay_29__02199138(self);
            FUN_02037910(self, self[15]);
            break;
        case 1:
            FUN_02037910(self, self[16]);
            break;
        case 2:
            FUN_02037910(self, self[17]);
            break;
        case 3:
            FUN_02037910(self, self[18]);
            break;
        }
    }
}
