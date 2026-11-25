// flags: -O4,p
//cpp
extern "C" {
extern int FUN_overlay_12__0212d08c(void *);
extern void FUN_overlay_12__0212dc68(void *, unsigned int);
extern void *FUN_overlay_12__02132020(int, void *);
extern void *DAT_0213f2d0;
}
enum { E0 = 0, E1 = 1 };

struct Obj_cc08 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    int pad[7];
    int state;   // +0x20
    int handle;  // +0x24
    int pad2[52];
    int ready;   // +0xf8
};

extern "C" void FUN_overlay_12__0212cc08(Obj_cc08 *self) {
    switch (self->state) {
    case 0:
        if (((self->ready != 0) ? E1 : E0) != 0) {
            if (FUN_overlay_12__0212d08c(self)) {
                self->state = 2;
            } else {
                FUN_overlay_12__0212dc68(self, 0);
                self->state = 1;
            }
        }
        break;
    case 2:
        if (!FUN_overlay_12__02132020(self->handle, self)) {
            self->handle = -1;
            FUN_overlay_12__0212dc68(self, 1);
            self->state = 1;
        }
        break;
    case 1:
        if (((DAT_0213f2d0 != 0) ? E1 : E0) == 0) {
            self->state = 3;
            self->v2();
        }
        break;
    }
}
