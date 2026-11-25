// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int FUN_overlay_22__0219a5b8(void *);
int FUN_overlay_22__0219a168(void *self, Vec *v) {
    int changed = 0, original, absoluteX, absoluteZ, excess;
    switch (FUN_overlay_22__0219a5b8(self)) {
    case 63:
        original = ((volatile Vec *)v)->x;
        if (original >= 0) absoluteX = original;
        else absoluteX = (int)(((long long)original * -4096 + 2048) >> 12);
        absoluteZ = v->z;
        if (absoluteZ < 0) absoluteZ = (int)(((long long)absoluteZ * -4096 + 2048) >> 12);
        excess = (unsigned)absoluteX + (unsigned)absoluteZ - 98304u;
        if (excess > 0) {
            excess /= 2;
            if (original > 0) v->x = v->x - excess;
            else v->x = v->x + excess;
            if (v->z > 0) v->z = (unsigned)v->z - (unsigned)excess;
            else v->z = (unsigned)v->z + (unsigned)excess;
            changed = 1;
        }
        if (v->x < -94208) { v->x = -94208; changed = 1; }
        else if (v->x > 94208) { v->x = 94208; changed = 1; }
        if (v->z < -94208) { v->z = -94208; changed = 1; }
        else if (v->z > 94208) { v->z = 94208; changed = 1; }
        break;
    case 65:
        if (v->x < -81920) { v->x = -81920; changed = 1; }
        else if (v->x > 81920) { v->x = 81920; changed = 1; }
        if (v->z < -81920) { v->z = -81920; changed = 1; }
        else if (v->z > 81920) { v->z = 81920; changed = 1; }
        break;
    }
    if (v->y < 0) { v->y = 0; changed = 1; }
    return changed;
}
