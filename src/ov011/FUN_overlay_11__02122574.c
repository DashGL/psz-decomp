// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
extern const Pair DAT_0212395c;
extern void *FUN_overlay_11__0212216c(void *);
void *FUN_overlay_11__02122574(unsigned int *p) {
    p[0] = 0;
    p[1] = 0;
    *(Pair *)(p + 2) = DAT_0212395c;
    p[4] = 0;
    FUN_overlay_11__0212216c(p);
    return p;
}
