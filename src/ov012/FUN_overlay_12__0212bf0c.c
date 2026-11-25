//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0203a1fc(void *);
extern int FUN_02084900(void *);
extern void FUN_0203955c(void *);
extern void FUN_02084a1c(void *, int);
}
struct Item_0212bf0c {
    int f[5];
};
extern "C" int FUN_overlay_12__0212bf0c(struct Item_0212bf0c *p, int index, int count) {
    if (count >= 0 && index >= 0 && index < 8) {
        struct Item_0212bf0c *r = &p[index];
        if (((FUN_0203a1fc(r) == 0) ? 1 : 0) != 0 && FUN_02084900(r)) {
            if (count == 0 && index != 7) {
                r->f[4] = -1;
                FUN_0203955c(r);
            } else {
                FUN_02084a1c(r, count);
            }
            return 1;
        }
    }
    return 0;
}
