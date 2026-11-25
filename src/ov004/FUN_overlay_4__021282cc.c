// flags: -O4,s
typedef struct {
    int v[3];
} Triple_021282cc;
typedef struct {
    unsigned short h[3];
} Icons3_021282cc;
extern const Triple_021282cc DAT_0212df5c;
extern const unsigned short DAT_0212df2c[];
extern void FUN_020c331c(unsigned int, int, int, int);
extern void FUN_overlay_4__02128584(int *, int *, int);
extern void FUN_overlay_4__021285e8(int *);
extern void FUN_overlay_4__021288d0(int *);
extern void FUN_overlay_4__0212826c(int *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern int FUN_020bbf6c(unsigned int);
extern int FUN_02072c20(void *, int, int);
extern void *FUN_02072af0(void);
void FUN_overlay_4__021282cc(int *self) {
    Triple_021282cc actions = DAT_0212df5c;
    Icons3_021282cc icons = *(const Icons3_021282cc *)&DAT_0212df2c[8];
    int i;
    for (i = 0; i < 3; i++) {
        FUN_020c331c(icons.h[i], 0x1a000, 0xf3000 + 0xd000 * i, self[9]);
    }
    FUN_overlay_4__02128584(self, self + 4, 3);
    FUN_overlay_4__021285e8(self);
    FUN_overlay_4__021288d0(self);
    if (FUN_020bbf6c(1)) {
        FUN_overlay_4__0212826c(self, actions.v[self[4]]);
        FUN_020c193c(0, 0, 0, 0, -1);
    }
    if (FUN_020bbf6c(2)) {
        FUN_overlay_4__0212826c(self, 5);
        FUN_02072c20(FUN_02072af0(), 1, 1);
        FUN_020c193c(0, 1, 0, 0, -1);
    }
}
