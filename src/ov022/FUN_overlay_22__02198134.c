//cpp
// flags: -O4,s
struct Obj;
typedef void (Obj::*StateFn)(void);
struct StateEntry {
    StateFn fn;
    int pad[4];
};
extern "C" {
extern const StateEntry DAT_021a10c4[];
extern void FUN_overlay_22__02198a3c(void *, int);
extern void FUN_overlay_22__02198450(void *);
extern void FUN_overlay_22__021987c0(void *);
void FUN_overlay_22__02198134(char *self) {
    StateFn fn = DAT_021a10c4[*(unsigned *)(self + 0x44)].fn;
    int state, enabled, active;
    if (fn) {
        (((Obj *)self)->*fn)();
    }
    state = *(int *)(self + 0x44);
    enabled = 1;
    switch (state) {
    case 0:
    case 1:
        enabled = 0;
        break;
    }
    FUN_overlay_22__02198a3c(self, enabled);
    FUN_overlay_22__02198450(self);
    FUN_overlay_22__021987c0(self);
    if (*(int *)(self + 0x48) < 0x7fffffff) (*(int *)(self + 0x48))++;
    state = *(int *)(self + 0x44);
    active = 0;
    if (state != 0 && state != 1 && state != 2) active = 1;
    if (active == 1) {
        if (*(int *)(self + 0x140) < *(int *)(self + 0x13c)) (*(int *)(self + 0x140))++;
    }
}
}
