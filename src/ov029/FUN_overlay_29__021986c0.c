//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02086a44(int);
extern void FUN_02037924(void *);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_overlay_29__02199138(void *);
extern int FUN_02036c34(void *);
extern int DAT_020fc988;
}
extern "C" void FUN_overlay_29__021986c0(int *self) {
    void *owner = (void *)self[1];
    int ready = (DAT_020fc988 >= self[4]) ? 1 : 0;
    if (ready) {
        int *state = (int *)self[2];
        if (FUN_02086a44(state[20]) == 1) {
            state[19] = self[3];
            FUN_02037924(state);
        } else {
            self[4] = (FUN_02035b60(41) + 30) << 12;
            FUN_overlay_29__02199138(state);
        }
    }
    self[4] -= FUN_02036c34(owner);
}
