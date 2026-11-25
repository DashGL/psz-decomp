//cpp
// flags: -O4,s
struct Vec { union { struct { int x, y, z; }; int w[3]; }; };

class Obj;
typedef void (Obj::*Action)();
struct Entry {
    Action enter;
    Action exit;
    int pad[3];
};

class Obj {
public:
    unsigned pad0[4];
    Vec pos;
    unsigned pad1[3];
    unsigned short rot[3];
    unsigned short pad2;
    Vec saved_pos;
    unsigned short saved_rot[3];
    unsigned short pad3;
    int state;
    int timer;
    unsigned pad4[3];
    unsigned short pad5;
    signed char params[4];
};

extern "C" Entry DAT_overlay_22__021a1274[];
extern "C" void FUN_overlay_22__0219b0d8(void *);

extern "C" void FUN_overlay_22__0219b274(Obj *self, int state, const signed char *params) {
    if (state < 0 || state >= 14) {
        return;
    }
    Action exit_fn = DAT_overlay_22__021a1274[self->state].exit;
    if (exit_fn) {
        (self->*exit_fn)();
    }
    self->state = state;
    if (!params) {
        FUN_overlay_22__0219b0d8(self->params);
        self->params[0] = (signed char)self->state;
    } else {
        self->params[0] = params[0];
        self->params[1] = params[1];
        self->params[2] = params[2];
        self->params[3] = params[3];
    }
    Action enter_fn = DAT_overlay_22__021a1274[self->state].enter;
    if (enter_fn) {
        (self->*enter_fn)();
    }
    self->saved_pos = self->pos;
    self->saved_rot[0] = self->rot[0];
    self->saved_rot[1] = self->rot[1];
    self->saved_rot[2] = self->rot[2];
    self->timer = 0;
}
