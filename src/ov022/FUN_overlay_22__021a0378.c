// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void *DAT_0210e24c;
extern void FUN_overlay_22__0219cac4(void *);
extern void FUN_overlay_22__0219b1ec(void *);
extern void FUN_overlay_22__02198134(void *);
extern int FUN_02040d2c(void *, int);
extern void FUN_02051128(void *);
extern void *FUN_02096488(void);
extern void FUN_02096b08(void *, int);
extern void FUN_02037910(void *, int);

void FUN_overlay_22__021a0378(int *self) {
    int *owner = (int *)self[1];
    if (owner) {
        FUN_overlay_22__0219cac4((void *)self[14]);
        FUN_overlay_22__0219b1ec((void *)self[13]);
        FUN_overlay_22__02198134((void *)self[12]);
        if (self[2] == self[25]) {
            if (FUN_02040d2c(owner, 0) == 1) {
                FUN_02051128(DAT_0210e24c);
                FUN_02096b08(FUN_02096488(), owner[3]);
                switch (**(signed char **)owner[5]) {
                case 63:
                    FUN_02037910(self, self[28]);
                    break;
                case 65:
                    FUN_02037910(self, self[27]);
                    break;
                }
            }
        } else if (self[2] == self[27]) {
            if (self[18] == 1) {
                self[18] = 0;
                FUN_02037910(self, self[28]);
            }
        } else if (self[2] == self[28]) {
            if (((self[19] == 2 && self[20] == 2) ? E1 : E0) == 1) {
                FUN_02037910(self, self[27]);
                self[19] = 0;
                self[20] = 0;
            }
        }
    }
}
