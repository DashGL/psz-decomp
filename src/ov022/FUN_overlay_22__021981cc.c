//cpp
// flags: -O4,p
struct Vec {
    int v[3];
};

struct Obj;
typedef void (Obj::*StateFn)(void);

struct StateEntry {
    StateFn enter;
    StateFn exit;
    StateFn unk;
};

extern StateEntry DAT_021a10b4[];
extern "C" void FUN_overlay_22__02197fe8(void *);

struct Obj {
    unsigned char pad0[0x10];
    Vec pos;
    unsigned char pad1[0x0c];
    unsigned short rot[3];
    unsigned short pad2;
    Vec prevPos;
    unsigned short prevRot[3];
    unsigned short pad3;
    int state;
    int timer;
    unsigned char pad4[0x100];
    signed char params[8];
};

extern "C" void FUN_overlay_22__021981cc(Obj *self, int state, const signed char *params) {
    if (state < 0 || state >= 13) {
        return;
    }
    StateFn fn = DAT_021a10b4[self->state].exit;
    if (fn != 0) {
        (self->*fn)();
    }
    self->state = state;
    if (params == 0) {
        FUN_overlay_22__02197fe8(self->params);
        self->params[0] = (signed char)self->state;
    } else {
        self->params[0] = params[0];
        self->params[1] = params[1];
        self->params[2] = params[2];
        self->params[3] = params[3];
        self->params[4] = params[4];
        self->params[5] = params[5];
        self->params[6] = params[6];
        self->params[7] = params[7];
    }
    StateFn fn2 = DAT_021a10b4[self->state].enter;
    if (fn2 != 0) {
        (self->*fn2)();
    }
    self->prevPos = self->pos;
    self->prevRot[0] = self->rot[0];
    self->prevRot[1] = self->rot[1];
    self->prevRot[2] = self->rot[2];
    self->timer = 0;
}
