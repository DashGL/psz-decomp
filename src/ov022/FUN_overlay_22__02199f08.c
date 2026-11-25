// flags: -O4,s
extern int FUN_overlay_22__0219a110(void *);
extern int FUN_overlay_22__0219a130(void *);
extern void FUN_overlay_22__0219ad70(void *, int);
extern void FUN_overlay_22__0219a070(void *, int);
extern void FUN_overlay_22__0219a0f4(void *, int);
extern void FUN_overlay_22__021989ec(void *, int, int);
extern void FUN_overlay_22__021981cc(void *, int, int);
void FUN_overlay_22__02199f08(int *self) {
    int delay = 30 * ((signed char *)((int *)self[2])[15])[1];
    switch (FUN_overlay_22__0219a110(self)) {
    case 39:
        if (FUN_overlay_22__0219a130(self)) {
            FUN_overlay_22__0219ad70(self, 20);
            FUN_overlay_22__0219a070(self, 1);
            FUN_overlay_22__0219a0f4(self, 40);
        }
        break;
    case 40:
        if (self[18] >= delay) {
            FUN_overlay_22__021989ec(self, 1, 1);
            FUN_overlay_22__0219a0f4(self, 41);
        }
        break;
    case 41:
        break;
    default:
        FUN_overlay_22__021981cc(self, 3, 0);
        break;
    }
}
