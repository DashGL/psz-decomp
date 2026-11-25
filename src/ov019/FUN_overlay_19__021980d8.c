//cpp
// flags: -O4,s
class Child {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual void onEvent(int, int);
};
struct Manager {
    int pad[16];
    Child *children[9];
    int idx;
};
extern "C" Manager *DAT_02108c84;
extern "C" void FUN_overlay_19__021980d8(unsigned int *self, int bit) {
    self[53] |= (1U << bit);
    if (bit == 10) {
        Manager *m = DAT_02108c84;
        if (m) {
            Child *c = m->children[m->idx];
            if (c) {
                c->onEvent(4096, 10);
            }
        }
    }
}
