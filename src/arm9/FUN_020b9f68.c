//cpp
// flags: -O4,s
extern "C" void FUN_020b9e9c(void *);
enum { E0 = 0, E1 = 1 };
struct Node {
    virtual ~Node();
    unsigned int flags;
    int pad[3];
    Node *next;
    int pad2;
    Node *child;
    inline int has(unsigned int m) {
        return (flags & m) ? E1 : E0;
    }
};
extern "C" void FUN_020b9f68(Node *param_1) {
    Node *r4 = param_1->child;
    while (param_1->child != 0 && r4 != 0) {
        Node *r5 = r4;
        r4 = r4->next;
        if (r5->has(0x17)) {
            if (r5->has(1)) {
                r5->flags &= ~1u;
                if (!r5->has(0x40)) {
                    delete r5;
                    continue;
                }
            }
            if (r5->has(4)) {
                FUN_020b9e9c(r5);
                r5->flags &= ~4u;
            }
        } else {
            if (!r5->has(8)) {
                FUN_020b9f68(r5);
            }
        }
    }
}
