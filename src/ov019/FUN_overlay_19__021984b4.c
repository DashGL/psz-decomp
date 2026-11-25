//cpp
// flags: -O4,s
class Child {
public:
    int id;
    virtual ~Child();
    virtual void v2();
    virtual void v3();
    virtual void notify(void *);
};
struct Mgr {
    int pad[54];
    Child *slots[40];
};
extern "C" void FUN_overlay_19__021984b4(Mgr *self, int id) {
    int index = (unsigned char)id;
    if (index < 40) {
        if (self->slots[index] != 0 && id == self->slots[index]->id) {
            self->slots[index]->notify(self);
            if (self->slots[index] != 0) {
                delete self->slots[index];
                self->slots[index] = 0;
            }
        }
    }
}
