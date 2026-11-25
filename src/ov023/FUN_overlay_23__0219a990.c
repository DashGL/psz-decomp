// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_020fc988;
extern int FUN_overlay_23__0219a364(void *, void *);
extern void FUN_02036348(void *, void *, void *);
extern void FUN_02036368(void *);
extern unsigned short FUN_0205cc08(int);

void FUN_overlay_23__0219a990(int *self) {
    Vec target;
    Vec direction;
    char *state = (char *)self[2];
    int *owner = (int *)self[1];
    unsigned angle;
    int flag;
    int *p;
    if (FUN_overlay_23__0219a364(state, &target)) {
        FUN_02036348(&direction, &target, owner + 14);
        direction.y = 0;
        FUN_02036368(&direction);
        angle = FUN_0205cc08(direction.z);
        if (direction.x < 0) {
            angle = (unsigned short)(65536 - angle);
        }
        *(unsigned short *)(self + 3) = angle;
    } else {
        *(unsigned short *)(self + 3) = 0;
    }
    p = (int *)(state + 0xf4);
    self[4] = p[1];
    self[5] = DAT_020fc988;
    self[6] = p[0];
    *(unsigned short *)(self + 7) = 0x38e;
    self[8] = 0;
    flag = !(self[6] <= DAT_020fc988);
    if (flag != 0) {
        self[8] |= 1;
    }
}
