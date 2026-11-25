//cpp
// flags: -O4,s
enum { E0 = 0, E1 = 1 };
struct NodeB9EBC {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    unsigned int flags;
    int pad[3];
    NodeB9EBC *next;
    int pad2;
    NodeB9EBC *child;
};
extern "C" {
void FUN_020b9e9c(void *);

void FUN_020b9ebc(NodeB9EBC *s) {
    NodeB9EBC *next = s->child;
    NodeB9EBC *p;
    unsigned int flags;
    while (s->child && next) {
        p = next;
        next = p->next;
        flags = p->flags;
        if (((flags & 0x17) ? E1 : E0) != 0) {
            if (((flags & 1) ? E1 : E0) != 0) {
                p->flags &= ~1;
                flags = p->flags;
                if (((flags & 0x40) ? E1 : E0) == 0) {
                    if (p) p->v1();
                    continue;
                }
            }
            if (((flags & 4) ? E1 : E0) != 0) {
                FUN_020b9e9c(p);
                p->v3();
                p->flags &= ~4;
            }
        } else {
            p->v3();
            if (((p->flags & 8) ? E1 : E0) == 0) FUN_020b9ebc(p);
        }
    }
}
}
