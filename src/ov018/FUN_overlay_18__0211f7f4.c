// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
extern const Pair DAT_0212369c;
extern void *FUN_overlay_18__0211f41c(void *);
void *FUN_overlay_18__0211f7f4(unsigned int *p) {
    const Pair *d = &DAT_0212369c;
    p[0] = 0;
    p[1] = 0;
    *(Pair *)(p + 2) = *d;
    p[4] = 0;
    FUN_overlay_18__0211f41c(p);
    return p;
}
