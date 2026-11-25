// flags: -O4,s
extern void *FUN_overlay_12__02129fc4(void);
extern void *FUN_020b00ac(void *, int);
extern void *FUN_overlay_12__0212be04(void *, int);
extern int FUN_0203a1fc(void *);
extern int FUN_020849d4(void *);
extern int FUN_02084900(void *);
extern int FUN_overlay_12__0212be18(void *, int);

int FUN_overlay_12__0212be58(void *self, int slot, int index, void *item) {
    void *found;
    int quantity;
    int stackable;
    int valid;
    if (slot != 7) {
        found = FUN_020b00ac(FUN_overlay_12__02129fc4(), index);
        if (FUN_0203a1fc(found)) {
            return 0;
        }
        quantity = FUN_020849d4(item);
        stackable = FUN_02084900(found);
        if (quantity >= 0 && quantity <= FUN_020849d4(found)) {
            valid = 1;
        } else {
            valid = 0;
        }
        if (!FUN_overlay_12__0212be04(self, FUN_overlay_12__0212be18(self, index))) {
            if (!stackable || valid) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
