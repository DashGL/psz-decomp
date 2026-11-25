// flags: -O4,s
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);
extern int FUN_overlay_28__021999d8(void *, void *);
extern int FUN_overlay_28__02199420(void *, void *, int);
extern int FUN_02036c34(void *);

void FUN_overlay_28__02199d98(int *self) {
    void *owner = (void *)self[1], *state = (void *)self[2];
    int target[3];
    if (FUN_02040d2c(owner, 0)) {
        switch (self[3]) {
        case 0:
            FUN_02040c0c(owner, 0, 5, 4096, 0);
            self[3] = 1;
            break;
        case 2:
            FUN_02037924((void *)self[2]);
            break;
        }
    }
    if (self[3] == 1) {
        if (FUN_overlay_28__021999d8(state, target))
            FUN_overlay_28__02199420(owner, target, 0x5000);
        if (self[5] > self[6]) {
            if (self[4] == 0) FUN_02040c0c(owner, 0, 6, 4096, 0);
            else FUN_02040c0c(owner, 0, 7, 4096, 0);
            self[3] = 2;
        }
        self[5] += FUN_02036c34(owner);
    }
}
