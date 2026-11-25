// flags: -O4,s
extern int FUN_overlay_22__0219a5b8(void *);
int FUN_overlay_22__0219a278(void *self, int *vector) {
    int bound = 0;
    int changed;
    switch (FUN_overlay_22__0219a5b8(self)) {
    case 63:
        bound = 61440;
        break;
    case 65:
        bound = 61440;
        break;
    }
    changed = 0;
    if (vector[0] < -bound) {
        vector[0] = -bound;
        changed = 1;
    } else if (vector[0] > bound) {
        vector[0] = bound;
        changed = 1;
    }
    if (vector[1] < 0) {
        vector[1] = 0;
        changed = 1;
    }
    if (vector[2] < -bound) {
        vector[2] = -bound;
        changed = 1;
    } else if (vector[2] > bound) {
        vector[2] = bound;
        changed = 1;
    }
    return changed;
}
