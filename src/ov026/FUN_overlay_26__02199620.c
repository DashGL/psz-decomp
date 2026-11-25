// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int DAT_0219b568, DAT_0219b56c;
extern int FUN_020370b8(void *, int, void *), FUN_02041474(void *, int);
extern void FUN_02037924(void *), FUN_0205c8cc(void *, void *), FUN_02091cc0(void *, void *, void *);
extern void FUN_overlay_26__02199730(void *, void *), FUN_overlay_26__02199770(void *, void *);
void FUN_overlay_26__02199620(int *self) {
    Vec direction, second, first;
    void *owner = (void *)self[1];
    int *state = (int *)self[2];
    if (!FUN_020370b8(owner, state[20], &direction)) { FUN_02037924(state); return; }
    if (direction.x || direction.y || direction.z) FUN_0205c8cc(&direction, &direction);
    FUN_02091cc0(&second, &direction, &DAT_0219b56c);
    FUN_02091cc0(&first, &direction, &DAT_0219b568);
    FUN_overlay_26__02199730(owner, &second);
    FUN_overlay_26__02199770(owner, &first);
    if (FUN_02041474(owner, 0)) FUN_02037924(state);
}
