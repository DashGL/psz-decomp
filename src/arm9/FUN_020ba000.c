//cpp
// flags: -O4,s
struct Node_020ba000 {
    int f0;
    unsigned int flags;
    int pad[4];
    Node_020ba000 *next;
};
extern "C" int FUN_020ba000(Node_020ba000 *p) {
    while (p != 0) {
        int ok = ((p->flags & 1) != 0) ? 1 : 0;
        if (ok != 0) {
            return 0;
        }
        p = p->next;
    }
    return 1;
}
