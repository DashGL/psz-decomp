// flags: -O4,p
struct S8 { unsigned int a, b; };
extern const struct S8 DAT_0211fa08[];
extern void FUN_overlay_13__0211f01c(void *);
void *FUN_overlay_13__0211f904(unsigned int *p) {
    p[8] = 0;
    p[9] = 0;
    *(struct S8 *)(p + 10) = DAT_0211fa08[1];
    p[12] = 0;
    FUN_overlay_13__0211f01c(p + 8);
    return p;
}
