// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
extern const Pair DAT_021219a0;
extern void *FUN_overlay_14__02121414(void *);
void *FUN_overlay_14__02121770(unsigned int *p) {
    const Pair *d = &DAT_021219a0;
    p[0] = 0;
    p[1] = 0;
    *(Pair *)(p + 2) = *d;
    p[4] = 0;
    FUN_overlay_14__02121414(p);
    return p;
}
