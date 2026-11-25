// flags: -O4,s
extern void FUN_02040c0c(void *, int, int, int, int);
extern int FUN_overlay_27__0219a1f0(void *, void *);
extern void FUN_overlay_27__02199ae4(void *, void *);
extern int FUN_02040d2c(void *, int);
extern void FUN_02037924(void *);
extern int FUN_02036c34(void *);
void FUN_overlay_27__0219a7e0(int *self) {
    int *owner = (int *)self[1];
    int position[3];
    if (self[4] != 1) {
        if (self[3] > 0x1e000) {
            FUN_02040c0c(owner, 0, 5, 4096, 0);
            self[4] = 1;
            self[3] = 0;
        }
    } else {
        void *state = (void *)self[2];
        if (self[3] < 0xa000 && FUN_overlay_27__0219a1f0(state, position)) {
            FUN_overlay_27__02199ae4(owner, position);
        }
        if (FUN_02040d2c(owner, 0)) {
            FUN_02037924((void *)self[2]);
        }
    }
    self[3] += FUN_02036c34(owner);
}
