//cpp
// flags: -O4,p
struct Obj_020a4920 {
    virtual void f0();
    virtual void f4();
    virtual void init(void *, int, int, int);
};
extern void *DAT_020fbfe4;
extern char DAT_020fbff8[];
extern "C" void FUN_020c2aa8(void *);
extern "C" Obj_020a4920 *FUN_020a4920(Obj_020a4920 *self) {
    FUN_020c2aa8(self);
    *(void **)self = &DAT_020fbfe4;
    self->init(DAT_020fbff8, 7, 3, 5);
    return self;
}
