// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_overlay_28__0219bf40[];
extern int FUN_overlay_28__02198c10(void *, Vec *);
extern int FUN_02036c34(void *);
extern unsigned short FUN_overlay_28__02198660(void *, const Vec *);
extern void FUN_02037390(int *, const Vec *);
extern void FUN_02037924(void *);
void FUN_overlay_28__02198cd8(int *self) {
    char *owner;
    int *state;
    Vec origin, target, difference;
    unsigned angle;
    int firstDistance, secondDistance, delta;
    if (self[4] > self[3]) {
        owner = (char *)self[1];
        state = (int *)self[2];
        origin = *(Vec *)(owner + 56);
        if (!FUN_overlay_28__02198c10(state, &target)) {
            FUN_02037924((void *)self[2]);
        } else {
            difference.x = (unsigned)target.x - (unsigned)origin.x;
            difference.y = (unsigned)target.y - (unsigned)origin.y;
            difference.z = (unsigned)target.z - (unsigned)origin.z;
            angle = FUN_overlay_28__02198660(owner, &difference);
            if (state[22] >= 2) {
                FUN_02037390(&firstDistance, &difference);
                if (((firstDistance < DAT_overlay_28__0219bf40[0]) ? E1 : E0) != 0 && angle <= 8192) {
                    state[20] = 2;
                    FUN_02037924(state);
                    goto advance;
                }
            }
            if (state[22] >= 2) {
                FUN_02037390(&secondDistance, &difference);
                if (((secondDistance < DAT_overlay_28__0219bf40[2]) ? E1 : E0) != 0 && ((*(int *)(owner + 0x124) != 0) ? E1 : E0) == 0) {
                    state[20] = 1;
                    FUN_02037924((void *)self[2]);
                    goto advance;
                }
            }
            if (angle > 8192) {
                state[20] = 4;
                FUN_02037924((void *)self[2]);
            } else {
                state[20] = 3;
                FUN_02037924(state);
            }
        }
    }
advance:
    delta = FUN_02036c34((void *)self[1]);
    self[4] = (unsigned)self[4] + (unsigned)delta;
}
