//cpp
// flags: -O4,s
struct Child {
    virtual void v0();
    virtual void v1();
    virtual void attach(void *);
    unsigned handle;
};
struct Mgr {
    unsigned pad[54];
    Child *slots[40];
    unsigned counter;
};
extern "C" int FUN_overlay_19__02198438(Mgr *self, Child *child) {
    if (!child) return 0;
    for (int i = 0; i < 40; i++) {
        if (self->slots[i] == 0) {
            self->slots[i] = child;
            self->counter++;
            unsigned handle = (self->counter << 8) + (unsigned)i;
            child->handle = handle;
            child->attach(self);
            return (int)handle;
        }
    }
    return -1;
}
