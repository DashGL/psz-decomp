// flags: -O4,s
typedef struct { unsigned int a, b; } Pair;
extern Pair DAT_020ebb98;
extern void FUN_0203955c(void *);
void FUN_overlay_4__0212331c(unsigned int *p) {
    FUN_0203955c(p);
    p[4] = ~0u;
    *(Pair *)(p + 5) = DAT_020ebb98;
    *(Pair *)(p + 7) = DAT_020ebb98;
    p[9] = 0;
}
