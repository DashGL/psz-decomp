// flags: -O4,s
typedef struct { int w[7]; } Config7;
typedef struct { int w[6]; } Config6;
enum { E0 = 0, E1 = 1 };
extern const Config7 DAT_overlay_12__02138618, DAT_overlay_12__021385fc;
extern const Config6 DAT_overlay_12__021385e4;
extern int *DAT_overlay_12__0213f2e0;
extern int FUN_overlay_12__0212bc2c(void *), FUN_0203a1fc(void *), FUN_02084900(void *), FUN_020849d4(void *), FUN_overlay_12__0212be18(void *, int), FUN_overlay_12__021323b0(void *, const void *);
extern int *FUN_overlay_12__02129fd8(void);
extern char *FUN_overlay_12__02129fc4(void), *FUN_overlay_12__02129fd0(void);
extern void *FUN_020b00ac(void *, int), *FUN_overlay_12__0212aadc(void *);
extern void FUN_overlay_12__02133264(void *, const void *), FUN_0203955c(void *), FUN_overlay_12__02129e34(void *, int), FUN_overlay_12__0212c9a0(void), FUN_overlay_12__0213248c(void *, const void *, unsigned, unsigned, unsigned), FUN_020c193c(int, int, int, int, int);
extern void FUN_overlay_12__0212ae08(void), FUN_overlay_12__0212af20(void), FUN_overlay_12__0212af34(void), FUN_overlay_12__0212b19c(void *, int, int, int, void (*)(void), void (*)(void));

int FUN_overlay_12__0212b9dc(int *self)
{
    int index, quantity, i;
    char *slot, *inventory, *player;
    Config7 options, menu;
    Config6 row, defaults;
    switch (self[110]) {
    case 0:
        index = FUN_overlay_12__0212bc2c(self);
        if (index == -1 || index < 0 || index >= 8) break;
        slot = (char *)self + 112 + 20 * index;
        if (((!FUN_0203a1fc(slot)) ? E1 : E0) != 0) {
            if (FUN_02084900(slot)) {
                if (index == 7) quantity = FUN_overlay_12__02129fd8()[13];
                else quantity = FUN_020849d4(FUN_020b00ac(FUN_overlay_12__02129fc4(), *(int *)(slot + 16)));
                options = DAT_overlay_12__02138618;
                options.w[2] = quantity;
                options.w[4] = FUN_020849d4(slot);
                FUN_overlay_12__02133264(self, &options);
                if (DAT_overlay_12__0213f2e0) DAT_overlay_12__0213f2e0[15] = 1;
            } else {
                *(int *)(slot + 16) = -1;
                FUN_0203955c(slot);
                FUN_overlay_12__0212aadc(self);
                FUN_overlay_12__02129e34(self, index);
            }
            return 1;
        }
        menu = DAT_overlay_12__021385fc;
        FUN_overlay_12__0212c9a0();
        FUN_overlay_12__0213248c(self, &menu, 0, 0, 0);
        inventory = FUN_overlay_12__02129fc4();
        player = FUN_overlay_12__02129fd0();
        {
            int cnt = *(short *)(inventory + 8);
            i = 0;
            defaults = DAT_overlay_12__021385e4;
            for (; i < cnt; i++) {
                void *item = FUN_020b00ac(inventory, i);
                if (!FUN_0203a1fc(item) && FUN_overlay_12__0212be18(self + 28, i) == -1) {
                    row = defaults;
                    row.w[0] = i;
                    row.w[1] = (i >= 0 && i < *(short *)(player + 12)) ? (((*(unsigned **)(player + 8))[i] != 0) ? 1 : 0) : 0;
                    FUN_overlay_12__021323b0(item, &row);
                }
            }
        }
        return 1;
    case 1:
        FUN_overlay_12__0212b19c(self, 7, 3, 1, FUN_overlay_12__0212ae08, FUN_overlay_12__0212af20);
        self[124] = 1;
        return 1;
    case 2:
        FUN_overlay_12__0212b19c(self, 8, 3, 1, FUN_overlay_12__0212af34, 0);
        return 1;
    }
    FUN_020c193c(0, 5, 0, 0, -1);
    return 0;
}
