// flags: -O4,s
typedef void (*Event)(void *, int);
extern void FUN_overlay_22__0219cb68(void *, int, void *);
extern void FUN_overlay_22__0219b274(void *, int, void *);
extern void FUN_02036f08(void *, unsigned);
extern void FUN_02037568(void *);
void FUN_overlay_22__021a06ec(void **self) {
    void **owner = (void **)self[1];
    void **states = (void **)self[2];
    if (owner && states) {
        int event = 5;
        void **manager;
        signed char kind = *(signed char *)*(void **)owner[5];
        if (kind == 0x3f) event = 5;
        else if (kind == 0x41) event = 4;
        manager = *(void ***)0x02108c84;
        if (manager && manager[22]) {
            void *child = manager[22];
            ((Event)(*(unsigned **)child)[22])(child, event);
        }
        FUN_overlay_22__0219cb68(states[14], 1, 0);
        FUN_overlay_22__0219b274(states[13], 1, 0);
        FUN_02036f08(owner, 1);
        FUN_02037568(owner);
    }
}
