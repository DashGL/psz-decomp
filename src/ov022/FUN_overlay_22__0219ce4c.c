// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_overlay_22__0219ce90(void *, int);
extern int FUN_overlay_22__0219ae68(void *, int, int, const Vec *);
int FUN_overlay_22__0219ce4c(unsigned char *p, int index, const Vec *position, int state) {
    if (index >= 0 && index < 2) {
        unsigned char *slot;
        FUN_overlay_22__0219ce90(p, index);
        slot = p + 116 + index * 20;
        *(int *)slot = state;
        *(int *)(slot + 4) = FUN_overlay_22__0219ae68(p, 17, 1, position);
        *(Vec *)(slot + 8) = *position;
        return 1;
    }
    return 0;
}
