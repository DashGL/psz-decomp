// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_overlay_22__0219cb68(void *, int, int);
extern void FUN_overlay_22__0219b274(void *, int, int);
extern void FUN_overlay_22__021981cc(void *, int, int);

void FUN_overlay_22__0219ee10(int *self) {
    int *state = (int *)self[2];
    int *owner = (int *)self[1];
    if (state && owner) {
        switch (**(signed char **)owner[5]) {
        case 63:
            FUN_overlay_22__0219cb68((void *)state[14], 3, 0);
            FUN_overlay_22__0219b274((void *)state[13], 3, 0);
            FUN_overlay_22__021981cc((void *)state[12], 1, 0);
            break;
        case 65: {
            int *source = (int *)state[12];
            unsigned short angle = *(unsigned short *)((char *)source + 0x2a);
            Vec position = *(Vec *)(source + 4);
            *(unsigned short *)(state[14] + 0x2a) = angle;
            *(Vec *)(state[14] + 0x10) = position;
            FUN_overlay_22__0219cb68((void *)state[14], 4, 0);
            *(unsigned short *)(state[13] + 0x2a) = angle;
            *(Vec *)(state[13] + 0x10) = position;
            FUN_overlay_22__0219b274((void *)state[13], 4, 0);
            FUN_overlay_22__021981cc((void *)state[12], 1, 0);
            break;
        }
        }
    }
}
