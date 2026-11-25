// flags: -O4,p
extern void FUN_overlay_22__0219a05c(void *, int);
extern void FUN_02037924(void *);
void FUN_overlay_22__021a090c(int *p, int *owner, int *parent) {
    int t = *(signed char *)parent[15];
    int limit;
    if (t != 0 && t == 1) limit = 210;
    else limit = 90;
    if (p[3] >= limit) {
        FUN_overlay_22__0219a05c((void *)parent[14], 0);
        FUN_overlay_22__0219a05c((void *)parent[13], 0);
        owner[37] |= 0x10000;
        FUN_02037924(parent);
    } else {
        p[3]++;
    }
}
