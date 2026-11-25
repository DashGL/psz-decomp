//cpp
// flags: -O4,s
class Obj;
typedef void (Obj::*Action)();
struct Entry { Action exit; int pad[4]; };
class Obj {
public:
    void *vtbl;
    unsigned pad[16];
    int state;
};
extern "C" {
extern void *DAT_021a1064[];
extern Entry DAT_021a10bc[];
extern void *FUN_overlay_22__0219a048(void *);
extern void FUN_020ba8ac(void *);
}
extern "C" void *FUN_overlay_22__021980e0(Obj *self) {
    self->vtbl = DAT_021a1064;
    Action fn = DAT_021a10bc[self->state].exit;
    if (fn) {
        (self->*fn)();
    }
    FUN_overlay_22__0219a048(self);
    FUN_020ba8ac(self);
    return self;
}
