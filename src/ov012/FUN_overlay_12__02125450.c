//cpp
// flags: -O4,s
class Res {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual const char *v3(int);
};

extern "C" {
extern void *FUN_overlay_12__021232b0(void);
extern void *FUN_020ba918(unsigned);
extern void *FUN_overlay_12__02125c88(void *, void *, int);
extern void FUN_overlay_12__021232d8(void *, int);
extern void FUN_overlay_12__02125efc(void *, int);
extern void FUN_overlay_12__02125f0c(void *, const char *);
extern int FUN_overlay_12__02125708(void *, int);
extern int FUN_overlay_12__02125f28(void *, int);
extern int FUN_overlay_12__0212599c(void *);
extern int FUN_020c3f90(char *, unsigned, const char *, ...);
extern const char *FUN_overlay_12__02125960(void *);
void FUN_overlay_12__02125450(int *self, unsigned state);
}

void FUN_overlay_12__02125450(int *self, unsigned state)
{
    void *child;
    const char *name, *format;
    char quantity_text[256], item_text[256];
    switch (state) {
    case 0:
        if (self[2] == 1) {
            FUN_overlay_12__021232d8(FUN_overlay_12__021232b0(), 0);
        } else {
            FUN_overlay_12__021232d8(FUN_overlay_12__021232b0(), 1);
        }
        self[16] = -1;
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            FUN_overlay_12__02125efc((void *)self[10], 3);
        }
        break;
    case 1:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            FUN_overlay_12__02125efc((void *)self[10], 4);
            FUN_overlay_12__02125f28((void *)self[10], 0);
        }
        break;
    case 2:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            FUN_overlay_12__02125efc((void *)self[10], 5);
            FUN_overlay_12__02125f28((void *)self[10], 0);
        }
        break;
    case 3:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            name = FUN_overlay_12__02125960(self);
            if (FUN_overlay_12__0212599c(self) && name) {
                format = ((Res *)(self + 3))->v3(2);
                FUN_020c3f90(quantity_text, 256, format, name);
                FUN_overlay_12__02125f0c((void *)self[10], quantity_text);
            } else {
                FUN_overlay_12__02125efc((void *)self[10], 1);
            }
            FUN_overlay_12__02125f28((void *)self[10], 0);
        }
        break;
    case 4:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            name = FUN_overlay_12__02125960(self);
            if (name) {
                format = ((Res *)(self + 3))->v3(9);
                FUN_020c3f90(item_text, 256, format, name);
                FUN_overlay_12__02125f0c((void *)self[10], item_text);
            }
            FUN_overlay_12__02125f28((void *)self[10], 0);
        }
        break;
    case 5:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            FUN_overlay_12__02125efc((void *)self[10], 8);
        }
        break;
    case 6:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            FUN_overlay_12__02125efc((void *)self[10], 7);
            FUN_overlay_12__02125f28((void *)self[10], 0);
        }
        break;
    case 7:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            FUN_overlay_12__02125efc((void *)self[10], 6);
            FUN_overlay_12__02125f28((void *)self[10], 0);
        }
        break;
    case 8:
        child = FUN_020ba918(364);
        if (child) child = FUN_overlay_12__02125c88(child, self + 3, FUN_overlay_12__02125708(self + 3, 0));
        self[10] = (int)child;
        if (self[10]) {
            if (self[18]) {
                FUN_overlay_12__02125f0c((void *)self[10], (const char *)self[18]);
                FUN_overlay_12__02125f28((void *)self[10], 0);
            }
        }
        break;
    case 9:
        break;
    }
}
