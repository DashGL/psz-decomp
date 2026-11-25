// flags: -O4,s
extern const short DAT_020ed83c[];

typedef struct {
    int id, scale, x, y, z;
} Frame;

extern int FUN_02074f94(void *);
extern int FUN_02037208(void *, int);
extern void *FUN_02035408(void *, int, int, int);
extern void FUN_02092654(void *, void *);
extern void *FUN_020ba894(unsigned);
extern void *FUN_overlay_31__02197fdc(void *, void *, void *, int *);
extern int FUN_02074fc4(void *, void *, int, int);

void FUN_overlay_31__0219ba38(int *self)
{
    Frame f;
    int slot = FUN_02074f94(self);

    if (slot != -1) {
        int index = ((unsigned short)(FUN_02037208(self, 0x6000) - 0x3000) >> 4) * 2;
        void *p;

        FUN_02035408(&f.x, DAT_020ed83c[index], FUN_02037208(self, 0x14cd) + 0x99a, DAT_020ed83c[index + 1]);
        f.scale = FUN_02037208(self, 0x1800) + 0x99a;
        FUN_02092654(&f.x, &f.scale);
        p = FUN_020ba894(272);
        if (p) {
            f.id = self[3];
            p = FUN_overlay_31__02197fdc(p, self + 14, &f.x, &f.id);
        }
        FUN_02074fc4(self, p, slot, 0);
    }
}
