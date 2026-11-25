//cpp
// flags: -O4,s
class Obj;
typedef void (Obj::*Action)();
struct Entry { Action exit; int pad[4]; };
class Obj {
public:
    unsigned pad[25];
    int prev;
    volatile int state;
};
extern "C" Entry DAT_0219da80[];
extern "C" void FUN_overlay_23__0219bc08(Obj *self) {
    int active = (self->state != -1) ? 1 : 0;
    if (active) {
        Action fn = DAT_0219da80[self->state].exit;
        (self->*fn)();
        self->prev = -1;
        self->state = -1;
    }
}
