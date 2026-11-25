// flags: -O4,s
typedef struct { unsigned int a; } Single;
extern const Single DAT_020ed09c;
void *FUN_overlay_22__02197fd0(unsigned int *p) {
    const Single *d = &DAT_020ed09c;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    *(Single *)(p + 3) = *d;
    p[4] = 0;
    return p;
}
