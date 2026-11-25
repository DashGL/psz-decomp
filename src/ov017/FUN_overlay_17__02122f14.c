// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_overlay_17__02122ec4(void *);
extern void FUN_overlay_17__02122828(void *);
int FUN_overlay_17__02122f14(signed char *self) {
    int value = FUN_overlay_17__02122ec4(self);
    if (self[0x9d3c] == '=') {
        FUN_overlay_17__02122828(self);
        value = (((value == FUN_overlay_17__02122ec4(self)) ? E1 : E0) != 0) ? 1 : 0;
    } else if (self[0x9d3c] == '>') {
        FUN_overlay_17__02122828(self);
        if (self[0x9d3c] == '=') {
            FUN_overlay_17__02122828(self);
            value = (((value >= FUN_overlay_17__02122ec4(self)) ? E1 : E0) != 0) ? 1 : 0;
        } else {
            value = (((value > FUN_overlay_17__02122ec4(self)) ? E1 : E0) != 0) ? 1 : 0;
        }
    } else if (self[0x9d3c] == '<') {
        FUN_overlay_17__02122828(self);
        if (self[0x9d3c] == '>') {
            FUN_overlay_17__02122828(self);
            value = (((value != FUN_overlay_17__02122ec4(self)) ? E1 : E0) != 0) ? 1 : 0;
        } else if (self[0x9d3c] == '=') {
            FUN_overlay_17__02122828(self);
            value = (((value <= FUN_overlay_17__02122ec4(self)) ? E1 : E0) != 0) ? 1 : 0;
        } else {
            value = (((value < FUN_overlay_17__02122ec4(self)) ? E1 : E0) != 0) ? 1 : 0;
        }
    }
    *(int *)(self + 0x9d40) = value;
    return *(int *)(self + 0x9d40);
}
