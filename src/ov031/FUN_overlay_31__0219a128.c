// flags: -O4,s
extern int DAT_0219c5c0[];
extern int FUN_02074f94(void *);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_31__02198440(void *, void *, int *, int, int);
extern int FUN_02074fc4(void *, void *, int, int);
void FUN_overlay_31__0219a128(int *self, int value) {
    int slot = FUN_02074f94(self);
    if (slot != -1) {
        void *p = FUN_020ba894(360);
        if (p) {
            int idx = self[54];
            int id = self[3];
            p = FUN_overlay_31__02198440(p, self + 14, &id, value, DAT_0219c5c0[idx]);
        }
        FUN_02074fc4(self, p, slot, 0);
    }
}
