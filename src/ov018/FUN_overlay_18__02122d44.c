// flags: -O4,s
struct Mgr { unsigned int pad[16]; int *children[9]; unsigned int idx; };
extern struct Mgr *DAT_02108c84;
extern void FUN_0207944c(void *);
extern void FUN_020794d4(void *);
extern void FUN_overlay_18__02122f5c(void *, int);
void FUN_overlay_18__02122d44(int *self) {
    struct Mgr *manager = DAT_02108c84;
    int *object;
    if (manager) {
        object = manager->children[manager->idx];
        if (object) {
            FUN_0207944c(object);
            FUN_020794d4(object);
            object[48] = 0;
        }
    }
    if (!self[13]) {
        FUN_overlay_18__02122f5c(self, 1);
        self[13] = 1;
    }
}
