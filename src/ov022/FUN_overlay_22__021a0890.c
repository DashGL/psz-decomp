// flags: -O4,s
typedef struct { int x, y, z; } Vec_0890;
extern void FUN_overlay_22__0219cb68(void *, int, int);
extern void FUN_overlay_22__0219b274(void *, int, int);
extern void FUN_overlay_22__021981cc(void *, int, int);

void FUN_overlay_22__021a0890(int *self, void *unused, int *controller) {
    int *source = (int *)controller[12];
    unsigned short angle = ((unsigned short *)source)[21];
    Vec_0890 position = *(Vec_0890 *)(source + 4);
    int *target;
    self[3] = 0;
    target = (int *)controller[14];
    ((unsigned short *)target)[21] = angle;
    target = (int *)controller[14];
    *(Vec_0890 *)(target + 4) = position;
    switch (*(signed char *)controller[15]) {
    case 1:
        FUN_overlay_22__0219cb68((void *)controller[14], 16, 0);
        break;
    case 0:
    default:
        FUN_overlay_22__0219cb68((void *)controller[14], 15, 0);
        break;
    }
    target = (int *)controller[13];
    ((unsigned short *)target)[21] = angle;
    target = (int *)controller[13];
    *(Vec_0890 *)(target + 4) = position;
    FUN_overlay_22__0219b274((void *)controller[13], 13, 0);
    FUN_overlay_22__021981cc((void *)controller[12], 1, 0);
}
