//cpp
// flags: -O4,s
extern "C" {
extern int FUN_overlay_17__0212301c(void *);
extern void FUN_overlay_17__02122828(void *);

int FUN_overlay_17__02123068(char *self) {
    int value = FUN_overlay_17__0212301c(self);
    while (*(signed char *)(self + 0x9d3c) == -117 || *(signed char *)(self + 0x9d3c) == -116) {
        switch (*(signed char *)(self + 0x9d3c)) {
        case -117:
            FUN_overlay_17__02122828(self);
            if ((FUN_overlay_17__0212301c(self) && value) ? 1 : 0) {
                value = 1;
            } else {
                value = 0;
            }
            break;
        case -116:
            FUN_overlay_17__02122828(self);
            if ((FUN_overlay_17__0212301c(self) || value) ? 1 : 0) {
                value = 1;
            } else {
                value = 0;
            }
            break;
        }
    }
    *(int *)(self + 0x9d40) = value;
    return *(int *)(self + 0x9d40);
}
}
