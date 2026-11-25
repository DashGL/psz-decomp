// flags: -O4,p
extern struct { int a, b; void *p; } DAT_02197f74;
extern const char DAT_0212ec84[];
extern unsigned char *DAT_02108d04;
extern void *FUN_020ba894(unsigned int), *FUN_020c2b50(void *);
extern void FUN_020c2c4c(void *), FUN_020c2bfc(void *, const void *, int, int, int);
void FUN_overlay_4__0212cc88(void) {
    void *p = FUN_020ba894(4);
    if (p) p = FUN_020c2b50(p);
    DAT_02197f74.p = p;
    DAT_02197f74.a = 0;
    FUN_020c2c4c(p);
    FUN_020c2bfc(DAT_02197f74.p, DAT_0212ec84, 7, 3, 5);
    if (DAT_02108d04) *(unsigned int *)(DAT_02108d04 + 592) |= 1;
}
